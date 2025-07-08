#include <iostream>
using namespace std;

class CircularQueue
{
  int *arr;
  int currSize, cap;
  int f, r;

public:
  CircularQueue(int size)
  {
    cap = size;
    arr = new int[cap];
    currSize = 0;
    f = 0;
    r = -1;
  }
  void push(int data)
  {
    if (currSize == cap)
    {
      cout << "CircularQueue is Full \n";
      return;
    }
    r = (r + 1) % cap;
    arr[r] = data;
    currSize++;
  }

  void pop()
  {
    if (empty())
    {
      cout << "CircularQueue is Empty \n";
      return;
    }
    f = (f + 1) % cap;
    currSize--;
  }

  int front()
  {
    return arr[f];
  }

  bool empty()
  {
    return currSize == 0;
  }

  void display()
  {
    if (empty())
    {
      cout << "Queue is Empty\n";
      return;
    }

    cout << "Queue: ";
    for (int i = 0; i < currSize; i++)
    {
      cout << arr[(f + i) % cap] << " ";
    }
    cout << "\n";
  }
};

int main()
{
  CircularQueue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.display();

  cout << "Front: " << q.front() << endl;

  q.pop();
  q.display();

  q.push(40);
  q.push(50);
  q.push(60);
  q.push(70);
  q.display();

  return 0;
}