#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int p=a+b;
        int q=b+c;
        int r=a+c;
        if((p==c || q==a || r==b))

        cout<<"yes"<<endl;else cout<<"no"<<endl;

    }

  return 0;
}
