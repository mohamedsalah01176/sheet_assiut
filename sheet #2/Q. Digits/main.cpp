#include <iostream>

using namespace std;

int main()
{
    int lines;
    cin>>lines;
    string arr[lines];
    for(int i=0;i<lines;i++){
        cin>>arr[i];
    }

    for(int i=0;i<lines;i++){
        for(int j=0;j<arr[i].length();j++){
            cout<<arr[i][arr[i].length()-j-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
