#include<bits/stdc++.h>
#include<stack>
using namespace std;

void StockSpan(int arr[],int n){
    stack <int> s;
    s.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]) s.pop();
        int span=(s.empty())? (i+1) : (i-s.top());
        cout<<span<<" ";
        s.push(i);
    }

}

int main(){
   int n = 7;
   int arr[]={100,80,60,70,60,75,85};
   StockSpan(arr,n);
   
}

