//Print elements of a linked list (traversal).
#include<iostream>
using namespace std;
int main(){
    struct Node{
    int data;
    Node* next;
    };
    // Create New Nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    //Assign Data    
    head ->data=10;
    second ->data=20;
    third ->data=30;
    //Connect Data
    head ->next=second;
    second ->next= third;
    third ->next=NULL;
    //Traverse & Print    
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }  
    return 0;
}
