#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin >> x;
    int k;
    cin >> k;
    long double result;
    long double temp = 1;
    long double factorial = 1;
    int counter = 0;
    while (temp >= pow(10, -k))
    {
        if (isinf(pow(x, counter)))
        {
            break;
        }
        temp = (pow(x, counter)) / factorial;
        if (isinf(result + temp)) {
            break;
        }
        result += temp;
        counter += 1;
        factorial *= counter;
        counter += 1;
        factorial *= counter;
        if (factorial == 0)
        {
            break;
        }
    }
    long double answer = (exp(x) + exp(-x)) / 2.0;
    cout << setprecision(20) << result << "\n" << answer;
    return 0;
}
