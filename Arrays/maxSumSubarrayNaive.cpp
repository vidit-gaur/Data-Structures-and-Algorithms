#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }
    return res;
}

int main(){
    int arr[]={-5,1,-2,3,-1,2,-2};
    cout<<maxSum(arr,7);


}
