//length of linked list using recursion
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(Node * head)
{
	if(head == NULL) return 0;
	int smallAns = length(head->next);
	return smallAns+1;
}
//iterative method
bool isPresent(Node *head, int data){
	Node *curr = head;
	while(curr!=NULL){
		if(curr->data == data){
			return true;
		}
		curr = curr->next;
	}
	return false;
}
//recurise method
bool findElement(Node *head , int data){
	if(head == NULL) return false;
	if(head->data == data) return true;
	
	return findElement(head->next, data);
}

void printIthNode(Node* head, int i) {
    int n = length(head);
    if (i < 0 || i >= n) {
        cout << "-1" << endl;
        return;
    }
    int count = 0;
    while (count < i && head != NULL) {
        head = head->next;
        count++;
    }
    cout << head->data;
}


Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while (data != -1) {
        Node* n = new Node(data);
        if (head == NULL) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

int main() {
    Node* head = takeInput(); 
   int data;
   cin>>data;
   if(findElement(head,data)){
   	cout<<"Found"<<endl;
   }else{
   	cout<<"Not Found"<<endl;
   }
    return 0;
}
