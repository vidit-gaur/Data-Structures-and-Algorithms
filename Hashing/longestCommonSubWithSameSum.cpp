#include<bits/stdc++.h>
using namespace std;
//ye nahi hai poora....basically galat h ....abhi krna h ye
int maxCommon(bool arr1[],bool arr2[],int n){
    unordered_set<int>s;
    int pre_sum=0;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr1[i]-arr2[i];
    }

    for(int i=0;i<n;i++){
        pre_sum= pre_sum+temp[i];

        if(s.find(pre_sum)!=s.end()) return true;
        
        if(pre_sum==0) return true;

        s.insert(pre_sum);
    }
    return false;
}

int main(){
    bool arr1[]={0,1,0,0,0,0};
    bool arr2[]={1,0,1,0,0,1};
    cout<<maxCommon(arr1,arr2,6);
}