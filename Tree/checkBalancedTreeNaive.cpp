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

bool isBalanced(node *root){
    if(root==NULL) return true;

    int lh=height(root->left);
    int rh=height(root->right);

    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
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