#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;
void allgetCombination(vector<int> &arr, int idx, int target, vector<vector<int>> &ans, vector<int> combin)
{
  if (idx >= arr.size() || target < 0)
  {
    return;
  }
  if (target == 0)
  {
    if (s.find(combin) == s.end())
    {
      ans.push_back(combin);
      s.insert(combin);
    }
    return;
  }
  combin.push_back(arr[idx]);
  allgetCombination(arr, idx + 1, target - arr[idx], ans, combin); // single
  allgetCombination(arr, idx, target - arr[idx], ans, combin);     // multiple
  combin.pop_back();
  allgetCombination(arr, idx + 1, target, ans, combin); // exclusion
};
vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
  vector<vector<int>> ans;
  vector<int> combin;
  allgetCombination(arr, 0, target, ans, combin);
  return ans;
}
int main()
{
  vector<int> arr = {2, 3, 5};
  int target = 8;
  vector<vector<int>> result = combinationSum(arr, target);
  for (const auto &vec : result)
  {
    cout << "[ ";
    for (int num : vec)
      cout << num << " ";
    cout << "]" << endl;
  }
  return 0;
}