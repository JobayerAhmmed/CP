#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string str;
    int flag = 0;
    char backquote = '`';
    char apostrophe = '\'';

    int i = 0;
    while(getline(cin,str)) {
        i = 0;
        while(str[i]) {
            if(str[i] == '"') {
                switch(flag) {
                    case 0 :
                        flag = 1;
                        cout << backquote << backquote;
                        break;
                    case 1 :
                        flag = 2;
                        cout << apostrophe << apostrophe;
                        break;
                    case 2 :
                        flag = 1;
                        cout << backquote << backquote;
                        break;
                }
            }
            else
                cout << str[i];
            i++;
        }
        cout << endl;
    }

    return 0;
}
