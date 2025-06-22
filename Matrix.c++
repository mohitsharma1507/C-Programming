#include <iostream>
#include <vector>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int row, int cols, int key)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == key)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main()
{
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = 4;
  int cols = 3;
  int key = 5;
  pair<int, int> result = linearSearch(matrix, row, cols, key);

  if (result.first != -1 && result.second != -1)
  {
    cout << "Key found at position: (" << result.first << ", " << result.second << ")" << endl;
  }
  else
  {
    cout << "Key not found in the matrix." << endl;
  }

  return 0;
}