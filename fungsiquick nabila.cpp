#include <iostream>
using namespace std;

int data[5000],data2[5000];
int n;

void quicksort(int data[], int kiri, int kanan){
	int i = kiri;
	int j = kanan;
	int temp;
	int pivot = data[(kiri+kanan)/2];
	
	while(i<=j){
		while(data[i] < pivot){
			i++;
		}
		while(data[j] > pivot){
			j--;
		}
		if (i<=j){
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			i++;
			j--;
		}
	}
	//tengah ke kanan
	if(kiri<j){
		quicksort(data,kiri,j);	
	}
	//tengah ke kiri
	if(i<kanan){
		quicksort(data,i,kanan);
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

	
	quicksort(data, 0, 4);
	for(int i=0; i<5; i++){
		cout<<data[i]<<" ";
	}
}
