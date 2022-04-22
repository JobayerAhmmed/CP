#include<iostream>

using namespace std;

int main(void)
{
    int numberOfTestCase;
    int numberOfFarmers;
    int sizeOfFarmyard;
    int numberOfAnimals;
    int environmentFreindliness;
    int result;

    cin >> numberOfTestCase;
    for(int i = 0; i < numberOfTestCase; i++) {
        cin >> numberOfFarmers;
        result = 0;
        for(int m = 0; m < numberOfFarmers; m++) {
            cin >> sizeOfFarmyard >> numberOfAnimals;
            cin >> environmentFreindliness;
            result += sizeOfFarmyard * environmentFreindliness;
        }
        cout << result << endl;
    }

    return 0;
}
