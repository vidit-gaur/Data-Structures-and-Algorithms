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

node *insEnd(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }

}

int main(){
    node *head=NULL;
    head = insEnd(head, 10) ;
    head = insEnd(head, 20) ;
    head = insEnd(head, 30) ;
    head = insEnd(head, 40) ;
    head = insEnd(head, 50) ;
    head=insEnd(head,47);
    printList(head);

}
