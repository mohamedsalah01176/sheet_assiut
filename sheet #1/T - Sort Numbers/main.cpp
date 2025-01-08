#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    int arr[3]={x,y,z};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }


    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;



    return 0;
}
