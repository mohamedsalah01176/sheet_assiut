#include <iostream>
#include <String>
#include <algorithm>


using namespace std;

string isPalindrome(long long n){
    string res=to_string(n);
    string flag="YES";
    for(int i=0;i<res.length()/2;i++){
        if(res[i] != res[res.length()-1-i]){
            flag="NO";
        }
    };
    reverse(res.begin(),res.end());
    if(res[0]=='0'){
        for(int i=0;i<res.length();i++){
            if(res[i]== '0'){
                continue;
            }else{
                res=res.substr(i);
                break;
            }
        }
    }
    cout<<res<<endl;
    return flag;
}

int main() {
    long long num;
    cin>>num;

    cout<<isPalindrome(num)<<endl;



    return 0;
}
