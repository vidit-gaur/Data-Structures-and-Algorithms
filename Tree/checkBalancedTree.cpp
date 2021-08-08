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

int isBalanced(node *root){
    if(root==NULL) return 0;

    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh=isBalanced(root->right);
    if(rh==-1) return -1;

    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}

int main(){
    node *root=new node(3);
    root->left=new node(4);
    root->right=new node(8);
    root->left->left=new node(5);
    root->left->right=new node(9);
    root->right->right=new node(7);
    root->right->right->left=new node(6);
    cout<<isBalanced(root);
    
}