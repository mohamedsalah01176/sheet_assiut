#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    long long  num1,num2;
    cin>>num1>>num2;

    if(num1-num2==1 || num2-num1==1 ||(num1 == num2 & num1 !=0 & num2 !=0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
