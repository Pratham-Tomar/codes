#include <iostream>
using namespace std;

void moveallelement(int n, int arr[]){
    int i=0;
    int j=n-1;
    while(i<j) {
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
int arr[n];
cout<<"enter values of arr";
for(int i=0;i<n; i++){
    cin>>arr[i];
}
moveallelement(n,arr);

 
 
return 0;
}