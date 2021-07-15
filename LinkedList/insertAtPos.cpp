#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};

node *insAtPos(node *head, int pos,int x){
    node *temp = new node(x);
    if(pos==1){
        temp->next=head;
        return temp;
    }

    node *curr=head;
    for(int i=1; i<= pos-2 && curr!=NULL;i++) curr=curr->next;
    if(curr==NULL) return head;

    temp->next=curr->next;
    curr->next=temp;
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
    node *head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    insAtPos(head,6,10);
    printList(head);
}