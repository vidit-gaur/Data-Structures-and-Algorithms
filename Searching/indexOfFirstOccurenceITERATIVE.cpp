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

int main(){
    int arr[]={10,20,20,30,40};
    cout<<firstOccur(arr,4,20);
}