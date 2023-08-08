#include <iostream>
using namespace std;
bool prat(int arr[][3],int row,int col,int key){
    int i,j; 
    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
            if(arr[i][j]==key){
                return true;
            }
           
            
           

        }
    
    }
    return false;
    

}
int main(){
int row=3;
int col=3;
int key;
cout<<"enter key";
cin>>key;
int arr[3][3];
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];

    }
}
if(prat(arr,row,col,key))
cout<<"true";
else 
cout<<"false";


 
 
return 0;
}