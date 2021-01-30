#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int min=INT_MAX ,max=INT_MIN;
    int pos_min=-1,pos_max=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            pos_max=i;
        }
        if(a[i]<=min)
        {
            min = a[i];
            pos_min=i;
        }
    }
    if(pos_max<pos_min){
    //pos_min++;
    cout<<pos_max+n-1-pos_min;
    }
    else
    {
        pos_min++;
    cout<<pos_max+n-1-pos_min;
    }
    
    
}