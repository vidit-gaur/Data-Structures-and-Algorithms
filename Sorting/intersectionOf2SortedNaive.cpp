#include<bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int m,int n){
    for(int i=0;i<m;i++){
        if(i>0 && a[i-1]==a[i]) continue;

        for(int j=0;j<n;j++){
            if(a[i]==b[j]) cout<<a[i]<<" ";
        }
    }
}
int main(){
    int a[]={2,5,8,13,15};
    int b[]={1,3,8,15,18,20,25};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);
}