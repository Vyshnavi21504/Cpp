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

int main() {
    Node* head = NULL;  // Initialize the head pointer

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;

    // Point the head to the first node
    head = first;

    // Insert a new node at the beginning
    Node* newNode = new Node(50);
    Node* currNode = head;
    while(currNode->next!=head){
    	currNode=currNode->next;
	}
currNode->next = newNode;
newNode->next=head;
head = currNode;
      
    
    do {
        cout << currNode->data << " ";
        currNode = currNode->next;
    } while (currNode != head);

cout<<endl;

   //insertion at end
   Node *lastnode = new Node(70);
  currNode = head;
   while(currNode->next!=head){
   	currNode= currNode->next;
   }
   
    currNode->next = lastnode;
    lastnode->next = head;
    


     currNode = head;
    do {
        cout << currNode->data << " ";
        currNode = currNode->next;
    } while (currNode != head);
    cout<<endl;
    
 // Deletion at start
    if (head != nullptr) {
    currNode = head;
    while (currNode->next != head) {
        currNode = currNode->next;
    }
    currNode->next = head->next;
    delete head; 
    head = currNode->next;
}

currNode = head;
do {
    cout << currNode->data << " ";
    currNode = currNode->next;
} while (currNode != head);
cout<<endl;


//deletion at end
currNode = head;
while(currNode->next->next->next!=head){
	currNode = currNode->next;
}
currNode->next = head;
if (currNode->next == head) {
    // There are only three nodes in the list, so we need to update the head.
    head = head->next;
}
delete currNode->next->next->next;


do {
    cout << currNode->data << " ";
    currNode = currNode->next;
} while (currNode != head);
cout<<endl;


    return 0;
}
