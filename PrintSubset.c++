#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getAllSubSet(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allSubset, int i)
{
  if (i == nums.size())
  {
    allSubset.push_back({ans});
    return;
  }

  ans.push_back(nums[i]);
  getAllSubSet(nums, ans, allSubset, i + 1);

  ans.pop_back();
  int idx = i + 1;
  while (idx < nums.size() && nums[i] == nums[i - 1])
  {
    i++;
  }
  getAllSubSet(nums, ans, allSubset, idx);
};

vector<vector<int>> subSetWithDrop(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  vector<vector<int>> allSubset;
  vector<int> ans;
  getAllSubSet(nums, ans, allSubset, 0);
  return allSubset;
}

void printResult(const vector<vector<int>> &allSubset)
{
  for (const auto &subset : allSubset)
  {
    cout << "[";
    for (int i = 0; i < subset.size(); ++i)
    {
      cout << subset[i];
      if (i != subset.size() - 1)
        cout << ", ";
    }
    cout << "]\n";
  }
}
int main()
{
  vector<int> nums = {1, 2, 2};
  vector<vector<int>> Result = subSetWithDrop(nums);
  printResult(Result);
  cout << "Total unique subsets: " << Result.size() << "\n";
  return 0;
}