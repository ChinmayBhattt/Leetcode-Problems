#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ArrayIntersection {
public:
    vector<int> intersection(int arr1[], int arr2[], int n, int m) {
        vector<int> ans;
        int i = 0, j = 0;

        sort(arr1, arr1 + n);  // Sort the first array
        sort(arr2, arr2 + m);  // Sort the second array

        while (i < n && j < m) {
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
            } 
            else if (arr1[i] < arr2[j]) {
                i++;
            } 
            else {
                j++;
            }
        }

        return ans;
    }
};

int main() {
    ArrayIntersection AI;

    int arr1[5] = {1, 2, 6, 3, 7};
    int arr2[5] = {4, 7, 6, 4, 9};

    vector<int> result = AI.intersection(arr1, arr2, 5, 5);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



// --------------1st------------


// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i =0; i<size; i++){
//         if(arr[i] == key ){
//             return 1;
//         }
//     }

//     return 0;

// }

// int main() {
//     //whether 1 is +nt in it or not?  

//     int A[5] = {5, 7, 62, 10, 8};
//     int B[5] = {1, 5, 2, 10, 2};

//     cout<<"Enter The Element to Search For "<<endl;

//     int key;
//     cin >> key;

//     bool found =  search(A, 5, key);
//     bool found1 =  search(B, 5, key);

//     if(found==found1){
//         cout<<"A (intersection) B" <<endl;
//     }
//     else{
//         cout<<"A (Not intersection) B" <<endl;

//     }
    


    
// }



// --------------2nd------------


// int A[5] = {5, 7, 2, 4, 6};
// int B[5] = {1, 5, 2, 10, 6};

// for (int  i = 0; i < 5; i++)
// {
//     if(A[i]==B[i]) {
//         cout <<"A (intersection) B: " <<A[i] <<endl;
//         break;
//     }
    
// }
