#include <iostream>

using namespace std;

void shellSort (int a[], int size) {
  for (int gap = size/2; gap>0; gap/=2) {
    for (int i=gap; i<size; i++) {
      int temp = a[i];
      int j;
      for (j=i; i>gap && a[j-gap]>temp; j-=gap) {
        a[j] = a[j-gap]; 
      }
      a[j]=temp;
    }
  }
}
