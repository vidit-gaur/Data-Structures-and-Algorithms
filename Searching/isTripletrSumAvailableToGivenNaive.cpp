#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x) return true;

            }
        }
    }
    return false;
}

int main(){
    int arr[]={3,5,9,2,8,10,11};
    cout<<isPair(arr,7,17);
}