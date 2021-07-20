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

node *revList(node *head){
    if(head==NULL || head->next==NULL) return head;
    node *rest_head= revList(head->next);
    node *rest_tail= head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }    
}

int main(){
    node *head= new node(10);
    head->next= new node (20);
    head->next->next= new node (30);
    head->next->next->next= new node (40);
    head->next->next->next->next= new node (50);
    printList(head);
    cout<<endl;
    head=revList(head);
    printList(head);
}
