#include <iostream>
using namespace std;

int maxiNumber(int arr[], int size) {

   int maxi = 3;
  int ans;
  for (int i = 0; i < size; i++)
  {
    ans = arr[i];
    if (maxi < arr[i]) {
      arr[i]++;
    }
  }

  return ans;
}


int main () {

  int i = 0;
  int n = 6;
  while(i<=n) {

    int j = 1;

    while(j<=n-i) {
      cout << "*";
      j++;
    }
    int i1 = 1;
    int n1 = 6;
    while(i1<=n1) {
  
      int j1 = 1;
  
      while(j1<=i1) {
        cout << "*";
        j1++;
      }
      cout << endl;
      i1++;
    } 
    cout << endl;
    i++;
    
  } 



  
    return 0;
    
}