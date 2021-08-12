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

void printSpiral(node *root){
    if(root==NULL) return;
    queue<node *>q;
    stack<int>s;
    bool reverse=false;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            node *curr=q.front();
            q.pop();
            if(reverse) s.push(curr->key);
            else cout<<curr->key<<" ";

            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right); 
        }
        if(reverse){
            while(s.empty()==false){
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        reverse=!reverse;
        cout<<endl;
    }
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->right->right=new node(50);
    printSpiral(root);
}