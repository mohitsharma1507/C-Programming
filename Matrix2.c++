#include <iostream>
#include <vector>
using namespace std;

int getMaximumSum(int mat[][3], int cols, int rows)
{
  int maxColSum = INT32_MIN;
  for (int i = 0; i < cols; i++)
  {
    int colSumI = 0;
    for (int j = 0; j < rows; j++)
    {
      colSumI += mat[j][i];
    }
    maxColSum = max(maxColSum, colSumI);
  }
  return maxColSum;
}

int main()
{
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = 3;
  int cols = 3;
  cout << getMaximumSum(matrix, row, cols) << endl;
  return 0;
}