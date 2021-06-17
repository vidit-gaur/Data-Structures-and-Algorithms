#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
    //vector <int> v;
    stack<int> s;
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2 ; i>=0; i--){
        if(curr_leader< arr[i]){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";//v.push_back(curr_leader);
        }

    }
    
    //reverse(v.begin(),v.end());
    //for(auto x:v)cout<<x<<" ";
}
int main(){
    int arr[]={122,1,4,55,5,2};
    leader(arr,6);
}