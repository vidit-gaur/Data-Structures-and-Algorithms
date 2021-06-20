#include<bits/stdc++.h>
using namespace std;

int countSubset(int arr[],int n,int sum){
    if(n==0) return (sum==0) ? 1: 0;

    return countSubset(arr,n-1,sum)+countSubset(arr,n-1,sum-arr[n-1]); 
}

int main(){
    int arr[]={10,20,15};
    cout<<countSubset(arr,3,25);
}