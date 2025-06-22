#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = tail = NULL;
  }

  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
      return;
    }
    newNode->next = head;
    head = newNode;
  }

  // void push_back(int val)
  // {
  //   Node *newNode = new Node(val);
  //   if (head == NULL)
  //   {
  //     head = tail = newNode;
  //     return;
  //   }
  //   tail->next = newNode;
  //   tail = newNode;
  // }

  void insert(int val, int pos)
  {
    if (pos < 0)
    {
      return;
    }
    if (pos == 0)
    {
      push_front(val);
      return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
      if (temp == NULL)
      {
        return;
      }
      temp = temp->next;
    }

    if (temp == NULL)
    {
      return;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
  }
  void pop_front()
  {
    if (head == NULL)
    {
      cout << "Empty Dost\n";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  vector<int> search(int key)
  {
    vector<int> result;
    Node *temp = head;
    int idx = 0;

    while (temp != NULL)
    {
      if (temp->data == key)
      {
        result.push_back(idx);
      }
      temp = temp->next;
      idx++;
    }
    return result;
  }

  // void pop_back()
  // {
  //   if (head == NULL)
  //   {
  //     cout << "Empty Dost\n";
  //     return;
  //   }

  //   if (head->next == NULL)
  //   {
  //     delete head;
  //     head = tail = NULL;
  //     return;
  //   }
  //   Node *temp = head;
  //   while (temp->next != tail)
  //   {
  //     temp = temp->next;
  //   }
  //   delete tail;
  //   tail = temp;
  //   tail->next = NULL;
  // }

  void printLL()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main()
{
  List l1;
  l1.push_front(1);
  // l1.pop_front();
  l1.push_front(2);
  l1.push_front(3);
  l1.push_front(4);
  // l1.pop_front();

  l1.insert(3, 2);
  l1.insert(5, 2);

  l1.printLL();
  vector<int> indices = l1.search(3);
  if (indices.empty())
  {
    cout << "Key not found\n";
  }
  else
  {
    cout << "Found at indices: ";
    for (int i : indices)
      cout << i << " ";
    cout << endl;
  }
  // l1.push_back(1);
  // l1.push_back(2);
  // l1.pop_back();
  // l1.push_back(3);
  // l1.push_back(4);

  // l1.printLL();

  return 0;
}
