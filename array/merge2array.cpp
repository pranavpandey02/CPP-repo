#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1=3;
    int n2=3;
    int n3= 6;   
    int arr3[6];
    
    // Copy elements of arr1 to mergedArray
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements of arr2 to mergedArray
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    
    // Print the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr3[i];
    }
}
