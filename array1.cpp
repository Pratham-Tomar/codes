#include <iostream>
using namespace std;
void extreme(int n, int arr[]){
int i=0; 
int j=n;
for ( i = 0; i<j; i++)
{
    /* code */
    cout<<arr[i];
    cout<<j;
    j--;

}


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    extreme(n,arr);

    

    
}