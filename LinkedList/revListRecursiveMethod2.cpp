#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    } 
};

node *revList(node *curr,node *prev){
    if(curr==NULL) return prev;
    node *next=curr->next;
    curr->next=prev;
    return revList(next,curr);

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
    node *curr=head;
    node *prev= NULL;
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head=revList(curr,prev);
    printList(head);
}