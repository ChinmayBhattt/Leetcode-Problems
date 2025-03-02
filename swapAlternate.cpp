#include<iostream>
using namespace std;

void swapAleternate(int arr[], int size) {
    for (int i = 0; i < size; i+=2)
    {
        if((i + 1) < size) {
            swap(arr[i], arr[i+1]);
        }
   }
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main () {

    int odd[5] = {1,2,3,4,5};
    int even[6] = {1,2,3,4,5,6};

    swapAleternate(odd,5);
    printArray(odd,5);

    cout << endl;
    swapAleternate(even,6);
    printArray(even,6);

    

    return 0;
}

// ----------Without Swap Funtion-----------

// #include<iostream>
// using namespace std;

// void swapAleternate(int arr[], int size) {
//     int temp;
//     for (int i = 0; i < size; i+=2)
//     {
//         if((i + 1) < size) {
//             temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;        
//         }
        
//     }
    
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i <n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }

// int main () {

//     int odd[5] = {1,2,3,4,5};
//     int even[6] = {1,2,3,4,5,6};

//     swapAleternate(odd,5);
//     printArray(odd,5);

//     cout << endl;
//     swapAleternate(even,6);
//     printArray(even,6);

    

//     return 0;
// }