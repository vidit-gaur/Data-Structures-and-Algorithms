#include<bits/stdc++.h>
#include<stack>
using namespace std;

void previousGreater(int arr[],int n){
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]) s.pop();
        int pg = (s.empty())? -1 : s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }

}

int main(){
    int n=8;
    int arr[]={15,10,18,12,4,6,2,8};
    previousGreater(arr,n);
    

}