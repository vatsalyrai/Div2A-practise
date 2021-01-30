#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  int n;
      cin>>n;
        string s;
        cin>>s;
        int count1=0 , count0=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
            
        }
      count0 = count0%4;
      count1= count1%4;
      if(count1-count0==0)
      {
          cout<<"E"<<endl;
      }
      else if(count1-count0>0)
      { int temp = count1 - count0;
          if(temp==1)
          {
              cout<<"N"<<endl;
          }
          else if(temp==2)
          {
              cout<<"W"<<endl;
          }
          else
          {
              cout<<"S"<<endl;
          }
          
      }
      else if(count1 - count0 <0)
      {
          int temp = abs(count1 - count0);
          if(temp==1)
          {
              cout<<"S"<<endl;
          }
          else if(temp==2)
          {
              cout<<"W"<<endl;
          }
          else
          {
              cout<<"N"<<endl;
          }
      }
     // cout<<count1<<" "<<count0<<endl;
    }

}