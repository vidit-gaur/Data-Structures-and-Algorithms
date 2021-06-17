#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++) arr[i-1]=arr[i];
    arr[n-1]=temp;
}

void LeftRotate(int arr[],int n,int d){
    for(int i=0;i<d;i++) leftRotateByOne(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]={23,11,2,455,1,112,2};
    LeftRotate(arr,7,3);
}