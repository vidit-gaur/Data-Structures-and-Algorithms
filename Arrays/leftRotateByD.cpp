#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low,int high){
    
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}



int main(){
    int arr[]={12,112,45,11,23};
    leftRotate(arr,5,3);
}