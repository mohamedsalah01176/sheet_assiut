#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
     char ch;
    cin>>ch;
    if(ch == 122){
        ch=96;
    }
    cout<<++ch;

    return 0;
}
