#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
    char num1,num2;
    cin>>num1>>num2;

    int valNum1=num1-'0';
    int valNum2=num2-'0';
    if(valNum1 ==0 || valNum2==0){
        cout<<"YES"<<endl;
    }else if(valNum1%valNum2==0 || valNum2%valNum1==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
