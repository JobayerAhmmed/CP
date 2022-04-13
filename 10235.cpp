#include<iostream>
#include<cmath>

using namespace std;

int testPrime(int input);

int main(void)
{
    int input;
    int root;
    int isPrime;


    while(cin >> input) {

        isPrime = testPrime(input);

        switch(isPrime) {
        case 0 :
            cout << input << " is not prime." << endl;
            break;
        case 1 :
            cout << input << " is prime." << endl;
            break;
        default :
            cout << input << " is emirp." << endl;
            break;
        }
    }

    return 0;
}
int testPrime(int input)
{
    int number;
    int reverseInput;
    int reverseRoot;
    int remainder;
    int root;

    number = input;

    if(input == 2 || input == 3)
        return 1;

    root = sqrt(input);

    int i = 2;
    while(i <= root) {
        if(input % i == 0) {
            return 0;
        }
        i++;
    }

    reverseInput = 0;
    while(input != 0) {
        remainder = input % 10;
        reverseInput = reverseInput * 10 + remainder;
        input = input / 10;
    }

    if(reverseInput == number)
        return 1;

    reverseRoot = sqrt(reverseInput);

    int j = 2;
    while(j <= reverseRoot) {
        if(reverseInput % j == 0)
            return 1;

        j++;
    }

    return 2;
}
