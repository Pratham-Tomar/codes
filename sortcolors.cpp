#include <iostream>
using namespace std;
void sortColors(int n, int arr[]){
    int i,j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
            
        } 
        cout<<arr[i]<<" ";
    }
    
}
int main(){
int n;
cout<<"enter value of n";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
sortColors(n,arr);


return 0;
}