#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    long int input, row, column;
    long int elements, difference;

    while(cin >> input) {

        long int i = sqrt(input);
        elements = (i * (i + 1)) / 2;

        while(elements < input) {
            i++;
            elements = (i * (i + 1)) / 2;
        }

        difference = elements - input;
        row = 1 + difference;
        column = i - difference;

        if(!(i % 2)) {
            column = 1 + difference;
            row = i - difference;
        }

        cout << "TERM " << input << " IS " << row << "/" << column << endl;
    }

    return 0;
}
