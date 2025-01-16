#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
    long double num1, num2, num3, numBody = 0;
    cin >> num1 >> num2 >> num3;
    long double res=(num1*num2)/num3;

    if(res != floor(res)){
            cout<<"double"<<endl;
    }else{
        if(res > 2147483647 || res < -2147483648 ){
            cout<<"long long"<<endl;
        }else{
            cout<<"int"<<endl;
        }
    }
    return 0;
}
