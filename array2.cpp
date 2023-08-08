// reverse an array
#include <iostream>
using namespace std;
void reversearay(int n, int arr[]){
    int i=0;
    int j=n-1,temp=0;
    
    for ( i = 0; i < j; i++)
    {
        // 1.one way of swap
    // swap(arr[i],arr[j]);
    //     j--;
     // 2. second way of swap
    // temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
    // j--;
    




    }
    
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversearay(n,arr);

}