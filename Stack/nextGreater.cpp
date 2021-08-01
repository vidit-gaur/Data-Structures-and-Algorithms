#include<bits/stdc++.h>
#include<stack>
using namespace std;

vector <int> nextGreater(int arr[],int n){
    stack <int> s;
    vector <int> v;
    s.push(arr[n-1]);
    v.push_back(-1);//cout<<-1<<" ";
    for(int i=n-2; i>=0 ; i--){
        while(s.empty()==false && s.top()<=arr[i]) s.pop();
        int ng= (s.empty())? -1 : s.top();
        v.push_back(ng);//cout<<ng<<" ";
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto x:v) cout << x << " "; 
    return v;
}

int main(){
    int n=8;
    int arr[]={5,15,10,8,6,12,9,18};
    nextGreater(arr,n);
}