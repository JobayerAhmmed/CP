#include<iostream>
#include<string>

using namespace std;

int countDegree(int sum);

int main(void)
{
    string input;
    int sum;
    int degree;

    getline(cin, input);
    sum = input[0] - 48;

    while(sum != 0) {

        int i = 1;
        while(input[i]) {
            sum += input[i] - 48;
            i++;
        }

        degree = 0;
        if(!(sum % 9))
            degree = countDegree(sum);

        switch(degree) {
        case 0 :
            cout << input << " is not a multiple of 9." << endl;
            break;
        default :
            cout << input << " is a multiple of 9 and has 9-degree "
                << degree << "." << endl;
            break;
        }

        getline(cin, input);
        sum = input[0] - 48;
    }

    return 0;
}

int countDegree(int sum)
{
    int degree = 0;
    int newSum = 0;
    int remainder;

    if(sum > 9) {

        do {
            remainder = sum % 10;
            newSum += remainder;
            sum = sum / 10;
        } while(sum != 0);

        degree = 1;
        return degree + countDegree(newSum);
    }
    else
        return 1;
}
