#include<bits/stdc++.h>
using namespace std;

void printGroups(bool arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]) cout<<"from "<<i<<" "<<"to ";
            else cout<<i-1<<endl;
        }
    }
    if(arr[n-1]!=arr[0]) cout<<n-1<<endl;
}

int main(){
    bool arr[]={0,0,1,1,0,0,1,1,0};
    printGroups(arr,9);
}