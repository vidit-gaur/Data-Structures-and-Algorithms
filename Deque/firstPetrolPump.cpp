#include<bits/stdc++.h>
using namespace std;

int firstPetrolPump(int petrol[],int dist[],int n){
    int start=0 ,curr_petrol=0 ,prev_petrol=0;
    for(int i=0;i<n;i++){
        curr_petrol += (petrol[i]-dist[i]);
        if(curr_petrol<0){
            start=i+1;
            prev_petrol=curr_petrol;
            curr_petrol=0;
        }
    }
    return((curr_petrol+prev_petrol)>=0) ? start+1: -1;
}

int main(){
    int n=4;
    int petrol[]={50,10,60,100};
    int dist[]={30,20,100,10};
    cout<<firstPetrolPump(petrol,dist,n)<<" ";
}