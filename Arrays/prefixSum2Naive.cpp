#include<bits/stdc++.h>
using namespace std;

bool isEqPoint(int arr[],int n){
    for(int i=0;i<n;i++){
        int l_sum=0 ,r_sum=0;
        for(int j=0;j<i;j++) l_sum += arr[j];

        for(int k=i+1;k<n;k++) r_sum += arr[k];

        if(l_sum=r_sum) return true;
    }
    return false;
}

int main(){
    int arr[]={3,4,8,-9,20,6};
    cout<<isEqPoint(arr,6);
}