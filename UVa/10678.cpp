#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void)
{
    int testCase;
    double distance, length;
    double a, b, c;
    double pi = 2 * acos(0);
    double area;

    cin >> testCase;

    for(int i = 0; i < testCase; i++) {

        cin >> distance >> length;

        a = length / 2.0;
        c = distance / 2.0;
        b = sqrt(a*a - c*c);

        area = pi * a * b;

        cout << fixed;
        cout << setprecision(3) << area << endl;
    }


    return 0;
}
