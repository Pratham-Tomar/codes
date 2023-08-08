#include <iostream>
using namespace std;
int numbers(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        if(i%2==0){
            sum=sum+i;
            
        }
    }return sum;
}






int main(){
    int n; 
    cin>>n;
    int result=numbers(n);
    cout<<result;

}