#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[5][5];
   int record_i , record_j;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           cin>>a[i][j];
           if(a[i][j]==1)
           {
               record_i=i;
               record_j=j;
           }
       }
   }
   int moves = abs(record_j-2) + abs(record_i-2);
   cout<<moves<<endl;
    
}