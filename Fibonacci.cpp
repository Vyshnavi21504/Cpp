#include<iostream>
using namespace std;
int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	int smallestoutput1 = fib(n-1);
	int smallestoutput2 = fib(n-2);
	 return smallestoutput1+smallestoutput2;
}
int main(){
	cout<<fib(5)<<endl;
	return 0;
}