#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
  vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
  int n = prices.size();
  vector<int> ans(n, 0);
  stack<int> s;

  for (int i = 0; i < n; i++)
  {
    while (s.size() > 0 && prices[s.top()] < prices[i])
    {
      s.pop();
    }

    if (s.empty())
    {
      ans[i] = i + 1;
    }
    else
    {
      ans[i] = i - s.top();
    }
    s.push(i);
  }
  for (int val : ans)
  {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}