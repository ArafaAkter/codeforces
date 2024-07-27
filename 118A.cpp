#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string r;
    for(int i=0;i<s.size();i++){
        char ch = tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        {
            continue;
        }
        else{
            cout<<"."<<ch;
        }
    }

    cout<<r;
    return 0;
}
