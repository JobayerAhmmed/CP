/*
 when n = 10
 s1 = 1+2+3+...+7
 s2 = 2(1*1 + 2*2 +3*3) - 3*3
 s3 = (1+2+3) - 3
*/

#include<iostream>

using namespace std;

int main(void)
{
    long long int s1, s2, s3, n, range, total;

    cin >> n;

    while(n > 2) {

        s1 = (n-3)*(n-2)/2;
        range = n/2 - 2;
        s2 = (range*(range+1)*(2*range+1))/3;
        s3 = (range*(range +1))/2;
        if(n %2 == 0) {
            s2 = s2 - range*range;
            s3 = s3 - range;
        }
        total = s1 + s2 + s3;
        cout << total << endl;
        cin >> n;
    }

    return 0;
}
