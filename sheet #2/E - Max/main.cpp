#include <iostream>


using namespace std;



int main() {
    int length ;
    cin>>length;
    int arr[length];

    for(int i=0;i<length;i++){
        cin>>arr[i];
    }

    int great=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]>great){
            great=arr[i];
        }
    }
    cout<<great<<endl;
    return 0;
}
