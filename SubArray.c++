#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int subArraySum(vector<int> &arr, int k)
{
  int n = arr.size();
  int count = 0;
  vector<int> prefixSum(n, 0);
  prefixSum[0] = arr[0];

  for (int i = 1; i < n; i++)
  {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }
  unordered_map<int, int> m;
  for (int j = 0; j < n; j++)
  {
    if (prefixSum[j] == k)
    {
      count++;
    }
    int val = prefixSum[j] - k;
    if (m.find(val) != m.end())
    {
      count += m[val];
    }

    m[prefixSum[j]]++;
  }
  return count;
};

int main()
{
  vector<int> arr = {9, 4, 20, 3, 10, 5};
  int k = 33;

  cout << "Total subarrays with sum " << k << ": " << subArraySum(arr, k) << endl;
  return 0;
}