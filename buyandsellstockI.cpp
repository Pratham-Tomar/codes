#include <iostream>
using namespace std;
int stockbuyandsell(int n,int arr[]){
int i;
int mini=INT16_MAX;
int maxi=INT16_MIN;
for(i=0; i<n; i++){
    mini=min(mini,arr[i]);
    if(mini==n-1){
        return 0;
    }
}
for(i=arr[mini]; i<n; i++){
maxi=max(maxi,arr[i]);
}
return (maxi-mini);
}
int main(){
    int n; 
    cout<<"enter value of n";
    cin>>n;
    int arr[n];
    cout<<"enter value of arr";
    for(int i=0; i<n; i++){
cin>>arr[i];
    }
    int result=stockbuyandsell(n,arr);
    cout<<result;
 
 
return 0;
}