//length of linked list
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

void print(Node* head) {
	Node *temp = NULL;
       while(temp!=NULL){
       	cout<<temp->data<<"->";
       	temp =  temp->next;
	   }
    
    cout <<"NULL"<< endl;
}

int length(Node *head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}

Node* takeInput(){
	int data;
	cin>>data;
	Node * head =NULL;
	Node *tail = NULL;
	while(data != -1){
		//creating LL
		Node *n = new Node(data);
		//1st Node
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			tail->next = n;
			tail = n;
		}
		cin>>data;
	}
	return head;
}
int main(){
	
	Node *head = takeInput();
	cout<<length(head)<<endl;
	
}
