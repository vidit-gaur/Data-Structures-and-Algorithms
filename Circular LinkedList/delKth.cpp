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
        temp->next=head->next;
        head->next=temp;
        int t= temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }

}

node *delBeg(node *head){
    if(head==NULL) return 0;
    if(head->next==head){
        delete head;
        return 0;
    } 
    head->data=head->next->data;
    node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

node *delKth(node *head,int k){
    if(head==NULL) return head;
    if(k==1) return delBeg(head);
    node *curr= head;
    for(int i=0 ; i<k-2 ; i++) curr=curr->next;
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
int main(){
    node *head=NULL;
    head = insEnd(head, 10) ;
    head = insEnd(head, 20) ;
    head = insEnd(head, 30) ;
    head = insEnd(head, 40) ;
    head = insEnd(head, 50) ;
    head=delKth(head,3);
    printList(head);

}