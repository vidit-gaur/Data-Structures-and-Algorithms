#include<bits/stdc++.h>
using namespace std;

int countDist(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i-1;j>=0;j--){
            if(arr[j]==arr[i]){
                flag=true;
                break;
            }
        }
        if(flag==false)res++;
    }
    return res;
}

int main(){
    int arr[]={15,12,13,12,13,13,18};
    cout<<countDist(arr,7);
}