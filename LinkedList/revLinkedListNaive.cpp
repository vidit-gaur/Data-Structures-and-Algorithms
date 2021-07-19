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
    vector <int> v;
    for(node *curr=head;curr!=NULL;curr=curr->next) v.push_back(curr->data);
    for(node *curr=head;curr!=NULL;curr=curr->next){
        curr->data = v.back();
        v.pop_back();
    }
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
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(60);
    head->next->next->next = new node(30);
    revList(head);
    printList(head);
}