// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int> >arr;
    vector<int> a{1,2,3,4,5};
    vector<int> b{2,3,4,5,6};
    vector<int> c{4,5,6,7,8};
    vector<int> d{5,6,3,2,1};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    for(int i=0; i<arr.size();i++){
        // when all no. of elemts of row and col are same we use arr[0].size
        // arr[0] mtlb pehli row k size k barabar print honge elements that is 5
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    



    return 0;
}