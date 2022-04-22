#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int n;
    int row, column;
    int rowFlag, columnFlag;
    int rowSum, columnSum;

    cin >> n;
    while(n != 0) {

        int matrix[n][n];
        for(int i = 0; i< n; i++)
            for(int j = 0; j < n; j++)
                cin >> matrix[i][j];

        rowFlag = columnFlag = 0;
        for(int i = 0; i < n; i++) {
            rowSum = columnSum = 0;
            for(int j = 0; j < n; j++) {
                rowSum += matrix[i][j];
                columnSum += matrix[j][i];
            }
            if(rowSum % 2 != 0) {
                rowFlag++;
                row = i + 1;
            }
            if(columnSum % 2 != 0) {
                columnFlag++;
                column = i + 1;
            }
            if((rowFlag > 1) || (columnFlag > 1)) {
                cout << "Corrupt" << endl;
                break;
            }
        }

        if((rowFlag == 1) && (columnFlag == 1)) {
            cout << "Change bit (" << row << ","
                << column << ")" << endl;
        }
        else if((rowFlag == 0) && (columnFlag == 0))
            cout << "OK" << endl;

        cin >> n;
    }

    return 0;
}
