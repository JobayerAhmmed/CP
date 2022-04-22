#include<iostream>
#include<iomanip>   // std :: fixed; std :: setprecision;

using namespace std;

int main(void)
{
    int testCase;
    int people;
    int sum;
    int average;
    int counter;
    double percentage;

    cin >> testCase;
    for(int i = 0; i < testCase; i++) {

        cin >> people;
        int marks[people];

        sum = 0;
        for(int j = 0; j < people; j++) {
            cin >> marks[j];
            sum += marks[j];
        }

        average = sum / people;
        counter = 0;

        for(int j = 0; j < people; j++)
            if(marks[j] > average)
                counter++;

        percentage = ( (double)counter / (double)people ) * 100.0;

        cout << fixed;
        cout << setprecision(3) << percentage << "%" << endl;
    }

    return 0;
}
