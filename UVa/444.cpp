#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string text;
    char ch;
    int flag;
    int length;
    int code;
    int i;

    while(getline(cin, text)) {

        length = text.length();
        i = length - 1;

        code = text[i] - 48;
        flag = 1;   // decoded

        if(code >= 0 && code <= 9)
            flag = 0;   // encoded

        if(flag) {

            while(i >= 0) {
                code = text[i];
                if(code > 99) {
                    cout << code % 10;
                    code = code / 10;
                    cout << code % 10;
                    code = code / 10;
                    cout << code % 10;
                }
                else {
                    cout << code % 10;
                    code = code / 10;
                    cout << code % 10;
                }
                i--;
            }
        }

        else {

            while(i >= 0) {
                code = (text[i] - 48) * 10;
                i--;
                code = code + (text[i] - 48);
                if(code < 13) {
                    i--;
                    code = code * 10 + (text[i] - 48);
                }
                ch = code;
                cout << ch;
                i--;
            }
        }
        cout << endl;
    }

    return 0;
}
