#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isParlin(string s)
{
  string s2 = s;
  reverse(s2.begin(), s2.end());
  return s == s2;
};

void getAllParitions(string s, vector<string> &partitions, vector<vector<string>> &ans)
{
  if (s.size() == 0)
  {
    ans.push_back(partitions);
    return;
  }

  for (int i = 0; i < s.size(); i++)
  {
    string part = s.substr(0, i + 1);

    if (isParlin(part))
    {
      partitions.push_back(part);
      getAllParitions(s.substr(i + 1), partitions, ans);
      partitions.pop_back();
    }
  }
};

vector<vector<string>> Partition(string s)
{
  vector<vector<string>> ans;
  vector<string> partitions;
  getAllParitions(s, partitions, ans);
  return ans;
}

int main()
{
  string s = "aab";
  vector<vector<string>> result = Partition(s);

  for (const auto &vec : result)
  {
    cout << "[ ";
    for (const string &val : vec)
      cout << val << " ";
    cout << "]" << endl;
  }
  return 0;
};
