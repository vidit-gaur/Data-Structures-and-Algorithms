#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int res=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max((maxEnding+arr[i]),arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int main(){
    int arr[]={-5,1,-2,3,-1,2,-2};
    cout<<maxSum(arr,7);


}
