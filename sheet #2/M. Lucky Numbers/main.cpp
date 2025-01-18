#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    bool isFound=false;

    for(int i=num1;i<=num2;i++){
        bool isluky=true;
        string str=to_string(i);
        for(int j=0;j<str.length();j++){
            if(str[j] !='7' && str[j]!='4'){
                isluky=false;
                break;
            }
        }
        if(isluky){
            cout<<str<<" ";
                isFound=true;
        }
    }
    if(!isFound){
        cout<<-1;
    }

    return 0;
}
