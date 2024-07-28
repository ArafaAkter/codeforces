#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n; int ct=0;
    cin>>n;
    int digit;
    while(n>0){
        digit = n%10;
        if(digit == 4 || digit == 7){
        ct++;
    }
        n= n/10;
    }
     if(ct == 4 || ct == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }







    return 0;
}

