#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a,b;
    cin>>n;

    int p = 0;
    int minCapacity = 0;

   for(int i=0; i<n; i++){
    cin>>a>>b;
    p = p-a+b;
    if(p>minCapacity){
        minCapacity=p;
    }

   }
   cout<<minCapacity<<endl;






    return 0;
}
