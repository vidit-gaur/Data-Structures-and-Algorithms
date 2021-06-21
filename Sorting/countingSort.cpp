#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n,int k){
    int count[k];
    for(int i=0;i<k;i++) count[i]=0;

    for(int i=0;i<n;i++) count[arr[i]]++;

    for(int i=1;i<k;i++) count[i]=count[i-1]+count[i];

    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++) arr[i]=output[i];
}

int main(){
    int arr[]={1,4,4,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    countSort(arr,n,5);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}