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

Node* insertithposition(Node* head, int i, int data) {
    if (i < 0) {
        return head;
    }

    if (i == 0) {
        Node* n = new Node(data);
        n->next = head;
        head = n; // Inserting at the beginning, so update the head
        return head;
    }

    int count = 1;
    Node* current = head;
    while (count < i && current != NULL) {
        current = current->next; 
        count++;
    }

    if (current) { 
        // Inserting at the desired position
        Node* n = new Node(data);
        n->next = current->next;
        current->next = n;
    }
    return head;
}

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL; // Initialize the head of the linked list
    Node* tail = NULL; // Initialize the tail of the linked list
    while (data != -1) {
        Node* n = new Node(data);
        if (head == NULL) {
            head = n; // If it's the first node, set it as the head
            tail = n; // If it's the first node, set it as the tail
        }
        else {
            tail->next = n; // Connect the new node to the previous tail
            tail = n; // Update the tail to the new node
        }
        cin >> data;
    }
    return head;
}

int main() {
    Node* head = takeInput(); // Take input and create the linked list
    int i, data;
    cin >> i >> data;
    Node* copyhead = head; // Declare copyhead and initialize it with the original head
    head = insertithposition(head, i, data); // Insert a node at the specified position
    print(head); // Print the updated linked list
    return 0;
}
