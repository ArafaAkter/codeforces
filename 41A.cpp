
#include<bits/stdc++.h>
using namespace std;
int main()
{

         string s;
         cin>>s;
         int n=s.size();
         string t;
         cin>>t;
         for(int i=0;i<n/2;i++)
         	swap(s[i],s[n-1-i]);
         if (s==t)
         	cout<<"YES"<<"\n";
         else cout<<"NO"<<"\n";

         return 0;

}
