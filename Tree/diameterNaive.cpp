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

int height(node *root){
    if(root==NULL) return 0;
    else return max(height(root->left),height(root->right))+1;
}

int diameter(node *root){
    if(root==NULL) return 0;

    int d1= 1+height(root->left)+height(root->right);

    int d2=diameter(root->left);
    int d3=diameter(root->right);

    return max(d1,max(d2,d3));
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left= new node(40);
    root->right->right=new node(50);
    root->right->left->left=new node(60);
    cout<<diameter(root);
}