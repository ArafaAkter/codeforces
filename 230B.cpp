#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;int ct=0;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
            cin>>a[i];

            }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {

        if(a[i]%j==0)
        {
          ct++;
        }
    }
    if(ct==3)
    {
        cout<<"yes"<<"\n";
        ct=0;
    }
    else cout<<"no"<<"\n";
    ct=0;


    }

    return 0;
}
