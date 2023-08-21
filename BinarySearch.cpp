//Binary Search
#include <iostream>
using namespace std;

int BinarySearch(int a[] , int n , int key){
	int s =0;
	int e =n;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid] == key){
			return mid;
		}else if(a[mid]>key){
	      e  = mid - 1;
		}else if(a[mid] < key){
			s =mid +1;
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
	int key;
	cin>>key;
	
	cout<<BinarySearch(a,n,key);
	return 0;
}