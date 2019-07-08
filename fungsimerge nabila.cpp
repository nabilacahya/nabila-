#include <iostream>
using namespace std;

int data[100];

void mergeSort(int awal, int mid, int akhir)
{
    cout<<endl;
    int temp[100], tempAwal = awal, tempMid = mid, i = 0;
    while(tempAwal < mid && tempMid < akhir)
    {
        if(data[tempAwal] < data[tempMid])
            temp[i] = data[tempAwal],tempAwal++;
        else
            temp[i] = data[tempMid],tempMid++;
        i++;
    }
    while(tempAwal < mid)  //kalau masih ada yang sisa
        temp[i] = data[tempAwal],tempAwal++,i++;
    while(tempMid < akhir)
        temp[i] = data[tempMid],tempMid++,i++;
    for(int j=0,k=awal;j<i,k<akhir;j++,k++)  //mengembalikan ke array semula, tapi
	   data[k] = temp[j]; //sudah urut
}

void merge(int awal, int akhir) //membagi data secara rekursif
{
    if(akhir-awal != 1)
    {
        int mid = (awal+akhir)/2;
        merge(awal, mid);
        merge(mid, akhir);
        mergeSort(awal, mid, akhir);
    }
}

int main()
{
    int n;
    cout<<"Masukan banya data = ";cin>>n;
    cout<<"Masukan data yang akan di susun = ";
    for(int i=0;i<n;i++)
        cin>>data[i];
    merge(0,n);
    for(int i=0;i<n;i++)
        cout<<data[i]<<' ';
    return 0;
}
