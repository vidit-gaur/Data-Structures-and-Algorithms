#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int main(){
    int arr[]={5,13,6,9,12,11,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    partition(arr,0,6);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}