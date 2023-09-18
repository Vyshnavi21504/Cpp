//doubleLL

#include<iostream>

using namespace std;
class Node{
    public : 
    int data;
    Node *next;
    Node *prev;
};
int main()
{
    Node *head;
    Node *first=new Node();
    Node *second=new Node();
    Node *third=new Node();
    Node *fourth=new Node();
    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    first->next=second;
    first->prev=NULL;
    second->next=third;
    second->prev=first;
    third->next=fourth;
    third->prev=second;
    fourth->next=NULL;
    fourth->prev=third;
    head=first;
    
    Node *currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
//insertion at first
    
    Node *newNode=new Node();
    newNode->data=50;
    newNode->next=first;
    first->prev=newNode;
    newNode->prev=NULL;
    head=newNode;
    
    currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    
    
    // insertion at end
    
    Node *lastNode=new Node();
    lastNode->data=60;
    
    currNode=head;
    
    while(currNode->next!=NULL){
        currNode=currNode->next;
        
    }
    
    currNode->next=lastNode;
    lastNode->next=NULL;
    lastNode->prev=currNode;
    
     currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    
    //insert at specific position 
    
    Node *spec=new Node();
    spec->data=70;
    
    int key=20;
    currNode=head;
    while(currNode->data!=key){
        currNode=currNode->next;
    }
    spec->next=currNode->next;
    currNode->next=spec;
//    spec->next->prev=spec; or
    currNode->next->prev=spec;
    spec->prev=currNode;
    
     currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    
    // deletion at start
    
    currNode=head;
    head=currNode->next;
    
    currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    
    // delete at End
    
    currNode=head;
    
    while(currNode->next->next!=NULL){
        currNode=currNode->next;
    }
    currNode->next=NULL;
    
    currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    
    //delete at specific 
    
    key=70;
    
    currNode=head;
    while(currNode->next->data!=key){
        currNode=currNode->next;
    }
    currNode->next=currNode->next->next;
    currNode->next->prev=currNode;
    
     currNode=head;
    while(currNode!=NULL){
        cout<<currNode->data<<" ";
        currNode=currNode->next;
    }
    cout<<endl;
    return 0;
}
