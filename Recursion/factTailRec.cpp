#include<bits/stdc++.h>
using namespace std;

int fact(int n,int val){
    if(n==0) return val;

    return fact(n-1,n*val);
}

int main(){
    cout<<fact(5,1);
}