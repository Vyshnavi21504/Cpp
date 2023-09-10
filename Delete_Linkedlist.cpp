//delete ith Node in Linkes List without memory Leak
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
int length(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

Node *delelteithNode(Node* head ,int i){
	if(i<0){
		return head;
	}
	if(i == 0 && head){
		Node* newHead = head->next;
		head->next = NULL;
        delete head;
        return newHead;
	}
	
 Node* current = head;
    int count = 1;
    while (count < i && current != NULL) {
        current = current->next;
        count++;
    }

    if (current != NULL && current->next != NULL) {
        Node* temp = current->next;
        current->next = current->next->next;
        temp->next = NULL;
        return temp;
    }
	return head;
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
    int i;
    cin >> i;
    delelteithNode(head,i);
    print(head);
    return 0;
}
