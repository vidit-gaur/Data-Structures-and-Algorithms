#include<bits/stdc++.h>
using namespace std;

int lastOccur(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        
        if(arr[mid]>x) high=mid-1;

        else if (arr[mid]<x) low=mid+1;
        
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1] )return mid;
            else return low=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,20,30,40};
    cout<<lastOccur(arr,4,20);
}