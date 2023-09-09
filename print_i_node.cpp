//print ith node
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
void print(Node *head){
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
        temp=temp->next;
	}
	cout<<endl;
}

int length(Node *head){
	int count =0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void printIthNode(Node *head , int i){
	int n = length(head);
	if(i < 0 || i >= n){
		cout<<"-1"<<endl;
		return ;
	}
	int count = 0;
	while(count<i && head!=NULL){
		head = head->next;
		count++;
	}
	cout<<head->data;
}



Node* takeInput(){
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail =NULL;
	while(data!= -1){
		Node *n = new Node(data);
		if(head == NULL){
			head =n;
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
	int i;
	cin>>i;
	printIthNode(head,i);
	
	return 0;
}

