#include<bits/stdc++.h>
using namespace std;

int countAndMerge(int arr[],int l,int m,int r){
    int n1=m-l+1,n2=r-m;
    int left[n1],right[n2];
    
    for(int i=0;i<n1;i++) left[i]=arr[l+i];
    for(int i=0;i<n2;i++) right[i]=arr[m+1+i];

    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]) arr[k++]=left[i++];
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
    return res;


}

int countInversion(int arr[],int l,int r){
    int res=0;
    if(l<r){
        int m= l+(r-l)/2;
        res += countInversion(arr,l,m);
        res += countInversion(arr,m+1,r);
        res += countAndMerge(arr,l,m,r);
    }
    return res;
    
}

int main(){
    int arr[]={2,4,1,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<countInversion(arr,0,4);
}