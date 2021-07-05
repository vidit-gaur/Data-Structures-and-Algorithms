#include<bits/stdc++.h>
using namespace std;

int countDist(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++) s.insert(arr[i]);
    
    return s.size();
}

int main(){
    int arr[]={15,12,13,12,13,13,18};
    cout<<countDist(arr,7);
}