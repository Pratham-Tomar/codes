#include <iostream>
using namespace std;
void spiral(int arr[3][3],int row,int col){
    int i,j;
        for(i=0; i<row; i++){
            
           
            
        }
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                cout<<arr[i][j];
            }
            
        } 
}
int main(){
int row=3;
int col=3;
int arr[3][3];
cout<<"enter values";
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];

    }
}
spiral(arr,row,col);

 
 
return 0;
}