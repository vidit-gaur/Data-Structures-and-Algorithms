#include<bits/stdc++.h>
using namespace std;

struct node{
  int key;
  node *right,*left;
  node (int k){
      key=k;
      right=left=NULL;
  }  
};

void printKDist(node *root,int k){
    if(root==NULL) return;

    if(k==0) cout<<root->key<<" ";

    else{
        printKDist(root->left,k-1);
        printKDist(root->right,k-1);
    }

}
int main(){
    int k=2;
    node *root= new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->right->right=new node(50);

    printKDist(root,k);
}
