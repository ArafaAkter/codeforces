/*What is a distinct digit?

A distinct digit is a number that appears only once in a given set of digits.

In the number 123,
all three digits are distinct because each digit appears only once in the number.

In the number 122, only the first and last digits are distinct because the digit 2 appears twice.*/



#include<bits/stdc++.h>
using namespace  std;
int main(){

    int y;
    cin>>y;

    while(true){
        y++;
        string str = to_string(y);
        bool isDistinct = true;

        for(int i=0; i<str.size(); i++){
            for(int j=i+1; j<str.size(); j++){
            if(str[i] == str[j]){
                isDistinct = false;
                break;

            }

        }
        if(!isDistinct)
            break;
    }
    if(isDistinct){
        cout<<y<<endl;
        break;
        }


    }
    return 0;
}
