#include <iostream>
#include <ctime>

using namespace std;

int partition(int a[], int i, int j) {
	int p = a[i]; //p is the pivot
	int m = i;

	for (int k = i + 1; k <= j; k++) {
		if (a[k] < p) {
			m++;
			swap(a[k], a[m]);
		}
		else {
			//do nothing
		}
	}
	swap(a[i], a[m]);
	return m; //m is the index of pivot
}

void quickSort(int a[], int low, int high) {
	if (low < high) {
		int pivotIdx = partition(a, low, high); //splits a[low...high] into a[low...pivot-1] and a[pivot+1...high]

		quickSort(a, low, pivotIdx - 1); //recursively sort
		quickSort(a, pivotIdx + 1, high);
	}
}
