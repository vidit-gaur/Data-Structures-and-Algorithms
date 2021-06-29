#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40};
    cout<<firstOccurence(arr,4,30);
}