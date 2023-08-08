// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int> >arr;
    vector<int> a{1,2,3};
    vector<int> b{2,3,4,5,6,8,0};
    vector<int> c{4,5,6,1,2,3};
    vector<int> d{5,6,3,2,1,18,19,17};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    for(int i=0; i<arr.size();i++){
        // elements print according to thir array size individualy rows
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    



    return 0;
}