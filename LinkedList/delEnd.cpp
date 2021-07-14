#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }
};

node *delEnd(node *head){
    
    if(head==NULL) return 0;
    if(head->next==NULL){
        delete head;
        return 0;
    }
    node *curr=head;
    while(curr->next->next!=NULL)curr=curr->next;
    delete curr->next;
    curr->next=NULL;
    return head;
    

}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }
}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    //printList(head);
    //cout<<endl;
    head=delEnd(head);
    printList(head);


}