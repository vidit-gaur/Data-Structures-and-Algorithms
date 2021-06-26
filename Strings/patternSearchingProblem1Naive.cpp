#include<bits/stdc++.h>
using namespace std;

void patSearch(string txt,string pat){
    int j,i;
    int n=txt.length(),m=pat.length();
    for(i=0;i<=n-m;i++){
        
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j]) break;
           
        }
        if(j==m) cout<<i<<" ";
    }
}

int main(){
    string txt="ABABAB",pat="ABAB";
    patSearch(txt,pat);
}