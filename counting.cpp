#include <iostream>
using namespace std;

int main(){
	int acak[6] = {3,1,7,4,3,5};
	int kumulatif[8] = {0,0,0,0,0,0,0,0};
	int hasil[6];
	int temp;
	int jumlah;
	int a;
	
	//langkah pertama
	for (int i=0; i<=5; i++){
		temp = acak[i]; //step 1
		jumlah = kumulatif[temp]; //step 2
		jumlah = jumlah + 1; //step 3
		kumulatif[temp] = jumlah;
	}
	//cek
	for (int j=0; j<=7; j++){
		cout<<kumulatif[j];
	}
	cout<<endl;
	
	//langkah kedua
	for (int i=0; i<7; i++){
		a = kumulatif[i] + kumulatif[i+1];
		kumulatif[i+1] = a;
	}
	//cek
	for (int j=0; j<=7; j++){
		cout<<kumulatif[j];
	}
	cout<<endl;
	
	//langkah ketiga
	int c;
	for (int i=0; i<=5; i++){
		temp = acak[i]; //step 1
		c = kumulatif[temp] - 1;
		kumulatif[temp] = c;
		hasil[c] = temp;	
	}
	//cek
	for (int j=0; j<=5; j++){
		cout<<hasil[j];
	}
	
	
	
}
