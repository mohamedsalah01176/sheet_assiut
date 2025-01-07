#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n1,n2;
    cin>>n1>>n2;

    if(n1%n2==0 || n2%n1==0){
        cout<<"Multiples";
    }else{
        cout<<"No Multiples";
    }




    return 0;
}
