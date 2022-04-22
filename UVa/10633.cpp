#include<iostream>

using namespace std;

int main(void)
{
    unsigned long long int input;
    unsigned long long int n;

    cin >> input;

    while(input != 0) {

        input = input * 10;
        n = input / 9;

        if(input % 9)
            cout << n << endl;
        else
            cout << n-1 << " " << n << endl;

        cin >> input;
    }

    return 0;
}
