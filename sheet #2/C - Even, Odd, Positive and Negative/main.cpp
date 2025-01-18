#include <iostream>


using namespace std;



int main() {
    int num,numOfEvent,numOfOdd,numOfPositive,numOfNegative;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]>0){
            numOfPositive++;
        }
        if(arr[i]<0){
            numOfNegative++;
        }
        if(abs(arr[i])%2==0 ){
            numOfEvent++;
        }else{
            numOfOdd++;
        }

    }
    cout<<"Even: "<<numOfEvent<<endl;
    cout<<"Odd: "<< numOfOdd<<endl;
    cout<<"Positive: "<<numOfPositive<<endl;
    cout<<"Negative: "<<numOfNegative<<endl;

    return 0;
}
