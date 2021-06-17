#include<bits/stdc++.h>
using namespace std;

int maxCircularSum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=i;j<n;j++){
            int index=(i+j)%n;
            curr_sum += arr[index];
            curr_max += max(curr_max,curr_sum);
            
        }
        res=max(res,curr_sum);
    }
    return res;
}

int main(){
    int arr[]={-5,1,-2,3,-1,2,-2};
    cout<<maxCircularSum(arr,7);


}
