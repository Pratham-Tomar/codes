#include <iostream>
using namespace std;
void pairsum(int n, int arr[],int key){
    int i,j; 
    for (int i = 0; i < n; i++)
    {
        /* code */
        for(j=i+1; j<n; j++){
            if(arr[i]+arr[j]==key){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
            }
        }
    }
    
}

int main(){
    int n,key;
    cout<<"enter n";
    cin>>n; 
    cout<<"enter key";
    cin>>key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    pairsum(n, arr, key);
    

 
 
return 0;
}