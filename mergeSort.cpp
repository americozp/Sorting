#include <iostream>
#include <ctime>

using namespace std;

void merge(int a[], int low, int mid, int high) {
	int n = high - low + 1;
	int* b = new int[n]; //temp array to store result
	int left = low; 
	int right = mid + 1; 
	int index = 0;

	while (left <= mid && right <= high) { //normal merging where both halves have unmerged items
		if (a[left] <= a[right]) {
			b[index++] = a[left++];
		}
		else {
			b[index++] = a[right++];
		}
	}
	while (left <= mid) { //remaining items are copied into b array
		b[index++] = a[left++];
	}
	while (right <= high) {
		b[index++] = a[right++];
	}
	for (int k = 0; k < n;k++) { //result is copied back to array a
		a[low + k] = b[k];
	}
	delete[] b;
}

void mergeSort(int a[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		mergeSort(a, low, mid); //divides a[] into two halves and recursively sort
		mergeSort(a, mid + 1, high);
		merge(a, low, mid, high); //merges a[low...mid] and a[mid+1...high] into a[low...high]
	}
}
