#include<iostream>
#include<string>

using namespace std;

int minLoc(char *letter, int k, int N);
void selectionSort(char *letter, int N);

int main(void)
{
    int testCase;
    string inputLine;
    string s;
    int length;
    string temp1, temp2;
    char letter[26];
    int highstCount, currentCount;
    int flag;
    char ch;

    cin >> testCase;
    getline(cin, s);    // take newline

    for(int k = 0; k < testCase; k++) {

        getline(cin, inputLine);
        length = inputLine.length();

        temp1 = "";
        temp2 = "";

        for(int i = 0; i < length; i++) {
            ch = tolower(inputLine[i]);
            if(ch >= 'a' && ch <= 'z')
                temp1.append(1, ch);
        }

        highstCount = 0;
        flag = -1;
        while(1) {

            ch = temp1[0];
            currentCount = 1;
            int j = 1;

            while(j < temp1.length()) {
                if(ch == temp1[j])
                    currentCount++;
                else
                    temp2.append(1, temp1[j]);
                j++;
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

        /* selection sort */
        selectionSort(letter, flag + 1);

        for(int i = 0; i <= flag; i++)
            cout << letter[i];

        cout << endl;
    }

    return 0;
}

int minLoc(char *letter, int k, int N)
{
    int loc = k;
    char ch = letter[k];

    for(int j = k+1; j < N; j++) {
        if(ch > letter[j]) {
            ch = letter[j];
            loc = j;
        }
    }
    return loc;
}

void selectionSort(char *letter, int N)
{
    int loc;
    char temp;

    for(int k = 0; k < N-1; k++) {
        loc = minLoc(letter, k, N);
        temp = letter[k];
        letter[k] = letter[loc];
        letter[loc] = temp;
    }
}
