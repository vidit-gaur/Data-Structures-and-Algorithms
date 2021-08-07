#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *right,*left;
    node(int k){
        key=k;
        right=left=NULL;
    }
};



node *binaryToDLL(node *root){
    static node *prev=NULL;
    
    if(root==NULL) return root;
    node*head= binaryToDLL(root->left);

    if(prev==NULL) head = root;
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;

    binaryToDLL(root->right);
    return head;
}
void print(node *head){
    if(head==NULL) return ;
    node *curr=head;
    do{
        cout<<curr->key<<" ";
        curr=curr->right;
    }while (curr!=head);

}

int main(){
    node *root=new node(3);
    root->left=new node(4);
    root->right=new node(8);
    root->left->left=new node(5);
    root->left->right=new node(9);
    root->right->right=new node(7);
    root->right->right->left=new node(6);
    cout<<binaryToDLL(root);
    print(root);
    
}