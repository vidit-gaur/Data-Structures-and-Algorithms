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

void removeDuplicate(node *head){
    node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            node *temp= curr->next;
            curr->next= curr->next->next;
            delete temp;
        }
        else curr=curr->next;   
    }
}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(20);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(30);
    head->next->next->next->next->next = new node(30);
    removeDuplicate(head);
    printList(head);

}