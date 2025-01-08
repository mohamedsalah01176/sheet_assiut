#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int ch;
    ch=getchar();
    if(65<= ch && ch <=90 ){
        ch+=32;
    }else{
        ch-=32;
    }

        cout<<(char)ch<<endl;

    return 0;
}
