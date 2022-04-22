#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int number;
    int n;
    int newNumber;
    int flag;
    int remainder;

    cin >> testCase;

    for(int i = 1; i<= testCase; i++) {
        cin >> number;
        n = number;

        while(1) {
            newNumber = 0;
            while(n != 0) {
                remainder = n % 10;
                newNumber += remainder * remainder;
                n = n / 10;
            }
            n = newNumber;
            if(n == 1) {
                cout << "Case #" << i << ": " << number
                    << " is a Happy number." << endl;
                break;
            }
            else if(n == 4) {
                cout << "Case #" << i << ": " << number
                    << " is an Unhappy number." << endl;
                break;
            }
        }
    }

    return 0;
}

