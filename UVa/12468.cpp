#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int a, b;
    int dif1, dif2;

    cin >> a >> b;

    while(a != -1) {

        if(a >= b)
            dif1 = 100 - a + b;
        else
            dif1 = 100 - b + a;

        dif2 = abs(a - b);

        if(dif1 <= dif2)
            cout << dif1 << endl;
        else
            cout << dif2 << endl;

        cin >> a >> b;
    }

    return 0;
}
