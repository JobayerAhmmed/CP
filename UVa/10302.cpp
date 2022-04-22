#include<iostream>

using namespace std;

int main(void)
{
    long long int x;
    long long int sum;
    while(cin >> x) {
        sum = 0;
        for(long long int i= 1; i <= x; i++) {
            sum += i*i*i;
        }
        cout << sum << endl;
    }

    return 0;
}
