#include <iostream>
using namespace std;


void sort012(int arr[], int n)
{
   sort(arr, arr + n);   
   
   for(int i = 0; i<n; i++) {

     cout << arr[i];
   }
}

int main() {

    int arr[7] = {0,1,0,0,1,1,0};
    int brr[7] = {0,2,2,0,1,1,0};
    sort012(arr,7);
    cout <<endl;
    sort012(brr,7);
}