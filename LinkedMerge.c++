#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int v) : val(v), next(NULL) {};
};

ListNode *mergeSortList(ListNode *head1, ListNode *head2)
{
  if (head1 == NULL || head2 == NULL)
  {
    return head1 == NULL ? head2 : head1;
  }

  if (head1->val <= head2->val)
  {
    head1->next = mergeSortList(head1->next, head2);
    return head1;
  }

  else
  {
    head2->next = mergeSortList(head1, head2->next);
    return head2;
  }
};

void printList(ListNode *head)
{
  while (head != NULL)
  {

    cout << head->val;
    if (head->next != NULL)
    {
      cout << "->";
    }

    head = head->next;
  }
  cout << endl;
}

int main()
{
  ListNode *a = new ListNode(1);
  a->next = new ListNode(3);
  a->next->next = new ListNode(5);

  ListNode *b = new ListNode(2);
  b->next = new ListNode(4);
  b->next->next = new ListNode(6);

  cout << "List A: ";
  printList(a);

  cout << "List B: ";
  printList(b);

  ListNode *Merged = mergeSortList(a, b);
  cout << "Merged List: ";
  printList(Merged);

  return 0;
}