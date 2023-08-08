#include <iostream>
using namespace std;
int majority(int n,int arr[]){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }
    return arr[n/2];

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
    
    int result= majority(n,arr);
    cout<<result;

return 0;
}