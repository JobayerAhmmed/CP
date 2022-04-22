#include<iostream>

using namespace std;

int main(void)
{
    int numberOfStack;
    int bricksPerStack;
    int totalBricks;
    int moveSum;
    int countSet = 0;

    cin >> numberOfStack;
    while(numberOfStack != 0) {

        int stacks[numberOfStack];
        countSet++;
        totalBricks = 0;
        for(int i = 0; i < numberOfStack; i++) {
            cin >> stacks[i];
            totalBricks += stacks[i];
        }

        bricksPerStack = totalBricks / numberOfStack;

        moveSum = 0;
        for(int i = 0; i < numberOfStack; i++)
            if(stacks[i] > bricksPerStack)
                moveSum += stacks[i] - bricksPerStack;

        cout << "Set #" << countSet << endl;
        cout << "The minimum number of moves is "
            << moveSum << "." << endl << endl;

        cin >> numberOfStack;
    }

    return 0;
}
