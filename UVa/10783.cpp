#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int serial;
    int a, b;
    int sum;

    cin >> testCase;

    for(int i = 1; i <= testCase; i++) {

        cin >> a >> b;
        if(a%2 == 0) a = a + 1;

        sum = 0;
        while(a <= b) {
            sum = sum + a;
            a = a + 2;
        }

        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}

