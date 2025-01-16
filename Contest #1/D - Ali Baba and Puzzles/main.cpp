#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    long long int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;

  if((num1+num2-num3)== num4){
        cout<<"YES";
    }else if((num1-num2+num3)== num4){
        cout<<"YES";
    }else if((num1*num2-num3)== num4){
        cout<<"YES";
    }else if((num1-num2*num3)== num4){
        cout<<"YES";
    }else if((num1*num2+num3)== num4){
        cout<<"YES";
    }else if((num1+num2*num3)== num4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
