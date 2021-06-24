#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min_index=0;
        for(int j=1;j<n; j++){
            if(arr[j]<arr[min_index]) min_index=j;
        }
        temp[i]=arr[min_index];
        arr[min_index]=INFINITY;
    }
    for(int i=0;i<n;i++) arr[i]=temp[i];

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(){
    int arr[]={31,11,24,12,553,1,35,71};
    selectionSort(arr,8);
}