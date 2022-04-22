#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int n;
    int result;

    cin >> testCase;

    for(int i = 0; i < testCase; i++) {
        cin >> n;

        result = ((( n * 567 ) / 9 + 7492 ) * 235 ) / 47 - 498;
        result = result / 10;
        result = result % 10;

        if(result < 0)
            result = result * (-1);

        cout << result << endl;
    }

    return 0;
}
