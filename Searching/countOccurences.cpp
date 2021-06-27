#include<bits/stdc++.h>
using namespace std;

int firstOccur(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        
        if(arr[mid]>x) high=mid-1;

        else if (arr[mid]<x) low=mid+1;
        
        else{
            if(mid==0 || arr[mid-1]!=arr[mid] )return mid;
            else return high=mid-1;
        }
    }
    return -1;
}

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

int countOccur(int arr[],int n,int x){
    int first=firstOccur(arr,n,x);
    if(first==-1) return 0;
    else return (lastOccur(arr,n,x)-first+1);
}

int main(){
    int arr[]={10,20,20,20,40,40};
    cout<<countOccur(arr,6,20);
}