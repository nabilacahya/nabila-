#include <iostream>
using namespace std;

// A function to merge the two half into a sorted data.
void Merge(int a[], int low, int high, int mid) {
	
	// we have Low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high - low+1];
	i = low;
	k = 0;
	j = mid + 1;
	
	// Merge the two parts into temp[].
	while (i <= mid && j <= high) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	
	// insert all the remaining values from i to high into temp[].
	while (i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}
	
	// insert all the remaining values from j to high into temp[].
	while (j <= high) {
		temp[k] = a[j];
		k++;
		j++;
	}
	
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++) {
		a[i] = temp[i-low];
	}
}

// A function to split dataay into two parts.
void MergeSort(int a[], int low, int high) {
	int mid;
	
	if (low < high) {
		mid = (low + high) / 2;
		
		// split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		
		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
	return;
}

int main () {
	int i;
	int data[8] = {3, 4, 7, 5, 1, 2, 8, 6};
	
	MergeSort (data, 0, 8-1);
	
	// printing the sorted data.
	cout << "\nSorted Data";
	for (i = 0; i < 8; i++) {
		cout << "-> " << data[i];
	}
	return 0;
}










