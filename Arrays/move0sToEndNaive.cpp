#include<bits/stdc++.h>
using namespace std;

void moveToEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0) swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]={1,2,0,1,0,22,110,0,211,0};
    moveToEnd(arr,10);


}