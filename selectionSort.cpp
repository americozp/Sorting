#include <iostream>
#include <ctime>

using namespace std;

void selectionSort(int a[], int n) 
{  
  for (int i = n-1; i >= 1; i--) {
    int maxIdx = i;
    for (int j = 0; j < i; j++) { 
      if (a[j] >= a[maxIdx]) {
        maxIdx = j;
        int temp = a[j]; //swap values
        a[j] = a[maxIdx];
        a[j] = temp;
      }
    }
  }
}
