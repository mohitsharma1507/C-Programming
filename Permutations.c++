#include <iostream>
#include <vector>
using namespace std;

void getParms(vector<int> &nums, int idx, vector<vector<int>> &ans)
{
  if (idx == nums.size())
  {
    ans.push_back({nums});
    return;
  }

  for (int i = idx; i < nums.size(); i++)
  {
    swap(nums[idx], nums[i]);
    getParms(nums, idx + 1, ans);
    swap(nums[idx], nums[i]);
  }
}

vector<vector<int>> permute(vector<int> &nums)
{
  vector<vector<int>> ans;
  getParms(nums, 0, ans);
  return ans;
}

int main()
{
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> result = permute(nums);

  cout << "All permutations:\n";
  for (const auto &perm : result)
  {
    for (int num : perm)
    {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}