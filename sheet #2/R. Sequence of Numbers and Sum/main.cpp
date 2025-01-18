#include <iostream>

using namespace std;

int main()
{
        int num1,num2;
    do{
        int sum=0;
        cin>>num1>>num2;
        if(num1<=0 || num2<=0){
            break;
        }
        if(num1>num2){
            for(int i=num2;i<=num1;i++){
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }else{
            for(int i=num1;i<=num2;i++){
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
    }while(num1>0 && num2>0);

    return 0;
}
