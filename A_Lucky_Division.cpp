#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int c4=0,c7=0,garbage=0;
    while(temp!=0)
    {
        if(temp%10==4)
        {
            c4++;
        }
        else if(temp%10==7)
        {
            c7++;
        }
        else
        {
            garbage++;
        }
        
        temp/=10;
    }
    if(n%47==0 || n%74==0 || n%4==0 || n%7==0)
    {
        cout<<"YES";
    }
    else if(c4>0 && c7>0 && garbage==0)
    {
        cout<<"YES";
    }
    else
    {
       cout<<"NO";
    }
    
}