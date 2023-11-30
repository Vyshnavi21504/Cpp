//Binary Search
//#include <iostream>
//using namespace std;
//
//bool isSorted(int size , int *arr){
//	//base case
//	if(size == 0 || size == 1){
//	return  true;
//	}
//	if(arr[0] > arr[1]){
//		return false;
//	}else{
//		bool remainpart = isSorted(size - 1,arr + 1);
//		return !remainpart;
//	}
//}
//
//int main(){
//	int arr[5] = { 2, 4, 5 ,6 , 9};
//	int size = 5;
//	
//	int ans = isSorted(size , arr);
//	
//	if(ans){
//		cout<<"Array is Sorted"<<endl;
//	} else {
//        cout << "Array is Not Sorted" << endl;
//    }
//	return 0;
//	}


//sum of all numbers
//#include <iostream>
//using namespace std;
//
//int getSum(int *arr , int size){
//	if(size == 0){
//		return 0;
//	}
//	
//	if(size==1){
//	
//		return arr[0];
//	}
//	
//	int remainpart = getSum(arr+1 , size-1);
//	int sum = arr[0] + remainpart;
//	return sum;
//}
//
//int main(){
//	int arr[5] = { 2, 4, 5, 6, 7};
//	int size = 5;
//	int sum = getSum(arr , sum);
//	cout<<"Sum is"<<sum<<endl;
//	return 0;
//}



//Linear Search
//#include <iostream>
//using namespace std;
//
//void print(int arr[], int n) {
//    cout << "Size of array is " << n << endl;
//
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//bool linearSearch(int arr[], int size, int key) {
//    print(arr, size);
//
//    // base condition
//    if (size == 0)
//        return false;
//
//    if (arr[0] == key) {
//        return true; // corrected to true
//    } else {
//        bool remainingpart = linearSearch(arr + 1, size - 1, key);
//        return remainingpart;
//    }
//}
//
//int main() {
//    int arr[5] = {3, 5, 6, 7, 8};
//    int size = 5;
//    int key = 6; // corrected variable name
//    bool ans = linearSearch(arr, size, key);
//
//    if (ans) {
//        cout << "Present" << endl;
//    } else {
//        cout << "Absent" << endl;
//    }
//    return 0;
//}


//BINARY SEARCH USING RECURSION
#include <iostream>
using namespace std;
void print(int arr[] , int s , int e){
	for(int i=s ; i<=e ;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

bool binarySearch(int *arr, int s, int e , int k ){  

	//base condition
	
	//element not found
 if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}