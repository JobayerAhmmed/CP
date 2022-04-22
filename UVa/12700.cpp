#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int testCase;
    int matches;
    string str, garbage;
    int a, b, t, w;

    cin >> testCase;

    for(int i = 1; i <= testCase; i++) {

        cin >> matches;
        getline(cin, garbage);
        getline(cin, str);

        a = b = t = w = 0;
        int j = 0;

        while(str[j]) {

            switch(str[j]) {
            case 'A' :
                a++;
                break;
            case 'B' :
                b++;
                break;
            case 'T' :
                t++;
                break;
            case 'W' :
                w++;
                break;
            }

            j++;
        }

        if(a == matches)
            cout << "Case " << i << ": ABANDONED" << endl;
        else if(a + b == matches)
            cout << "Case " << i << ": BANGLAWASH" << endl;
        else if(a + w == matches)
            cout << "Case " << i << ": WHITEWASH" << endl;
        else if(b == w)
            cout << "Case " << i << ": DRAW " << b << " " << t << endl;
        else if(b > w)
            cout << "Case " << i << ": BANGLADESH " << b << " - "
                << w << endl;
        else if(b < w)
            cout << "Case " << i << ": WWW " << w << " - "
                << b << endl;
    }

    return 0;
}
