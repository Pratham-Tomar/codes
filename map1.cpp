#include <iostream>
#include <unordered_map> 
#include<vector>
using namespace std;
int main(){
int n;
cout<<"enter value of n";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
map<int,int>mp;
for(int i=0; i<n; i++){
    mp[arr[i]]++;
}


 
 
return 0;
}