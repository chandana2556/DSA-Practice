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
    
    int target=20;
    Node* current=head;
    bool found=false;
    while(current!=NULL){
        if(current->data==target){
            found=true;
            break;   
        }
        current=current->next;
    }
    if(found){
        cout<<"Found "<<target<< " Element!"<<endl;
    }else{
        cout<<"Element "<<target<< " not Found! "<<endl;
    }
}