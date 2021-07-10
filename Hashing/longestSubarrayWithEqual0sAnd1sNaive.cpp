#include<bits/stdc++.h>
using namespace std;

int largestSubarray(bool arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int c0=0,c1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0) c0++;

            else c1++;

            if(c0==c1) res=max(res, j-i+1);
        }
    }
    return res;
}

int main(){
    bool arr[]={0,0,1,1,1,1,1,0};
    cout<<largestSubarray(arr,8);
}