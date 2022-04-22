#include<iostream>

using namespace std;

int cycle(long long int n);

int main(void)
{
    long long int num1, num2;
    int length;
    int counter;
    long long int i, j, n;

    while(cin >> num1) {
        cin >> num2;

        i = num1;
        j = num2;
        if(num1 > num2) {
            i = num2;
            j = num1;
        }

        length = 0;
        for(n = i; n <= j; n++) {

            counter = cycle(n);
            if(counter > length)
                length = counter;
        }
        cout << num1 << " " << num2 << " " << length << endl;
    }

    return 0;
}
int cycle(long long int n)
{
    if(n == 1)
        return 1;
    else if (n %2)
        return 1 + cycle(3*n + 1);
    else
        return 1 + cycle(n/2);
}
