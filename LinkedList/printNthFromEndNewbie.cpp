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
    int len=0;
    for(node *curr=head;curr!=NULL;curr=curr->next){
        len++;
    }
    if(len<n) return;
    node *curr=head;
    for(int i=1;i<len-n+1;i++){
        curr=curr->next;
    }
    cout<<curr->data<<" ";

}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printNthFromEnd(head,5);

}