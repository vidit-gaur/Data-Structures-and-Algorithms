#include<bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *right;
    node *left;
    node (int k){
        key=k;
        left=right=NULL;
    }
};

void inorderTraversal(node *root){
    if(root!=NULL){
        inorderTraversal(root->left);
        cout<<root->key<<" ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(node *root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->key<<" ";
    }
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->right->right=new node(50);
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);

}