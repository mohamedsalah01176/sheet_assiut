#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, isFloat = "int";
    cin >> x;

    string integerPart = x;
    string decimalPart = "";
    size_t pointPos = x.find('.');
    if (pointPos != string::npos) {
        isFloat = "float";
        integerPart = x.substr(0, pointPos);
        decimalPart = x.substr(pointPos + 1);

        if (decimalPart.find_first_not_of('0') == string::npos) {
            isFloat = "int";
            decimalPart = "";
        }
    }

    cout << isFloat << " " << integerPart;
    if (!decimalPart.empty()) {
        cout << " 0." << decimalPart;
    }
    cout << endl;

    return 0;
}
