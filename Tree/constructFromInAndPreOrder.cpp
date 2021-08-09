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
node *cTree(int in[],int pre[],int is,int ie,int &preIndex){
    

    if(is>ie) return NULL;

    node *root=new node(pre[preIndex++]);

    int inIndex=0;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->key){
            inIndex=i;
            break;
        }
    }
    root->left=cTree(in,pre,is,inIndex-1,preIndex);
    root->right=cTree(in,pre,inIndex+1,ie,preIndex);

    return root;
}

void post(node *root){
    if(root==NULL) return ;
    post(root->left);
    post(root->right);
    cout<<root->key<<" ";

}

int main(){
    int in[]={40,20,60,50,70,10,80,100,30};
    int pre[]={10,20,40,50,60,70,30,80,100};
    int n= sizeof(in)/sizeof(in[0]);
    int preIndex=0;
    int is=0,ie=n-1;
    node *root=cTree(in,pre,is,ie,preIndex);
    post(root);
    return 0;
}