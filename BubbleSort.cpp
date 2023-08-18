//Bubble Sort
#include<iostream>
using namespace std;

void BubbleSort(int a[], int n) {
    // Outer loop iterates from the last index towards the first index of the array
    for (int i = n - 1; i >= 1; i--) {
	    int swapoccur = 0;
        // Inner loop iterates through the array from the first index to (i-1) index
        for (int j = 0; j <= i - 1; j++) {
            // Comparing adjacent elements and swapping them if they are out of order
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];  // Temporary variable to hold the smaller element
                a[j + 1] = a[j];      // Assigning the larger element to the next position
                a[j] = temp;         // Assigning the smaller element to the current position
		    swapoccur = 1;
            }
		if(swapoccur == 0)
		{
			break;
		}
    }
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	BubbleSort(a ,n);
	cout<<"After Sorting : "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
