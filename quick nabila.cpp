#include <iostream>
using namespace std;

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

	if(kiri<j){
		quicksort(data,kiri,j);	
	}
	
	if(i<kanan){
		quicksort(data,i,kanan);
	}
	
}

int main(){
	int data[5] = {3,1,4,2,5};
	
	quicksort(data, 0, 4);
	for(int i=0; i<5; i++){
		cout<<data[i]<<" ";
	}
}
