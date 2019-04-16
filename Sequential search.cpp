#include <iostream>
using namespace std;

int main () {
	int data[8] = {3, 4, 7, 5, 1, 2, 8, 6};
	int cari;
	
	cout << "Masukkan angka yang akan dicari : ";
	cin >> cari;
	
	for (int i = 0; i<8; i++) {
		if (data[i] == cari) {
			cout << "Data ditemukan! di array indeks ke- " << i;
		}
	}	
}
