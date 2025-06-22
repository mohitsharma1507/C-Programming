
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> FourSum(vector<int> &nums, int tar)
{
  int n = nums.size();
  vector<vector<int>> ans;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n; i++)
  {
    if (i > 0 && nums[i] == nums[i - 1])
    {
      continue;
    }
    for (int j = i + 1; j < n; j++)
    {
      if (j > i + 1 && nums[j] == nums[j - 1])
      {
        continue;
      }

      int p = j + 1;
      int q = n - 1;
      while (p < q)
      {
        int sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
        if (sum < tar)
        {
          p++;
        }
        else if (sum > tar)
        {
          q--;
        }
        else
        {
          ans.push_back({nums[i], nums[j], nums[p], nums[q]});
          p++;
          q--;
        }
        while (p < q && nums[p] == nums[p - 1])
        {
          p++;
        }

        while (p < q && nums[q] == nums[q + 1])
        {
          q--;
        }
      }
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
  int tar = 0;
  vector<vector<int>> result = FourSum(nums, tar);
  for (const auto &quad : result)
  {
    for (int num : quad)
    {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
