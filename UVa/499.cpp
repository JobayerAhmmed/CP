#include<iostream>
#include<string>

using namespace std;

void bubbleSort(char *letter, int length);

int main(void)
{
    string inputLine;
    char letter[52];
    int highstCount, currentCount;
    string temp1, temp2;
    int flag;
    char ch;
    int length;

    while(getline(cin, inputLine)) {

        length = inputLine.length();
        temp1 = "";
        for(int i = 0; i < length; i++) {
            ch = inputLine[i];
            if( ( (ch >= 'A') && (ch <= 'Z') ) ||
               ((ch >= 'a') && (ch <= 'z') ) )
                temp1.append(1, ch);
        }

        flag = -1;
        highstCount = 0;

        while(1) {
            ch = temp1[0];
            currentCount = 1;
            length = temp1.length();

            for(int i = 1; i < length; i++) {
                if(ch == temp1[i])
                    currentCount++;
                else
                    temp2.append(1, temp1[i]);
            }

            if(currentCount > highstCount) {
                highstCount = currentCount;
                flag = 0;
                letter[0] = ch;
            }
            else if(currentCount == highstCount) {
                flag++;
                letter[flag] = ch;
            }

            if(temp2.length() == 0) break;
            temp1 = temp2;
            temp2 = "";
        }

        bubbleSort(letter, flag+1);
        letter[flag+1] = '\0';
        cout << letter << " " << highstCount << endl;
    }

    return 0;
}

void bubbleSort(char *letter, int length)
{
    for(int i = 0; i < length-1; i++) {
        for(int j = 0; j < length-1-i; j++) {
            if(letter[j] > letter[j+1]) {
                char temp = letter[j];
                letter[j] = letter[j+1];
                letter[j+1] = temp;
            }
        }
    }
}
