#include <iostream>
using namespace std;
void leftshiftno(int n, int arr[],int k){
    int i=0,j=0;
    
for(j=0; j<k; j++){
for(i=n-1; i>0; i--){
swap(arr[i],arr[i-1]);
}
}
for( i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    
}
int main(){
int n,k;
cout<<"enter n";
cin>>n; 
cout<<"enter k";
cin>>k;
int arr[n];
cout<<"enter array values";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
leftshiftno(n,arr,k);
 
 
return 0;
}