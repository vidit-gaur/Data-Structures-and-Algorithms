#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *right, *left;
    node(int k){
        key=k;
        right=left=NULL;
    }
};

bool search(node* root,int x){ 
    if(root==NULL) return false;
    else if (root->key==x) return true;

    else if(root->key>x) return search(root->left,x);

    else return search(root->right,x);
}

int main(){
    node *root=new node(15);
    root->left=new node(5);
    root->right=new node(20);
    root->left->left=new node(3);
    root->right->left=new node(18);
    root->right->right=new node(80);
    root->right->left->left=new node(16);
    int x=16;
    cout<<search(root,x);
}