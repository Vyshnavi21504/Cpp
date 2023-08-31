#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

void print (Node *head){
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
Node* takeinput(){
	int data;
	cin>>data;
	Node *head =  NULL;    //LL is empty
	Node *tail = NULL;     //LL is empty
	while(data!=-1){
		Node *n = new Node(data);   //creating LL
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			tail->next = n;  //inserting at tail
			tail = n;
		}
		cin>>data;
	}
	return head;
}
Node* takeinput2(){
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data!= -1){
		Node *n = new Node(data);
		//1st Node
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			n -> next = head;
			head = n;
		}
		cin>>data;
	}
	return head;
}
int main(){
	Node *head = takeinput();
	Node *head2 = takeinput2();
	print (head);
	print(head2);
}
