#include<bits/stdc++.h>
using namespace std;

int unionArray(int a[],int b[],int m,int n){
    unordered_set<int> s;
    for(int i=0;i<m;i++) s.insert(a[i]);
    for(int j=0;j<n;j++) s.insert(b[j]);

    return s.size();
}

int main(){
    int a[]={15,20,5,15};
    int b[]={15,15,15,20,10};
    cout<<unionArray(a,b,4,5);
}