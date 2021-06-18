#include<bits/stdc++.h>
using namespace std;

void fun(int n,int k){
    if(n<1) return;
    cout<<k<<" ";
    fun(n-1,k+1);
}

int main(){
    fun(6,1);
}