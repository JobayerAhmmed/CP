#include<iostream>

using namespace std;

int main(void)
{
    int inputSet;
    int a, b;

    cin >> inputSet;

    for(int i = 0; i < inputSet; i++) {
        cin >> a >> b;
        if(a > b) cout << ">" << endl;
        else if (a < b) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;
}
