#include <iostream>
using namespace std;
int main(){
int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
for(int j=0; j<8; j++){
for(int i=0; i<8; i++){
    if(arr[i]<0){
        swap(arr[i],arr[i+1]);
    }
    
}
}

for(int i=0; i<8; i++){
    cout<<arr[i]<<" ";
}


 
 
return 0;
}