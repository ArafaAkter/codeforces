#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r=0,g=0,b=0;
    for(int i=1;i<=n; i++){
        if(s[i-1] == s[i])
        if(s[i] == 'R'){
            r++;
        }
        else if(s[i] == 'G'){
            g++;
        }
        else{
           b++;
        }

    }
    cout<<r+g+b;
    return 0;

}
