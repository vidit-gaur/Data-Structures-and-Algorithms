#include<bits/stdc++.h>
using namespace std;

int lastOccur(int arr[],int low,int high,int x,int n){
    if(low>high) return -1;

    int mid=(low+high)/2;


    if(arr[mid]>x) return lastOccur(arr,low,mid-1,x,n);

    else if(arr[mid]<x) return lastOccur(arr,mid+1,high,x,n);

    else{
        if(mid==n-1|| arr[mid]!=arr[mid+1]) return mid;
        else return lastOccur(arr,mid+1,high,x,n);
    }
}

int main(){
    int arr[]={10,20,20,20,30,30,30,40};
    cout<<lastOccur(arr,0,8,30,8);
}