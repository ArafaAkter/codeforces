#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;

    int ct =1;
    for(int i=1; i<=str.size(); i++){
        if(str[i] == str[i-1]){
            ct++;
            if(ct == 7){
            cout<<"YES"<<endl;
                return 0;

            }

        }
        else
        {
            ct = 1;
        }

    }
    cout<<"NO"<<endl;


    return 0;
}


