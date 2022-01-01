#include <iostream>

using namespace std;

void maxHeapify(int a[], int size, int index) {
  int largest = index; //root
  int l = 2*index;
  int r = (2*index)+1;
  while (l<=size && a[l]>a[largest]) {
    largest = l; 
  }
  while (r<=size && a[r]>a[largest]) {
    largest = r; 
  }
  if (largest!=index) {
    swap(a[index],a[largest]);
    maxHeapify(a,size,largest);
  }
}

void heapSort(int a[], int size) {
  for (int i=size/2; i>=1; i--) {
    maxHeapify(a,size,i); 
  }
  for (int i=size; i>=1; i--) {
    swap(a[1],a[i]);
    maxHeapify(a,size,1);
  }
}
