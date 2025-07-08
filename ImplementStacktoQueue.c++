#include <iostream>
#include <queue>
using namespace std;

class Stack
{
  queue<int> q1, q2;

public:
  void push(int x)
  {
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    q1.push(x);

    while (!q2.empty())
    {
      q1.push(q2.front());
      q2.pop();
    }
  }
  int pop()
  {
    if (q1.empty())
    {
      cout << "stack is empty \n";
      return -1;
    }
    int ans = q1.front();
    q1.pop();
    return ans;
  }

  int top()
  {
    return q1.front();
  }
  bool empty()
  {
    return q1.empty();
  }
};

int main()
{
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);

  cout << "Top: " << s.top() << endl; // 30
  cout << "Pop: " << s.pop() << endl; // 30
  cout << "Top: " << s.top() << endl; // 20

  s.pop();
  s.pop();
  cout << "Pop from empty stack: " << s.pop() << endl; // Stack is Empty

  return 0;
};
