#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s1,s2,lastname1,lastname2;

    getline(cin,s1);
    getline(cin,s2);

    lastname1=s1.substr(s1.find(' ')+1);
    lastname2=s2.substr(s2.find(' ')+1);

    if(lastname1==lastname2){
        cout<<"ARE Brothers";
    }else{
        cout<<"NOT";
    }


    return 0;
}
