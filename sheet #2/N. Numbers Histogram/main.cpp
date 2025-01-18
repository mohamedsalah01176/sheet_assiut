#include <iostream>

using namespace std;

int main()
{
    char symbol;
    int lines;

    cin>>symbol>>lines;

    int arr[lines];
    for(int i=0;i<lines;i++){
        cin>>arr[i];
    };

    for(int i=0;i<lines;i++){
        for(int j=0;j<arr[i];j++){
            cout<<symbol;
        };
        cout<<endl;
    };

    return 0;
}
