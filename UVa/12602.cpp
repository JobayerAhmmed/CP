#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void)
{
    int testCase;
    string input;
    string garbage;
    int sum1, sum2;
    int difference;

    cin >> testCase;
    getline(cin, garbage);

    for(int i = 0; i < testCase; i++) {

        getline(cin,input);
        sum1 = sum2 = 0;

        sum1 = (input[0] - 'A') * 26 * 26 + (input[1] - 'A') * 26
                     + (input[2] - 'A' );

        sum2 = (input[4] - 48)*1000 + (input[5] - 48)*100
                + (input[6] - 48)*10 + (input[7] - 48);

        if(abs(sum1 - sum2) <= 100)
            cout << "nice" << endl;
        else
            cout << "not nice" << endl;
    }

    return 0;
}
