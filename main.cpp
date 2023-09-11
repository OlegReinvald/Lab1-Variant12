#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin >> x;
    double result;
    long double temp = 1;
    long double factorial = 1;
    int counter = 0;
    while (temp >= pow(10, -10))
    {
        if (isinf(pow(x, counter)))
        {
            break;
        }
        temp = (pow(x, counter)) / factorial;
        result += temp;
        counter += 1;
        factorial *= counter;
        counter += 1;
        factorial *= counter;
        if (factorial == 0)
        {
            break;
        }
        cout << counter << " . " << pow(x, counter) << " . " << temp << " . " << factorial << "\n";
    }
    long double answ = (exp(x) + exp(-x)) / 2.0;
    cout << setprecision(20) << result << "\n" << answ;
    return 0;
}
