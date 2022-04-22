#include<iostream>

using namespace std;

int main(void)
{
    int testCase;
    int n, m;
    int result;

    cin >> testCase;

    int i = 0;
    while(i < testCase) {
        cin >> n >> m;
        result = (n/3) * (m/3);
        cout << result << endl;
        i++;
    }

    return 0;
}
