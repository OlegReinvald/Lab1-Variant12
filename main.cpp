#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


long double taylor_series_chx(double x, int k) {   // function for calculation using sum
    long double result = 1;
    long double term = 1;

    for (int i = 1; term >= pow(10, -k); ++i) {
        term = term * (x * x) / (2 * i * (2 * i - 1));
        result += term;
    }

    return result;
}

int main() {
    double x;
    int k;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter k: ";
    cin >> k;

    long double sum = taylor_series_chx(x, k);
    long double answer = (exp(x) + exp(-x)) / 2.0;

    cout << setprecision(20) << "Result of sum: " << sum << std::endl;
    cout << setprecision(20) << "Strait calculation: "  << answer << std::endl;

    if (fabs(sum - answer) < pow(10, -15)){
        cout << "Numbers are equal";
    } else{
        cout << "Numbers ain't equal";
    }
    return 0;
}