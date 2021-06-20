#include<bits/stdc++.h>
using namespace std;

bool isPal(string str,int s,int e){
    if(s==e) return true;
    if(s>e) return true;
    if(str[s]!=str[e]) return false;

    return isPal(str,s+1,e-1);
}

int main(){
    int s=0;
    int n=6;
    cout<<isPal("aabaaa",s,n-1);
}