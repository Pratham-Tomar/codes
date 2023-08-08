#include <iostream>
using namespace std;
int main(){
int k, n,i,j;
cout << "Enter the number of rows : ";
cin >> n;
cout << " ";
for ( i=1; i<=n; i++)
{

for ( j=1; j<=n-i; j++)
cout << " ";

for (j=1,k=i-1; j<=2*i-1; j++,k--)
{
if (1 || j <= k)
cout << j;
else
cout << k;
}
cout << endl;

cout << " ";

}
return 0;
}