#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next=NULL;
    node(int value){
        data=value;
        next=NULL;
    }
};

void printList(node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    for(node *p=head->next;p!=head; p=p->next){
        cout<<p->data<<" ";
    }
}

node *insBeg(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        node *curr=head;
        while(curr->next!=head) curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}

int main(){
    node *head=NULL;
    head=insBeg(head,22);
    head=insBeg(head,40);
    head=insBeg(head,30);
    head=insBeg(head,20);
    head=insBeg(head,10);
    head=insBeg(head,47);
    printList(head);

}