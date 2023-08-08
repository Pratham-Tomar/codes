#include <iostream>
using namespace std;
void maxinumber(int rows, int col,int arr[3][3]){
int maxi=INT16_MIN;
int mini=INT16_MAX;
for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){
        maxi=max(maxi,arr[i][j]);
        mini=min(mini,arr[i][j]);

    }
}cout<<"The max value is:"<<maxi<<endl<<"The Min value is :"<<mini<<endl;;
}
int main(){
int rows=3;
int col=3;
int arr[3][3];
for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}
 maxinumber(rows,col,arr);

 
 
return 0;
}