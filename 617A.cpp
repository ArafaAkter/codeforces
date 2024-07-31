#include<bits/stdc++.h>
using namespace std;
int main(){

    int x; int c=0;
    cin>>x;
    c = x/5;
    if(x%5 != 0){
        c +=1;
    }
    cout<<c;
    return 0;
}
