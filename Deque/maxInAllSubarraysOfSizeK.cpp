#include<bits/stdc++.h>
#include<deque>
using namespace std;

void printKMax(int arr[],int n,int k){
    deque <int> d;
    for(int i=0;i<k;i++){
        while(!d.empty() && arr[i]>=arr[d.back()]) d.pop_back();
        d.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[d.front()]<<" ";
        while(!d.empty() && arr[d.front()]<=i-k) d.pop_front();

        while(!d.empty() && arr[i]>=arr[d.back()]) d.pop_back();

        d.push_back(i);
    }
    cout<<arr[d.front()]<<" ";
}

int main(){
    int n=5,k=3;
    int arr[]={20,40,30,10,60};
    printKMax(arr,n,k);
}