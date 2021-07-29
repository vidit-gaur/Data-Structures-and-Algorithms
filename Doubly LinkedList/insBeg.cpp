#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *prev, *next;
    node(int value){
        data=value;
        prev=next=NULL;
    }
};

node *insBeg(node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    if(head!=NULL) head->prev=temp;
    return temp;
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
    head=insBeg(head,20);
    head=insBeg(head,30);
    head=insBeg(head,40);
    head=insBeg(head,50);
    head=insBeg(head,32);
    printList(head);

}