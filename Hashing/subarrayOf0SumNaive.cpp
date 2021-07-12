#include<bits/stdc++.h>
using namespace std;

bool isSum(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum += arr[j];
            if(curr_sum==0) return true;
        }
        
    }
    return false;
}

int main(){
    int arr[]={3,-1,-2,5,6};
    cout<<isSum(arr,5 );
}