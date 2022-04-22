#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string text;
    string code;
    int length;

    while(getline(cin, text)) {

        code = "0";
        int i = 0;
        while(text[i]) {

            switch(text[i]) {

            case 'B': case 'F': case 'P': case 'V':
                length = code.length();
                if(code[length-1] != '1')
                    code.append(1, '1');
                break;

            case 'C': case 'G': case 'J': case 'K':
            case 'Q': case 'S': case 'X': case 'Z':
                length = code.length();
                if(code[length-1] != '2')
                    code.append(1, '2');
                break;

            case 'D': case 'T':
                length = code.length();
                if(code[length-1] != '3')
                    code.append(1, '3');
                break;

            case 'L':
                length = code.length();
                if(code[length-1] != '4')
                    code.append(1, '4');
                break;

            case 'M': case 'N':
                length = code.length();
                if(code[length-1] != '5')
                    code.append(1, '5');
                break;

            case 'R':
                length = code.length();
                if(code[length-1] != '6')
                    code.append(1, '6');
                break;

            default :
                code.append(1, '0');
                break;
            }

            i++;
        }

        i = 0;
        while(code[i]) {
            if(code[i] != '0')
                cout << code[i];
            i++;
        }
        cout << endl;
    }

    return 0;
}
