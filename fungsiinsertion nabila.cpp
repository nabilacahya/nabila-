#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int data[10],data2[10];
int n;

void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}

void insertion_sort()
{
 int temp,i,j;
 
 
	for (int i=1; i<n; i++){
		temp = data[i];
		j = i;
		while (data[j]<data[j-1] && j>0){
			data[j] = data[j-1];
			data[j-1] = temp;
			j--;
		}
}
}

int main(){

int n,c;
	
	cout<<"masukkan panjang array : "; cin>>n;
		int data[n];
		
		for (int i=n;i>c;i--){
			data[i] = i;
		cout << data[i]<< " ";
        data2[i] = data[i];
	} 
	
	cout<<endl;
	cout<<endl;

 insertion_sort();
 cout<<"Data Setelah di Sort : ";
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<data[i];
 }
 
}
