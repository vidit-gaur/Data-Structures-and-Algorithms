#include<bits/stdc++.h>
using namespace std;

int sqRoot(int x){
    int low=1, high=x, ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int midSq= mid*mid;
        if(midSq==x) return mid;
        else if(midSq>x) high=mid-1;
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int x=42;
    cout<<sqRoot(x);
}