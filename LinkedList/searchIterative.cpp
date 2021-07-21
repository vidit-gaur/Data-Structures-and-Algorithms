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
int sear(node *head,int x){
    int pos=1;
    node *curr= head;
    while(curr!=NULL){
        if(curr->data==x) return pos;
        else{
            pos++;
            curr=curr->next;
        }
    }
    return 0;

}

int main(){
    int x=30;
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout<< sear(head,x);

    
}