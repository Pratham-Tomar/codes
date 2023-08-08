#include <iostream>
using namespace std;
int findunique(vector<int>vec){
    int i,a=0;
    for ( i = 0; i < vec.size(); i++){
        a=a^vec[i];
    }
    return a;
    

}
int main(){
int n;
cin>>n;
vector<int>vec(n);
for (int i = 0; i < vec.size(); i++)
{
    cin>>vec[i];
    /* code */
}


int result= findunique(vec);
cout<<result;

return 0;
}