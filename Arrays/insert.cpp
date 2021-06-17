#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int cap,int x,int pos){
    if(n==cap) return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--) arr[i+1]=arr[i];
    arr[idx]=x;
    return n+1;
}

int main(){
    int n=5,x=3,pos=2,cap=6;
    int arr[]={1,2,212,4};
    cout<<insert(arr,n,cap,x,pos)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}