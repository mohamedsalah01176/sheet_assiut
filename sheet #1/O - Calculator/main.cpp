#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int n1,n2,result;
    char ch;
    cin>>n1>>ch>>n2;

    if(ch == '+' ){
        result=n1+n2;
    }else if(ch == '-'){
        result=n1-n2;
    }else if(ch == '*'){
        result=n1*n2;
    }else {
        if(n2!=0){
            result=n1/n2;
        }
    }

        cout<<result<<endl;

    return 0;
}
