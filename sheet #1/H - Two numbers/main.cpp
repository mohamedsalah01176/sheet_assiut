#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double  n1,n2,floor1,round1,ceil1;
    cin>>n1>>n2;

    floor1=floor(n1/n2);
    round1=round(n1/n2);
    ceil1=ceil(n1/n2);

    cout<<"floor "<<n1<<" / "<<n2<<" = "<<floor1<<endl;
    cout<<"ceil "<<n1<<" / "<<n2<<" = "<<ceil1<<endl;
    cout<<"round "<<n1<<" / "<<n2<<" = "<<round1<<endl;



    return 0;
}
