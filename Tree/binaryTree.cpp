#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};

int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    cout<<root->left->left->key;
}