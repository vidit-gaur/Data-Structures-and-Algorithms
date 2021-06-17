#include<bits/stdc++.h>
using namespace std;
 
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
}

int main(){
    int x=12,n=5;
    int arr[]={10,12,42,1,4};
    cout<<search(arr,n,x);
}