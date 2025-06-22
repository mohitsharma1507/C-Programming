#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool searchInRow(vector<vector<int>> &matrix, int target, int row)
  {
    int n = matrix[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
      int mid = st + (end - st) / 2;
      if (target == matrix[row][mid])
      {
        return true;
      }
      else if (target >= matrix[row][mid])
      {
        st = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
    return false;
  };

  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int m = matrix.size(), n = matrix[0].size();
    int stRow = 0, endRow = m - 1;
    while (stRow <= endRow)
    {
      int midRow = stRow + (endRow - stRow) / 2;

      if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
      {
        return searchInRow(matrix, target, midRow);
      }
      else if (target >= matrix[midRow][n - 1])
      {
        stRow = midRow + 1;
      }
      else
      {
        endRow = midRow - 1;
      }
    }
    return false;
  };
};

int main()
{
  Solution sol;
  vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {27, 30, 34, 60}};
  int target = 60;
  if (sol.searchMatrix(matrix, target) == 0)
  {
    cout << "VALUE :" << target << "\nNo this value is not in Matrix\n"
         << endl;
  }
  else if (sol.searchMatrix(matrix, target) == 1)
  {
    cout << "VALUE:\t" << target << "\nYes this value is in Matrix\n"
         << endl;
  }
  else
  {
    cout << "Gandu" << endl;
  }
  return 0;
}