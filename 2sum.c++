#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  //   vector<int> TwoSum(vector<int> &nums, int target)
  //   {
  //     int n = nums.size();
  //     vector<pair<int, int>> numIndex;
  //     for (int i = 0; i < n; i++)
  //     {
  //       numIndex.push_back({nums[i], i});
  //     }
  //     sort(numIndex.begin(), numIndex.end());

  //     int st = 0, end = n - 1;
  //     while (st <= end)
  //     {
  //       int sum = numIndex[st].first + numIndex[end].first;
  //       if (sum == target)
  //       {
  //         return {numIndex[st].second, numIndex[end].second};
  //       }
  //       else if (sum > target)
  //       {
  //         end--;
  //       }
  //       else
  //       {
  //         st++;
  //       }
  //     }
  //     return {};
  //   }
  // };

  // hashing using
  vector<int> TwoSum(vector<int> &nums, int target)
  {
    int n = nums.size();
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
      int first = nums[i];
      int second = target - first;
      if (m.find(second) != m.end())
      {
        ans.push_back(i);
        ans.push_back(m[second]);
        break;
      }
      m[first] = i;
    }
    return ans;
  };
};
int main()
{
  vector<int> nums = {5, 2, 11, 7, 15};
  int target = 9;

  Solution sol;
  vector<int> result = sol.TwoSum(nums, target);

  if (!result.empty())
  {
    cout << "Indices: " << result[0] << " and " << result[1] << endl;
  }
  else
  {
    cout << "No valid pair found." << endl;
  }

  return 0;
}
