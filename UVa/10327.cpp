#include<iostream>

using namespace std;

int main(void)
{
    int integerNumber;
    int counter;
    int temp;

    while(cin >> integerNumber) {

        int input[integerNumber];
        for(int i = 0; i < integerNumber; i++)
            cin >> input[i];

        counter = 0;
        /* bubble sort */
        for(int i = 0; i < integerNumber-1; i++) {
            for(int j = 0; j < integerNumber-1-i; j++) {
                if(input[j] > input[j+1]) {
                    temp = input[j];
                    input[j] = input[j+1];
                    input[j+1] = temp;
                    counter++;
                }
            }
        }

        cout << "Minimum exchange operations : " << counter << endl;
    }

    return 0;
}
