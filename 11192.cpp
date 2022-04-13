#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int group;
    int length;
    int letterInGroup;
    string str;
    char buffer[100];
    char temp;

    getline(cin, str);
    group = str[0] - 48;

    while(group != 0) {

        str.copy(buffer, str.length()-2, 2);
        length = str.length() - 2;
        buffer[length] = '\0';

        letterInGroup = length / group;

        int j = 0;
        int k = letterInGroup - 1;
        for(int i = 1; i <= group; i++) {

            while(j < k) {
                temp = buffer[j];
                buffer[j] = buffer[k];
                buffer[k] = temp;
                j++;
                k--;
            }
            j = letterInGroup * i;
            k = (i + 1) * letterInGroup - 1;
        }

        cout << buffer << endl;

        getline(cin, str);
        group = str[0] - 48;
    }

    return 0;
}
