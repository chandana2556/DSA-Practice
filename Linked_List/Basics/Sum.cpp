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
    
    int sum=0;
    Node* current=head;
    while(current!=NULL){
        sum+=current->data;
        current=current->next;
    }
    cout<<"Sum of Linked List is "<<sum<<endl;
}

//Output:
Sum of Linked List is 60