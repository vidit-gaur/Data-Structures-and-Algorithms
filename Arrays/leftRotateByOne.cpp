#include<bits/stdc++.h>
using namespace std;

void lRotate(int arr[],int n){
    int temp=arr[0];
    for(int i =1;i<n;i++) arr[i-1]=arr[i];
    arr[n-1]=temp;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]= {5,8,20,10};
    lRotate(arr,4);
    return 0;
}