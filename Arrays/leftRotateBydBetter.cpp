#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++) temp[i]=arr[i];
    for(int i=d;i<n;i++) arr[i-d]=arr[i];
    for(int i=0;i<d;i++) arr[n-d+i]=temp[i];

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
int main(){
    int arr[]={12,112,45,11,23};
    leftRotate(arr,5,3);
}