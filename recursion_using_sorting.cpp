//sorting using recursion

//merge sort
//#include<iostream>
//using namespace std;
//
//void merge(int *arr, int s, int e) {
//
//    int mid = (s+e)/2;
//
//    int len1 = mid - s + 1;
//    int len2 = e - mid;
//
//    int *first = new int[len1];
//    int *second = new int[len2];
//
//    //copy values
//    int mainArrayIndex = s;
//    for(int i=0; i<len1; i++) {
//        first[i] = arr[mainArrayIndex++];
//    }
//
//    mainArrayIndex = mid+1;
//    for(int i=0; i<len2; i++) {
//        second[i] = arr[mainArrayIndex++];
//    }
//
//    //merge 2 sorted arrays     
//    int index1 = 0;
//    int index2 = 0;
//    mainArrayIndex = s;
//
//    while(index1 < len1 && index2 < len2) {
//        if(first[index1] < second[index2]) {
//            arr[mainArrayIndex++] = first[index1++];
//        }
//        else{
//            arr[mainArrayIndex++] = second[index2++];
//        }
//    }   
//
//    while(index1 < len1) {
//        arr[mainArrayIndex++] = first[index1++];
//    }
//
//    while(index2 < len2 ) {
//        arr[mainArrayIndex++] = second[index2++];
//    }
//
//    delete []first;
//    delete []second;
//
//}
//
//void mergeSort(int *arr, int s, int e) {
//
//    //base case
//    if(s >= e) {
//        return;
//    }
//    
//    int mid = (s+e)/2;
//
//    //left part sort karna h 
//    mergeSort(arr, s, mid);
//    
//    //right part sort karna h 
//    mergeSort(arr, mid+1, e);
//
//    //merge
//    merge(arr, s, e);
//
//}
//
//int main() {
//
//    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
//    int n = 15;
//
//    mergeSort(arr, 0, n-1);
//
//    for(int i=0;i<n;i++){
//        cout << arr[i] << " ";
//    } cout << endl;
//
//    return 0;
//}


//recursion using quickSort
#include <iostream>
using namespace std;

int partition(int arr[] , int s , int e){
	int pivot = arr[s];
	int cnt = 0;
	for(int i=s+1 ; i<=e ; i++){
		if(arr[i] <= pivot){
			cnt++;
		}
	}
		//place pivot at right position
		 int pivotIndex = s+cnt;
		 swap(arr[pivotIndex] , arr[s]);
		 
		 int i = s , j = e ;
		 while(i < pivotIndex && j > pivotIndex){
		 	while(arr[i] <= pivot){
		 		i++;
			 }
			 
			 while(arr[j] > pivot){
			 	j--;
			 }
			 
			 if(i<pivot && j > pivotIndex){
			 	swap(arr[i++] , arr[j--]);
			 }
		 }
		 return pivotIndex;
}

void quickSort(int arr[] , int s , int e){
	//base case
	if(s > e){
		return;
	}
	
	//partition 
	int p = partition(arr,s,e);
	
	//left part sort karenge
	quickSort(arr,s,p-1);
	
	//right part sort 
	quickSort(arr , p+1 , e);
}

int main(){
	int arr[10] = { 2 , 4, 5, 3, 6 ,7,22 ,11 , 78,98};
	int n =10;
	quickSort(arr , 0 ,n-1);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}