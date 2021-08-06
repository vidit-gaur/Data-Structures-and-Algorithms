#include<bits/stdc++.h>
using namespace std;

int firstPetrolPump(int petrol[],int dist[],int n){
    for(int start=0; start<n ;start++){
        int curr_petrol=0;
        int end=start;
        while(true){
            curr_petrol += (petrol[end]-dist[end]);
            if(curr_petrol<0) break;
            end=(end+1)%n;
            if(end==start) return start+1;
        }
    }
    return -1;
}

int main(){
    int n=4;
    int petrol[]={4,8,7,4};
    int dist[]={6,5,3,5};
    cout<<firstPetrolPump(petrol,dist,n)<<" ";
}