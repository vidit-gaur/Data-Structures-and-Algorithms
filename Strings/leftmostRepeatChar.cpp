#include<bits/stdc++.h>
using namespace std;

int firstRepeating(string s){
    int res= INT_MAX;
    int fI[256];
    for(int i=0;i<256;i++) fI[i]=-1;

    for(int i=0;i<s.length();i++){
        if(fI[s[i]]==-1) fI[s[i]]=i;
        
        else res= min(res,fI[s[i]]);
    }
    return (res==INT_MAX)? -1 : res;

}
int main(){
    string s="geeksforgeeks";
    cout<<firstRepeating(s);
}