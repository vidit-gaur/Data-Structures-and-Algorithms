#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}

int main(){
    int arr[]={122,1,44,2,1,55,6,1,32,1};
    bubbleSort(arr,10);
}