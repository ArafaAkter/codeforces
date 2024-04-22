#include<bits/stdc++.h>
using namespace std;

 int main(){

     int n,p,v,t,c = 0;
     cin>>n;
     while(n--)
     {
        cin>>p>>v>>t;
        int sum = p+v+t;
        if(sum>=2)
        {
          c++;
        }

     }
     cout<< c << endl;

     return 0;
 }

