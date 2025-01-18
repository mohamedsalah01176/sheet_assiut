#include <iostream>

using namespace std;

int main()
{
    long long num;
    cin>>num;

    for(long long i=2;i<=num;i++){
        bool isPrime=true;
        for(long long j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}
