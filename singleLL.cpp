//SINGLE LINKED LIST
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next = NULL;
	}
};
int main(){
	Node *head = NULL;
	Node *first = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);

	first->next = second;
	second->next=third;
	third->next=NULL;
	head = first;
	
	Node *currNode = head;
	while(currNode!=NULL){
		cout<<currNode->data<<" ";
		currNode = currNode->next;
	}
	cout<<endl;
	
	
	//insertion at start
	Node *newNode = new Node(50);
		
	currNode = head;
	head = newNode;
	newNode->next = currNode;
			
		currNode = head;
		while(currNode!=NULL){
			cout<<currNode->data<<" ";
			currNode= currNode->next;
		}
		cout<<endl;
		
		//insertion at end
		Node *lastNode = new Node(70);
		
		currNode = head;
		while(currNode->next!=NULL){
			currNode=currNode->next;
		}
		
		currNode->next = lastNode;
		lastNode->next = NULL;
		
		currNode = head;
		while(currNode!=NULL){
			cout<<currNode->data<<" ";
			currNode = currNode->next;
		}
		cout<<endl;
		
	//deletion at end
	currNode = head;
	while(currNode->next->next!=NULL){
		currNode = currNode->next;
	}
	currNode->next=NULL;
	currNode = head;
		while(currNode!=NULL){
			cout<<currNode->data<<" ";
			currNode = currNode->next;
		}
		cout<<endl;
		
		//deletion at head
		currNode = head;
		head = currNode->next;
		
		currNode = head;
		while(currNode!=NULL){
			cout<<currNode->data<<" ";
			currNode = currNode->next;
		}
		cout<<endl;
		
		
		//deletion at specify 
		int key = 20;
		currNode = head;
		while(currNode->next->data!=key){
			currNode= currNode->next;
		}
		currNode->next = currNode->next->next;
		
		currNode = head;
		while(currNode!=NULL){
			cout<<currNode->data<<" ";
			currNode = currNode->next;
		}
		cout<<endl;
		
	}