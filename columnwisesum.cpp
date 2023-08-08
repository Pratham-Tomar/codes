#include <iostream>
using namespace std;
void prat(int arr[][3],int row,int col){
    int i,j; 
    for(i=0; i<col; i++){
        int sum=0;
        for(j=0; j<row; j++){
            sum=sum+arr[j][i];


        }
        cout<<sum<<endl;
    }

}
int main(){
int row=3;
int col=3;
int arr[3][3];
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];

    }
}
prat(arr,row,col);
 
 
return 0;
}