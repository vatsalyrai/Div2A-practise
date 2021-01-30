#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 || y1==y2)
    {
        int dist = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        if(y1==y2)
        {
            x3=x1;
            x4=x2;
            y3=y1+dist;
            y4 = y2+dist;
        }
        else
        {
            x3 =x1+dist;
            x4 = x2 +dist;
            y3 = y1;
            y4 = y2;
        }
        
     cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
     //cout<<dist;
    }
    else if(x1!=x2 && y1 !=y2 && abs(x1-x2)==abs(y1-y2)) {
        
      
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        
    }
    else
    {
        cout<<-1;
    }
    
    
}