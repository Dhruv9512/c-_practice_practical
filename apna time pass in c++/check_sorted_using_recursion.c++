#include<bits\stdc++.h>
using namespace std;
bool check(int a[],int n){
    if (n==0)
    {
        return 1;
    }
    if (a[n]<a[n-1])
    {
        return 0;
    }
    
   int ans=check(a,n-1);
   return ans;
}
int main(){

int a[5];
for (int i = 0; i <5; i++)
{
    cin>>a[i];
}

  int ans= check(a,4);

   if (ans)
   {
    cout<<"This array is sorted"<<endl;
   }
   else{
    cout<<"This array is not sorted"<<endl;
   }
   
    return 0;
}