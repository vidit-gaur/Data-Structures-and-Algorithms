#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *prev,*next;
    node(int value){
        data=value;
        next=prev=NULL;
    }
};

node *delEnd(node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    } 
    node *curr=head;
    while(curr->next!=NULL) curr=curr->next;
    curr->prev->next =NULL;
    delete curr;
    return head;
}
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
    node *head=NULL;
    head=insEnd(head,10);
    head=insEnd(head,20);
    head=insEnd(head,30);
    head=insEnd(head,40);
    head=insEnd(head,32);
    printList(head);
    cout<<endl;
    head=delEnd(head);
    printList(head);

}