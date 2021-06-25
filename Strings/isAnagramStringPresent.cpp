#include<bits/stdc++.h>
using namespace std;


bool areSame(int arr[],int arr1[]){
    for(int i=0;i<256;i++){
        if(arr[i]!=arr1[i]) return false;
    }
    return true;
}


bool isAnagramPresent(string txt,string pat){
    int countTxt[256]={0}, countPat[256]={0};
    for(int i=0;i<pat.length();i++){
        countTxt[txt[i]]++;
        countPat[pat[i]]++;
    }

    for(int i=pat.length(); i<txt.length();i++){
        if(areSame(countTxt,countPat)) return true;
        
        countTxt[txt[i]]++;
        countTxt[txt[i-pat.length()]]--;
    }
    return false;
}

int main(){
    string txt ="geeksforgeeks";
    string pat ="egek";
    cout<<isAnagramPresent(txt,pat);
}