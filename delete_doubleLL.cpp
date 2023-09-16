#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void deleteAtHead(Node* &head) {
    Node* todelete = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete todelete;
}

void deletion(Node* &head, int pos) {
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(Node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 6);
    display(head);
    deletion(head, 2);
    display(head);
    return 0;
}
