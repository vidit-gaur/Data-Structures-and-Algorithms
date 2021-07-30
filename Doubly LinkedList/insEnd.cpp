#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *prev,*next;
    node(int value){
        data=value;
        next=prev=NULL;
    }
};

node *insEnd(node *head,int x){
    node *temp= new node(x);
    if(head==NULL) return temp;
    node *curr=head;
    while(curr->next!=NULL) curr=curr->next;
    curr->next=temp;
    temp->prev=curr;
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
    head=insEnd(head,20);
    head=insEnd(head,30);
    head=insEnd(head,40);
    head=insEnd(head,50);
    head=insEnd(head,32);
    printList(head);
}