#include<iostream>
#include<string>

using namespace std;

void swapp(char *str, int a, int b);
int permute(char *str, int length);

int main(void)
{
    string input;
    char text[50];
    int length;

    while(1){
        getline(cin, input);
        if(input[0] == '#') break;

        length = input.length();
        input.copy(text, length, 0);
        text[length] = '\0';

        /* print the result */
        if(permute(text, length))
            cout << text << endl;
        else
            cout << "No Successor" << endl;
    }

    return 0;
}
int permute(char *str, int length)
{
    int key;
    int swapKey;

    /* search key from right of the string */
    key = length - 1;
    while((key > 0) && (str[key] <= str[key-1]))
        key--;
    key--;

    /* This means all permutation have been produced */
    if(key < 0)
        return 0;

    /* searh the swapkey in tail from the right */
    swapKey = length - 1;
    while((swapKey > key) && (str[swapKey] <= str[key]))
        swapKey--;

    swapp(str, key, swapKey);

    /* sort the tail ascending order */
    key++;
    length--;
    while(key < length) {
        swapp(str, key, length);
        key++;
        length--;
    }
    return 1;
}
void swapp(char *str, int a, int b)
{
    char temp = str[a];
    str[a] = str[b];
    str[b] = temp;
}
