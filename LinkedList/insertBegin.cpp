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

node *insertBegin(node *head, int x){
    node *temp = new node(x);
    if( head==NULL) return temp;
    else{
        temp->next= head;
        return temp;
    }
}
void printList(node *head){
    node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr= curr->next;

    }
}

int main(){
    node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    head = insertBegin(head,40);
    printList(head);
}