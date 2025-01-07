#include <iostream>
#include<iomanip>
using namespace std;


int main() {
    string n1,n2;
    double sum;
    cin>>n1>>n2;
    sum=(int)n1[n1.length()-1]-'0'+(int)n2[n2.length()-1]-'0';

    cout<<sum;



    return 0;
}
