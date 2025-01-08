#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int ch;
    ch=getchar();
    if(48<= ch && ch <=57 ){
        cout<<"IS DIGIT"<<endl;
    }else{
        cout<<"ALPHA"<<endl;
        if('A'<= ch && ch <='Z'){
            cout<<"IS CAPITAL"<<endl;
        }else{
            cout<<"IS SMALL"<<endl;
        }
    }


    return 0;
}

