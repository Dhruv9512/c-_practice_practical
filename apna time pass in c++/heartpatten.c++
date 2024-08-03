#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter a number of rows you want to make a heart."<<endl;
    cin>>row;
     int k,m,n;

            //  for uper part of heart.
    for (int i = 0; i <(row/2)+1; i++)
    {
            //  loop for space.
            for (int j = 0; j <( (row/2)-i); j++)
            {
                cout<<" ";
            }
            
            //  loop for *.

             for ( k =0; k <((row/2)+i*2-1); k++)
             {
                cout<<"*";
             }

             //for middle space
             for (int p = 0; p< ((row/2)-i); p++)
            {
                cout<<" ";
            }

               for (int j = 0; j <( (row/2)-i); j++)
            {
                cout<<" ";
            }
             
             for ( m= 0; m <((row/2)+i*2-1); m++)
             {
                cout<<"*";
                
             }
             
        cout<<endl;

    }

    n=m+k;
            //  for lower part of heart.
    for (int i = 0; i <=n; i++)
    {
            //  loop for space.
            for (int j = 1; j <=(i) ; j++)
            {
                cout<<" ";
            }
            
            //  loop for *.

             for (int w = 1; w <=((n-1)-(2*i)); w++)
             {
                cout<<"*";
             }
             
        cout<<endl;

    }
    
    return 0;
}