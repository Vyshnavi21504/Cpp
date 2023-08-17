#include <iostream>
using namespace std;

void selectionsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop through the array
        int mini = i; // Assume the current element is the smallest
        for (int j = i; j < n; j++) { // Loop through the unsorted portion of the array
            if (a[mini] > a[j]) {
                mini = j; // Update the index of the smallest element found so far
            }
        }

        // Swap the smallest element found with the first element of the unsorted portion
        int temp = a[mini];
        a[mini] = a[i];
        a[i] = temp;
    }
}

int main() {
    int n;
    cin >> n; // Input the size of the array
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input array elements
    }
    
    selectionsort(a, n); // Call the selection sort function
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Output the sorted array
    }
    
    return 0; // Indicate successful execution
}
