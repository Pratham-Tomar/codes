#include <iostream>
using namespace std;
// to find factorial
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    int factorial= n*fact(n-1);
    return factorial;

}







int main(){
    int n;
    cin>>n;
    int result= fact(n);
    cout<<result;

}