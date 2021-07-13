#include<bits/stdc++.h>
using namespace std;

int unionArray(int a[],int b[],int m,int n){
    int c[m+n];
    for(int i=0;i<m;i++) c[i]=a[i];
    for(int i=0;i<n;i++) c[m+i]=b[i];

    int res=0;

    for(int i=0;i<m+n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(c[i]==c[j]){
                flag=true;
                break;
            } 
           
        }
    if(flag==false) res++;      

    }
    return res;

}

int main(){
    int a[]={15,20,5,15};
    int b[]={15,15,15,20,10};
    cout<<unionArray(a,b,4,5);
}