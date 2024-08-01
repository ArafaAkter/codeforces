#include<bits/stdc++.h>
using namespace std;
int main(){

    int k,n,w;
    cin>>k>>n>>w;
    int T = k*w*(w+1)/2;
    int B = T-n;
    if(B <=0){
        B = 0;
    }
    cout<<B<<endl;



    return 0;
}
