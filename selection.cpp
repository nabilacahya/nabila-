#include <iostream>
using namespace std;

int main(){
	
	int data[4] = {3,4,1,2};
				// 0 1 2 3
	
				
	for(int i=0; i<3; i++){
		int temp;
		int indeks = i;
		for(int j=i+1; j<=3; j++){
			if(data[indeks]>data[j]){
				indeks = j;				
			}
		}
		temp = data[indeks];
		data[indeks] = data[i];
		data[i] = temp; 
	}
	for(int i=0; i<4; i++){
		cout<<data[i]<<" ";
	}
}
