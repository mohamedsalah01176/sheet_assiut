#include <iostream>
using namespace std;


int main() {

    long long n1,n2,sum,mul,sub;

    cin>>n1>>n2;

    sum=n1+n2;
    mul=n1*n2;
    sub=n1-n2;

    cout<<n1<<" + "<<n2<<" = "<<sum<<endl;
    cout<<n1<<" * "<<n2<<" = "<<mul<<endl;
    cout<<n1<<" - "<<n2<<" = "<<sub<<endl;


    return 0;
}
