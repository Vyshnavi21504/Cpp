
//reverse string
//#include<iostream>
//using namespace std;
//
//void reverse(string& str , int i , int j){
//	cout<<"call received for " << str <<endl;
//	
//	if(i>j) return ;
//	swap(str[i] , str[j]);
//	i++;
//	j--;
//	
//	//recersive call
//	reverse(str ,i , j);
//}
//int main(){
//	string name = "abcderf" ;
//	cout<<endl;
//	reverse(name , 0 , name.length()-1);
//	cout<<endl;
//	cout<<name<<endl;
//	return 0;
//}


//Palindrome 
//same logic--- reeverse next ele of mid and then compare from start
//
//#include <iostream>
//using namespace std;
//
//bool checkp(string str , int i , int j){
//	//base cae
//	if(i>j) return true;
//	
//	if(str[i] != str[j])
//	return false;
//	return checkp(str , i+1 , j-1);
//}
//
//int main(){
//	string name = "BOOKOOB";
//	cout<<endl;
//	
//	bool isp = checkp(name , 0 , name.length()-1);
//	
//	if(isp){
//		cout<<"ITS PALINDROME"<<endl;
//	}else{
//		cout<<"NOPE"<<endl;
//	}
//	return 0;
//}



//finding power using recursion
//#include <iostream>
//using namespace std;
//
//int power(int a , int b){
//	//base case
//	if(b == 0) return 1;
//	
//	if(b == 1) return a;
//	
//	//RECURSION CALL
//	int ans = power(a,b/2);
//	
//	//if a is even 
//	if(b%2 == 0){
//		return ans*ans;
//	}else{
//		return a*ans*ans;
//	}
//}
//
//int main(){
//	int a,b;
//	cin>>a>>b;
//	cout<<endl;
//	int ans = power(a , b);
//	return ans;
//}



//BUBBLE SORT
#include <iostream>
using namespace std;

void sortArray(int *arr , int n){
	//base case - already sorted
	if(n == 0 || n==1 ){
		return;
	}
	
	for(int i=0;i<n-1;i++){
		if(arr[i] > arr[i+1]){
			swap(arr[i] , arr[i+1]);
		}
}
//reccursive call
sortArray(arr , n-1);
}

int main(){
	int arr[5] = { 2, 4, 6, 1, 11};
	
	sortArray(arr , 5);
	for(int  i =0;i<5;i++){
		cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}