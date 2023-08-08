#include <iostream>
using namespace std;
void unionoftwo(int n,int m,int arr1[],int arr2[]){
    vector<int>vec;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                vec.push_back(arr1[i]);
                break;
            }
        
    }
       
    }
    

for(int i=0; i<vec.size(); i++){
    
        cout<<vec[i]<<" ";
    }

}
int main(){
    int n,m,i,j;
    cout<<"enter value of n ";
    cin>>n;
    cout<<"enter value of m";
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"enter values in arr1";
    for(i=0; i<n; i++){
        cin>>arr1[i];
    }
       cout<<"enter values in arr2";
    for(j=0; j<m; j++){
        cin>>arr2[j];
    }
    unionoftwo(n,m,arr1,arr2);


 
 
return 0;
}