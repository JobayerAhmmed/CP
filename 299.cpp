#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int length;     // length of the traim
    int count;      // number of swap

    cin >> testCase;

    for(int i = 0; i < testCase; i++) {
        cin >> length;
        int myArray[length];

        /* take the carriage order */
        for(int m = 0; m < length; m++)
            cin >> myArray[m];

        /* order the carriage */
        count = 0;
        for(int k = 0; k < length-1; k++) {
            for(int l = 0; l < length-1-k; l++) {
                if(myArray[l] > myArray[l+1]) {
                    count++;
                    int temp = myArray[l];
                    myArray[l] = myArray[l+1];
                    myArray[l+1] = temp;
                }
            }
        }
        cout << "Optimal train swapping takes " << count
            << " swaps." << endl;
    }

    return 0;
}

