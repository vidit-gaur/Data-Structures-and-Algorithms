//incomplete

#include<bits/stdc++.h>
using namespace std;

int prefixSum(int arr[],int n){
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++) prefix_sum[i] = prefix_sum[i-1]+arr[i];

    for(int i=0;i<n;i++) return prefix_sum[i];
}

int getSum(int prefixSum[],int l ,int r){
    if(l!=0) prefixSum[r]-prefixSum[l-1];
    else prefixSum[r];
}