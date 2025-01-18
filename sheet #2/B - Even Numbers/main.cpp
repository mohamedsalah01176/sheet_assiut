#include <iostream>

using namespace std;
int main() {
    int num;
    cin>>num;
    bool flag=false;
    for(int i=1;i<=num;i++){
        if(i%2==0){
                flag=true;
            cout<<i<<endl;
        }
    }

if(!flag ){
    cout<<-1<<endl;
}
    return 0;
}
