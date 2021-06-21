#include<bits/stdc++.h>
using namespace std;
//nahi chalrha hai 
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

int kthSmallest(int arr[],int n,int k){
    int l=0,r=n-1;
    int mid= l+ (r-l)/2;
    while(l<=r){
        int p=partition(arr,l,r);
        if(p==k-1) return p;

        else if(p>k-1) r=mid-1;

        else l=mid+1;
    }
    return -1;
}
int main(){
    int arr[]={10,5,30,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<kthSmallest(arr,n,k);
}