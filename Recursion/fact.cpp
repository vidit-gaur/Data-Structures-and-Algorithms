#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n=4;
    cout<<fact(n);
}