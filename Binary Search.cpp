#include <iostream>
using namespace std;

// butuh array, angka cari, ujung kiri, ujung kanan.
void binary(int data[], int cari, int kiri, int kanan) {
	int tengah = (kiri + kanan) /2;
	
	if (data[tengah] == cari) {
		cout << "Data ditemukan di array indeks ke- " << tengah;
	}
	else if (data[tengah] < cari) {
		// data tengah+1 ke kanan.
		binary(data, cari, tengah+1, kanan);
	}
	else {
		// data tengah-1 ke kiri.
		binary(data, cari, kiri, kanan-1);
	}	
}

int main () {
	
	int data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
				// 0  1  2  3  4  5  6  7
					
	int cari = 5;
	
	binary(data, cari, 0, 7);
	
}
