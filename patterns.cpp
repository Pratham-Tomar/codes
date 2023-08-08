#include <iostream>
using namespace std;
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
void print2(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
void print3(int n){
    for (int i = 1; i < n; i++)
    {
        /* code */
        for (int j = 1; j<=i; j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}
void print4(int n){
    for (int i = 1; i < n; i++)
    {
        /* code */
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
void print5(int n){
    for (int i = 1; i < n; i++)
    {
        /* code */
        for(int j=1; j<n-i+1; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
    
}
void print6(int n){
    int i,j;
   for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
        cout<<" ";
    }
    for( j=0; j<2*i+1; j++){
        if(j==0){
            cout<<"* ";
        }
        else if(j==2*i){
            cout<<"* ";
        }
        else {
            cout<<" ";
        }
    }
    cout<<endl;
   }
   for(i=0; i<n; i++){
    for(j=0; j<i; j++){
        cout<<" ";
    }
    for(j=0;j<2*(n-i)-1; j++){
        if(j==0){
            cout<<"* ";
        }
        else if(j==2*(n-i)-2){
            cout<<"* ";
        }
        else {
            cout<<" ";
        }
        

    }
    cout<<endl;
   }
    }
void print7(int n){
        int i,j;
        //for number of rows
        for( i=0; i<n; i++){
            //for inverted half pyramids
            for(j=0; j<n-i; j++){
                cout<<"*";
            }
            // for triangle space
            for(j=0; j<2*i+1; j++){
                cout<<" ";
            }
            
            for(j=0; j<n-i; j++){
                cout<<"*";
            }
             cout<<endl;

        }
        for(i=0; i<n; i++){
            for(j=0; j<i+1; j++){
                cout<<"*";
            }
            for(j=0; j<2*(n-i)-1; j++){
                cout<<" ";
            }
            for(j=0; j<i+1; j++){
                cout<<"*";
            }
            
            cout<<endl;
        }
       
    }
void print8(int n){
    int i,j;
    for(i=0; i<n;i++){
        for(j=0; j<i+1;j++){
            cout<<i+1;
            if(j!=i){
                cout<<"*";
            }
            
        }
         cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout<<n-i;
            if(j!=n-i-1){
                cout<<"*";
            }

        }
        cout<<endl;
    }
}
void print9(int n){
    int i,j; 
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            char ch=j+'A';
            cout<<ch<<" ";
        }
        for(j=i; j>0; j--){
            char ch=j+'A'-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print10(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0 || i==n-1){
                cout<<"*";
            }
            else if(j==0 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print11(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if(i==0){
                cout<<"*";
            }
            else if(j==0 || j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print12(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0;j<n-i-1; j++){
            cout<<" ";
        }
        for(j=0; j<2*i-1; j++){
            
            if(j==0 || j==2*i-2){
                cout<<"*";
            }
            else if(i==n-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print13(int n){
int i,j;
for(i=0; i<n; i++){
    for(j=0; j<i+1; j++){
        if(j==0 || j==i){
            cout<<j+1;
        }
        else if(i==n-1){
            cout<<j+1;
        }
        else cout<<" ";
        
        
    }
      
    
    cout<<endl;
}
}
void print14(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++ ){
            if(j==0){
                 cout<<i+1 ;
            }
            else if(j==n-i-1){
                cout<<n ;
            }
            else if(i==0){
                cout<<j+1 ;
            }
            
            else {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}
void print15(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(j=0; j<i+1; j++){
            cout<<j+1;
        }
        for(j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void print16(int n){
    int i,j; 
    for(i=0; i<n; i++){
        for(j=0; j<n-i+3; j++){
            cout<<"*";
        }
        for(j=0; j<i+1; j++){
            cout<<i+1;
            if(j!=i){
                cout<<"*";
            }
        }
        for(j=0; j<n-i+3; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
void print17(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
//view this 18th
void print18(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<2*i+1; j++){
           if(j==0 || j==2*i){
            cout<<"*";
           }
           else cout<<j;
            
        }
        
        cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-2*i+1; j++){
            if(j==0 || j==n-2*i){
                cout<<"*";
            }
            else cout<<j;

        }
        cout<<endl;
    }
    
}
void print19(int n){
    int i,j;
    int count=1;
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<count;
            count++;
            if( j!=i){
                cout<<"*";
            }       
        }
        cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout<<--count;
            
                if( j!=n-i-1){
                    cout<<"*";
                } 
        }
        cout<<endl;
    }
}
void print20(int n){

    //floyds triangle
    int i,j; 
    int count=1;
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<count<<" "; count++;

        }
        cout<<endl;
    }
}
//butterfly pattern
void print21(int n){
//butterfly pattern
int i,j;
for(i=0; i<n; i++){
    for(j=0; j<i+1; j++){
        cout<<"* ";
    }
    for(j=0; j<2*n-i; j++){
        cout<<" ";
    }
    for(j=0; j<i+1; j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void print22(int n){
int i,j; 
int start=1;
for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
        cout<<" ";
    }
    for(j=0; j<2*i+1; j++){
        if(i == 0 || i== n-1){
            if(j%2==0){
                cout<<start;
                start=start+1;
            }
            
            else
            cout<<" ";
        }
        else if(j==0){
            cout<<1;
        }
        else if(j==2*i){
            cout<<i+1;
        }
        else{
            cout<<"*";
        }
    }
    
    
    cout<<endl;
}

}


int main(){
int n;
cin>>n;

print22(n);
    
    

}