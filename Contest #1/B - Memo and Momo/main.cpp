#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    long long num1,num2,num3;
    cin>>num1>>num2>>num3;

    if(num1%num3==0 && num2%num3==0){
        cout<<"Both";
    }else if(num1%num3==0){
        cout<<"Memo";
    }else if(num2%num3==0){
        cout<<"Momo";
    }else{
        cout<<"No One";
    }




    return 0;
}
