#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long power(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a*power(a,b-1);
    }
}

int main() {
    long double num1,num2;
    cin>>num1>>num2;

    long double amountDiscount=num2/(1-(num1/100));


    cout<<amountDiscount<<endl;


    return 0;
}
