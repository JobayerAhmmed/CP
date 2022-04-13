#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    long long int input, row, column;
    long long int elements, difference;
    double n;

    while(cin >> input) {

        n = (-1.0 + sqrt(1.0 + 8.0 * input)) / 2.0;
        n = ceil(n);

        elements = (n * (n + 1)) / 2;
        difference = elements - input;

        column = 1 + difference;
        row = n - difference;

        cout << column << "/" << row << endl;
    }

    return 0;
}

