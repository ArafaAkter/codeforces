#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int uc=0, lc=0;
    for(int i=0; i<s.size(); i++){
       if(s[i] >= 'A' && s[i] <= 'Z'){
            uc++;
        }
        else{
                lc++;
            }

    }
    if(uc > lc){
            for(int i=0; i<s.size(); i++){
            transform(s.begin(), s.end(), s.begin(), ::toupper);

            }

        }
        else{
                for(int i=0; i<s.size(); i++){
               transform(s.begin(), s.end(), s.begin(), ::tolower);

                }

        }
        cout<<s;


    return 0;

}
