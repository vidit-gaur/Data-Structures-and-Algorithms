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
    if(head==NULL) return 0;
    if (head->data==x) return 1; 
    else{
        int res = sear(head->next,x);
        if(res==0) return -1;
        else return res+1;
    }
}

int main(){
    int x=20;
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout<< sear(head,x);

    
}