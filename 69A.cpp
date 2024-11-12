#include<bits/stdc++.h>
using namespace std;

void add(int a[][3],int N){

    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<N;i++){
        sum1+=a[i][0];
        sum2+=a[i][1];
        sum3+=a[i][2];
   }
   if(sum1==0 && sum2==0 && sum3==0){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
}
  int main(){

    int N;
    cin>>N;
    int a[N][3];
    for(int i=0; i<N; i++){
        cin>>a[i][0] >>a[i][1] >> a[i][2];
    }

    add(a,N);

    return 0;
}
