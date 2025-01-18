#include <iostream>


using namespace std;


int main() {
    int num,length ;
    cin>>length;

    for(int i=0;i<length;i++){
        long long res=1;
        cin>>num;
        for(int j=2;j<=num;j++){
            res*=j;
        }
        cout<<res<<endl;
    }


    return 0;
}
