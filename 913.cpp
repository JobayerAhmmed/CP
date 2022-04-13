#include<iostream>

using namespace std;

int main(void)
{
    int n;
    unsigned long long int last1, last2, last3;
    unsigned long long int sum;
    unsigned long long int result;

    while(cin >> n) {

        sum = 0;
        while(n > 3) {
            sum += n;
            n = n - 2;
        }

        last1 = sum * 2 + 3;
        last2 = sum * 2 + 5;
        last3 = sum * 2 + 7;

        result = last1 + last2 + last3;

        cout << result << endl;
    }

    return 0;
}
