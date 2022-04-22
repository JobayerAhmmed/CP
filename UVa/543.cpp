#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int number;
    int a, b;
    int rootA, rootB;
    int flag;

    cin >> number;

    while(number != 0) {

        a = 3;
        b = number - a;
        flag = 1;

        while(a < (number / 2)) {

            rootA = sqrt(a);
            rootB = sqrt(b);
            flag = 1;

            for(int i = 3; i <= rootA; i = i+2)
                if(a % i == 0)
                    flag = 0;

            for(int i = 3; i <= rootB; i = i+2)
                if(b % i == 0)
                    flag = 0;

            if(flag)
                break;

            a += 2;
            b = number - a;
        }

        if(flag)
            cout << number << " = " << a << " + " << b << endl;
        else
            cout << "Goldbach's conjecture is wrong." << endl;

        cin >> number;
    }

    return 0;
}
