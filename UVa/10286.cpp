#include<iostream>  // std :: fixed;
#include<cmath>
#include<iomanip>   // std :: setprecision();

using namespace std;

int main(void)
{
    double pentagonLength;
    double squareLength;
    double pi = 3.1415926535897;

    while(cin >> pentagonLength) {
        squareLength = ( sin( (108.0*pi) / 180.0 ) /
            sin( (63.0 * pi) / 180.0) ) * pentagonLength;
        cout << fixed;
        cout << setprecision(10) << squareLength << endl;
    }

    return 0;
}
