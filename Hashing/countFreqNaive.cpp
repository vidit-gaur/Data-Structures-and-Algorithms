#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    if(flag==true) continue;

    int freq=1;
    for(int j=i+1;j<n;j++){
        if(arr[j]==arr[i]) freq++;
    }
    cout<<arr[i]<<" "<<freq<<endl;

    }
   
}

int main(){
    int arr[]={10,12,10,15,10,20,12,12};
    countFreq(arr,8);
}