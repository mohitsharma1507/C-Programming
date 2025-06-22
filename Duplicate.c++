#include <iostream>
#include <vector>
using namespace std;

int FindDuplicate(vector<int> &arr)
{
  int slow = arr[0];
  int fast = arr[0];
  do
  {
    slow = arr[slow];
    fast = arr[arr[fast]];
  } while (slow != fast);

  slow = arr[0];
  while (slow != fast)
  {
    slow = arr[slow];
    fast = arr[fast];
  }
  return slow;
};

int main()
{
  vector<int> nums = {3, 1, 3, 4, 2};
  int duplicate = FindDuplicate(nums);
  cout << "Duplicate number is: " << duplicate << endl;
  return 0;
}