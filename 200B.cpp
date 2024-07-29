#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    double sum = accumulate(v.begin(),v.end(),0.12);
    double avg = sum/n;
    cout<<setprecision(12)<<avg<<endl;

    return 0;
}




