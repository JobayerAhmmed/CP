#include<iostream>

using namespace std;

int f91(int n);

int main(void)
{
    int n;
    int result;

    cin >> n;

    while(n != 0) {

        result = f91(n);

        cout << "f91(" << n << ") = " << result << endl;

        cin >> n;
    }

    return 0;
}

int f91(int n)
{
    if(n < 101)
        return f91(f91(n+11));
    else
        return n-10;
}

