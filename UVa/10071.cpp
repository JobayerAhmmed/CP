#include<iostream>

using namespace std;

int main(void)
{
    float v, t, a, s;

    while(cin >> v >> t) {
        s = 0;
        if((v != 0)&&(t != 0)) {
            a = v/t;
            v = a*2*t;
            s = (v*v)/(2*a);
        }
        cout << s << endl;
    }

    return 0;
}
