#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]) res=i;
    }
    return arr[res];
}

int main(){
    int n=5;
    int arr[]={211,2,114,2009,1902};
    cout<<getLargest(arr,n);
}