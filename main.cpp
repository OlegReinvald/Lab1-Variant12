#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin >> x;
    double result;
    double temp = 1;
    int factorial = 1;
    int counter = 0;
    while (temp >= pow(10, -5))
    {
        temp = (pow(x, counter)) / factorial;
        result += temp;
        counter += 1;
        factorial *= counter;
        counter += 1;
        factorial *= counter;
    }
    double answ = (exp(x) + exp(-x)) / 2.0;
    cout << setprecision(15) << result << "\n" << answ;
    return 0;
}
