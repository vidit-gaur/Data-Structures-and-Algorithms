#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;

    for(auto x: mp) cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    int arr[]={10,12,10,15,10,20,12,12};
    countFreq(arr,8);
}