#include<bits/stdc++.h>
using namespace std;

bool isSum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum += arr[j];
            if(curr_sum==sum) return true;
        }
    }
    return false;
}

int main(){
    int arr[]={5,8,6,13,3,-1};
    int sum=22;
    cout<<isSum(arr,6,sum);
}