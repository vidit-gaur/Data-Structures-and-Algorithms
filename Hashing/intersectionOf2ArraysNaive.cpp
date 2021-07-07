#include<bits/stdc++.h>
using namespace std;

int intersection(int a[],int b[],int m,int n){
    int res=0;
    for(int i=0;i<m;i++){
        bool flag=false;
        for(int j=0;j<=i-1;j++){
            if(a[j]==a[i]){
                flag=true;
                break;
            }
        }
    if(flag==true) continue;

    for(int j=0;j<n;j++){
        if(a[i]==b[j]){
            res++;
            break;
        }
        
    }

    }
    return res;
}

int main(){
    int a[]={10,15,20,15,30,30,5};
    int b[]={30,5,30,80};
    cout<<intersection(a,b,7,4);
}