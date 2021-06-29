#include<bits/stdc++.h>
using namespace std;

int firstOccur(int arr[],int low,int high,int x){
    if(low>high) return -1;

    int mid=(low+high)/2;


    if(arr[mid]>x) return firstOccur(arr,low,mid-1,x);

    else if(arr[mid]<x) return firstOccur(arr,mid+1,high,x);

    else{
        if(mid==0|| arr[mid-1]!=arr[mid]) return mid;
        else return firstOccur(arr,low,mid-1,x);
    }
}

int main(){
    int arr[]={10,20,20,20,30,30,30,40};
    cout<<firstOccur(arr,0,8,30);
}