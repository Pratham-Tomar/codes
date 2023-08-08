#include <iostream>
using namespace std;
void sortno(int n,int arr[]){
    int i;
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
          i++;
            start++;
        }
        if(arr[i]==1){
            swap(arr[i],arr[end]);
            end--;
        }
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
    sortno(n,arr);

 
 
return 0;
}