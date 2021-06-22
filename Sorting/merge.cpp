#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r){
    int n1=m-l+1 , n2= r-m;
    int left[n1] , right[n2];
    
    for(int i=0;i<n1;i++) left[i]=arr[l+i];

    for(int j=0;j<n2;j++) right[j]=arr[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(left[i]<=right[j]) arr[k++]=left[i++];
        
        else arr[k++]=right[j++];
    }
    while(i<n1) arr[k++]=left[i++];

    while(i<n2) arr[k++]=right[j++];
        
}
int main(){
    //yahan karna hai gadbad hai kch to.....baki code upr sahi h 
    int arr[]={10,15,20,40,8,11,15,22,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int l=0,m,r=n-1;
    m= l+(r-l)/2;
    merge(arr,0,m,r);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
 