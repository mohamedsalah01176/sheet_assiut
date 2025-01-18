#include <iostream>

using namespace std;


long long gcb(long long a,long long b){
    if(a>b){
        while(b!=0){
            long long temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }else{
        while(a!=0){
            long long temp=a;
            a=b%a;
            b=temp;
        }
        return b;
    }
}

int main()
{
    long long num1,num2;
    int flag=0;
    cin>>num1>>num2;

    long long res=gcb(num1,num2);
    cout<<res;
    return 0;
}
