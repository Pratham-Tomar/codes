#include <iostream>
using namespace std;
void transposeMatrix(int row,int col,int arr[4][3]){
    cout<<"transpose of the array is given below"<<endl;;
    for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[j][i]<<" ";

    }
    cout<<endl;
}
}
int main(){
int row=3;
int col=4;
int arr[4][3];
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];

    }
}
transposeMatrix(row,col,arr); 
 
 
return 0;
}