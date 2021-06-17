#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int res= -1,largest=0;
    
    for(int i=1;i<n;i++){
        if(arr[i]> arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i] > arr[res]) res=i;
        }
    }return arr[res];
}

int main(){
    int n=5;
    int arr[]={12,11,2221,47,1};
    cout<<secondLargest(arr,n);
}