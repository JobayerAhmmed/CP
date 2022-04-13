#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string input;
    char output;

    int i;
    while(getline(cin,input)) {
        i = 0;
        while(input[i]) {
            output = input[i] - 7;
            cout << output;
            i++;
        }
        cout << endl;
    }

    return 0;
}
