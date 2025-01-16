#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


int main() {
         long long num1, num2, num3, numBody = 0;
    cin >> num1 >> num2 >> num3;

    long long minGroup = min({num1, num2, num3});
    numBody += minGroup;
    num1 -= minGroup;
    num2 -= minGroup;
    num3 -= minGroup;

    long long minGroup2 = min(num1 / 2, num3);
    numBody += minGroup2;
    num1 -= 2 * minGroup2;
    num3 -= minGroup2;

    cout << numBody << endl;
    return 0;
}
