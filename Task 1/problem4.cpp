#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int diagonalDifference(vector<vector<int>> matrix, int n) 
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += matrix[i][i]; 
        sum2 += matrix[i][n - 1 - i]; 
    }
    return abs(sum1 - sum2);
}

int main()
{

int n,sum1= 0, sum2 = 0;
vector<vector<int>> matrix;
cout << "-Enter the the matrix size " << endl;
cin >> n;
matrix.resize(n, vector<int>(n));

for (int i = 0; i < n; i++)
{
    cout << "-Enter the elements of the row number " << i + 1 << endl;
    for (int j = 0; j < n; j++)
    {
        int element;
        cin >> element;
        matrix[i][j] = element;
        if (element < -100 || element > 100)
        {
            cout << "-Invalid input, please enter values between -100 and 100." << endl;
            return 1;
        }

    }
}

cout << "the diagonals difference of the matrix = " <<diagonalDifference(matrix,n);

return 0;

}


