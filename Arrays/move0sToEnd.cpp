#include<bits/stdc++.h>
using namespace std;

void moveToEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[]={1,2,0,1,0,22,110,0,211,0};
    moveToEnd(arr,10);


}