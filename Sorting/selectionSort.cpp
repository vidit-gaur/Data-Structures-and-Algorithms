#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]) min_index=j;
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]={31,11,24,12,553,1,35,71};
    selectionSort(arr,8);
}