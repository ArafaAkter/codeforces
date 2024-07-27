#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c =1;
    char e=s[0];
    sort(s.begin(),s.end());
    for(int i=0;i<s.size(); i++){
            if(s[i] != e){
                e=s[i];
                c++;
            }
    }
    if(c%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
