#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int l, w, h;
    int flag;

    cin >> testCase;

    int i = 0;
    while(i < testCase) {

        cin >> l >> w >> h;

        flag = 1;

        if(l > 20 || w > 20 || h > 20)
            flag = 0;

        if(flag)
            cout << "Case " << i+1 << ": good" << endl;
        else
            cout << "Case " << i+1 << ": bad" << endl;

        i++;
    }

    return 0;
}
