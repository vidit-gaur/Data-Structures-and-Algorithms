#include<bits/stdc++.h>
using namespace std;

int max1s(bool arr[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]==0) curr=0;
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main(){
    bool arr[]={1,0,1,0,1,1,0,0,1,1,1,0};
    cout<<max1s(arr,12)<<" ";
}