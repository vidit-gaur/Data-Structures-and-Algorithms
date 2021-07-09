#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[],int n){
    unordered_set<int> s;
      int res=1;
      for(int i=0;i<n;i++) s.insert(arr[i]);
      
      for(int i=0;i<n;i++){
          int curr=1;
          if(s.find(arr[i]-1)!=s.end()) continue;
          
          else{
              while(s.find(arr[i]+curr)!=s.end()) curr++;
              
            }
          res=max(res,curr);
      }
      return res;
}

int main(){
    int arr[]={1,9,3,4,2,20};
    cout<<findLargest(arr,6);
}