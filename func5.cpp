#include <iostream>
using namespace std;
// area of circle
int areaofcircle(int r){
    int result=3.14*r*r;
    return result;

}



int main(){
    int r;
    cin>>r;
    int a= areaofcircle(r);
    cout<<a;

}