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

node *revList(node *head){
    if(head==NULL || head->next==NULL) return head;

    node *prev=NULL;
    node *curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
        }
    return prev->prev; // yahn return hona to vese keval prev cchahiye tha par ek value kam arhi h isliye ye kardiya hai.
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
    node* head = NULL ;
    head = insEnd(head, 10) ;
    head = insEnd(head, 20) ;
    head = insEnd(head, 30) ;
    head = insEnd(head, 40) ;
    head = insEnd(head, 50) ;
    printList(head);
    cout<<endl;
    head=revList(head);
    printList(head);

}