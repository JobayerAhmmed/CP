#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(void)
{
    string line1, line2;
    int sum1, sum2;
    double percentage;
    char ch;
    int remainder;
    int temp;

    while(getline(cin, line1)) {
        getline(cin, line2);

        sum1 = sum2 = 0;
        int i = 0;
        while(line1[i]) {

            ch = line1[i];
            if( ( (ch >= 'A') && (ch <= 'Z') )
             || ( (ch >= 'a') && (ch <= 'z') ) ) {
                ch = tolower(ch);
                sum1 += ch - 96;
             }

            i++;
        }

        i = 0;
        while(line2[i]) {

            ch = line2[i];
            if( ( (ch >= 'A') && (ch <= 'Z') )
             || ( (ch >= 'a') && (ch <= 'z') ) ) {
                ch = tolower(ch);
                sum2 += ch - 96;
             }

            i++;
        }

        while(sum1 > 9) {

            temp = 0;
            while(sum1 != 0) {
                remainder = sum1 % 10;
                temp += remainder;
                sum1 = sum1 / 10;
            }
            sum1 = temp;
        }

        while(sum2 > 9) {

            temp = 0;
            while(sum2 != 0) {
                remainder = sum2 % 10;
                temp += remainder;
                sum2 = sum2 / 10;
            }
            sum2 = temp;
        }

        if(sum1 > sum2)
            percentage = ( (double)sum2 / (double)sum1 ) * 100.0;
        else
            percentage = ( (double)sum1 / (double)sum2 ) * 100.0;

        cout << fixed;
        cout << setprecision(2) << percentage << " %" << endl;
    }

    return 0;
}
