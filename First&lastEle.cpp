#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2; Out of INT range
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;


}

int main() {

    int even[6] = {2,4,6,8,8,14};
    int odd[5] = {3,8,11,13,15};

    int evenIndex = BinarySearch(even, 6, 12);
    int oddIndex = BinarySearch(odd, 5, 38);

    cout << "Index of 18 is " <<evenIndex << endl;
    cout << "Index of 38 is " <<oddIndex << endl;


}