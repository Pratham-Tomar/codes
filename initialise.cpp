// 2d array banao using vector having 5 rows and 5 cols and initialise it wwith -8
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int i,j;
    vector<vector<int> > arr(5,vector<int>(5,-8));
    for(i=0; i<arr.size(); i++){
        for(j=0; j<arr[i].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    
}