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

int maxWidth(node *root){
    if(root==NULL) return 0;
    queue<node *> q;
    q.push(root);
    int res=0;
    while(q.empty()==false){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
            node *curr=q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
    return res;
}
int main(){
    node *root= new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->right->right=new node(50);

    cout<<maxWidth(root);
}