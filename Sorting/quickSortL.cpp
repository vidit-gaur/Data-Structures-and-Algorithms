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

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);

    }
    
}

int main(){
    int arr[]={5,13,6,9,12,11,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    qSort(arr,0,6);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

