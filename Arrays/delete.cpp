#include<bits/stdc++.h>
using namespace std;

int del(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x) break;
    }
    if(i==n) return n;
    for(int j=i;j<n-1;j++) arr[j]=arr[j+1];
    return (n-1);
}

int main(){
    int n=5,x=51;
    int arr[]={23,11,24,51,1};
    cout<<del(arr,n,x)<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}