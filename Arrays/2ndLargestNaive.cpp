#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]) res=i;
    }
    return res;
}

int secondLargest(int arr[],int n){
    int largest= getLargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!= arr[largest]){
            if(res==-1) res=i;
            else if(arr[i]>arr[largest]) res=i;
        }
    }return arr[res];
}

int main(){
    int n=5;
    int arr[]={15,11,221,47,1};
    cout<<secondLargest(arr,n);
    
}