//not working properly.
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

int res=0;
int diameter(node *root){
    if(root==NULL) return 0;

    int lh=diameter(root->left);
    int rh=diameter(root->right);

    res=max(res,lh+rh+1);

    return 1+max(lh,rh);
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