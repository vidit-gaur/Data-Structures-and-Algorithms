#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]={30,7,6,5,10};
    reverse(arr,5);


}