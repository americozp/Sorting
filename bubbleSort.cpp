#include <iostream>
#include <ctime>

void bubblesort(int a[], int n) {
  for (int i=n-1; i>=1; i--) {
    for (int j=1; j<=1; j++) {
      if (a[j-1] > a[j]) {
        int temp;
        temp = a[j-1];
        a[j-1] = a[j];
        a[j] = temp;
      }
    }
  }
}
