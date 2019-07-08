#include <iostream>
using namespace std;

int data[5000],data2[5000];
int n;

void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}
void selection_sort()
{
 int pos,i,j;
 for(i=0;i<=n-1;i++)
 {
  pos = i;
  for(j = i+1;j<=n;j++)
  {
   if(data[j] < data[pos]) pos = j;
  }
  if(pos != i) tukar(pos,i);
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
 
 selection_sort();
 cout<<"Data Setelah di Sort : "<<endl;
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<data[i];
 }
 
}
