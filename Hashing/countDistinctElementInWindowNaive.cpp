#include<bits/stdc++.h>
using namespace std;

void countDistWindow(int arr[],int n,int k){
    for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag=false;
            for(int p=0;p<j;p++){
                if(arr[i+j]==arr[i+p]){
                    flag=true;
                    break;
                }
            }
            if(flag==false) count++;
        }
        cout<<count<<" ";
}

}

int main(){
    int arr[]={10,20,10,10,30,40};
    int k=4;
    countDistWindow(arr,6,k);

}