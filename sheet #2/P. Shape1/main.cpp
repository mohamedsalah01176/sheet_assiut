#include <iostream>

using namespace std;

int main()
{
    int lines;
    cin>>lines;
    for(int i=0;i<lines;i++){
        for(int j=lines;j>i;j--){
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}
