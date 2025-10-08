#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data=10;
    second->data=20;
    third->data=30;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    int count=0;
    Node* current=head;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    cout<<"Count of Linked List is "<<count<<endl;
}