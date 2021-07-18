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

void printNthFromEnd(node *head,int n){
    if(head==NULL) return;
    node *first = head;
    for(int i=0;i<n;i++){
        if(first==NULL) return;
        first=first->next;
    }
    node *second = head;
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    cout<<second->data<<" ";
}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printNthFromEnd(head,5);

}