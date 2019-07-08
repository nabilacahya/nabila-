#include <iostream>
using namespace std;

struct barang{
	int harga;
	barang* alamat;
};
barang *n, *temp;
barang *head = NULL;
barang *tail = NULL;

void barangbaru(int harga){
	n = new barang;
	n->harga = harga;
	n->alamat = NULL;
	if(head == NULL){
		head = n;
		tail = n;	
	}else{
		tail-> alamat = n;	
	}	
}

void tampilbarang(){
	cout<<" KERANJANG " <<endl;
	temp = head;
	while(temp != NULL){
		cout<<temp->harga<<endl;
		temp = temp->alamat;
	}
}

int main(){
	barangbaru(2000);
	barangbaru(5000);
	barangbaru(7000);
	
	tampilbarang();
	
	
}
