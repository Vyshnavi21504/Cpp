//power in recursion
//#include<iostream>
//using namespace std;
//int power(int n){
//	if(n==0) return 1;
//	return 2*power(n-1);
//}
//int main(){
//	int n;
//	cin>>n;
//	int ans = power(n);
//	cout<<ans<<endl;
//}

///print counting numbers
//#include <iostream>
//using namespace std;
//void print(int n){
//	if(n==0) return;
//	cout<<n<<endl;
//	print(n-1);
//}
//int main(){
//	int n;
//	cin>>n;
//	cout<<endl;
//	print(n);
//}


//reach destination type
//#include <iostream>
//using namespace std;
////example of tail recursion
//  void reachDestination(int src , int dest){
//	cout << "Source: " << src << " Destination: " << dest << endl;
//	
//	//BASE CONDITION (place where we have to stop doing recurrsion)
//	if(src == dest){
//		cout<<"reached destination"<<endl;
//		return ;
//	}
//	                                                                      //Two type of rscursion
//	//processing                                                          //1}TAIL RECURSION : when recursion function comes after processing
//	src++;                                                                //2}HEAD RECURSION : when recursion function ocuurs before processing
//	//recurssion 
//	 reachDestination(src,dest);
//}
//
//int main(){
//	int dest = 10;
//	int src = 1;
//	cout<<endl;
//	 reachDestination(src , dest);
//	return 0;
//}



////Fibonnaci Series
//#include<iostream>
//using namespace std;
//int fibonnaciSeries(int n){
//	if(n==0) return 0;
//	if(n==1) return 1;
//	int ans = fibonnaciSeries(n-1)+fibonnaciSeries(n-2);
//    return ans;	
//}
//int main(){
//	int n = 10;
//	cout<<"fibonnaciSeries"<<endl;
//	for(int i=0;i<n;i++){
//		cout<<fibonnaciSeries(i)<<endl;
//	}
//	cout<<endl;
//	return 0;
//	
//}


//N-th stairs
//#include <iostream>
//using namespace std;
//
//int ns(int n) {
//    // base condition
//    // for negative numbers
//    if (n < 0) return 0;
//    // for the same position
//    if (n == 0) return 1; // 1 because he can jump back to its original position (0 is starting point) only one way
//
//    int ans = ns(n - 1) + ns(n - 2);
//    return ans;
//}
//
//int main() {
//    int n = 10;
//    for (int i = 0; i < n; i++) {
//        cout << "Number of ways to climb " << i << " steps: " << ns(i) << endl;
//    }
//
//    return 0;
//}



//Say numbers
//#include <iostream>
//using namespace std;
//
//void sayDigits(int n , string arr[]){
//	//base condition
//	if(n == 0) return;
//	
//	//processing
//	int digit = n%10;
//	n = n/10;
//	
//	sayDigits(n , arr);
//	
//	cout<<arr[digit]<<" ";
//	
//}
//
//int main(){
//	string arr[5] = {"zero" , "one" , "two" , "three" , "four"};
//	int n;
//	cin>>n;
//	cout<<endl<<endl;
//	sayDigits(n,arr);
//	cout<<endl<<endl;
//	}
