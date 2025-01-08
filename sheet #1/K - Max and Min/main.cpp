#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n1=0,n2=0,n3=0,max1=0,min1=0;
    cin>>n1>>n2>>n3;


    if(n1>=n2 && n1>=n3){
        max1=n1;
            if(n2>=n3){
                min1=n3;
            }else{
                min1=n2;
            }
    }else if(n2>=n1 && n2>=n3){
        max1=n2;
        if(n1>=n3){
                min1=n3;
            }else{
                min1=n1;
            }
    }else{
        max1=n3;
        if(n1>n2){
                min1=n2;
            }else{
                min1=n1;
            }
    }

    cout<<min1<<" "<<max1;


    return 0;
}
