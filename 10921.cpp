#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string input;

    while(getline(cin, input)) {

        int i = 0;
        while(input[i]) {

            char ch = input[i];
            if(ch >= 'A' && ch <= 'C')
                cout << "2";
            else if(ch >= 'D' && ch <= 'F')
                cout << "3";
            else if(ch >= 'G' && ch <= 'I')
                cout << "4";
            else if(ch >= 'J' && ch <= 'L')
                cout << "5";
            else if(ch >= 'M' && ch <= 'O')
                cout << "6";
            else if(ch >= 'P' && ch <= 'S')
                cout << "7";
            else if(ch >= 'T' && ch <= 'V')
                cout << "8";
            else if(ch >= 'W' && ch <= 'Z')
                cout << "9";
            else
                cout << ch;

            i++;
        }

        cout << endl;
    }

    return 0;
}
