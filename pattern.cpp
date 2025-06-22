// #include <iostream>
// using namespace std;

// int main()
// {
//   // cout << (10 & 6) << endl;
//   // char ch = 'A';
//   // int num = 1;
//   // for (int i = 0; i < n; i++)
//   // {

//   //   for (int j = 0; j < i; j++)
//   //   {
//   //     cout << " ";
//   //   }
//   //   for (int k = 0; k < n - i; k++)
//   //   {
//   //     cout << (i + 1);
//   //   }

//   //   cout << endl;
//   // }

//   int num[] = {12, 34, 7, -9, 9, 38};
//   int size = 6;
//   int smallest = INT32_MAX;
//   int largest = INT32_MIN;
//   int smallestIndex = -1;
//   int largestIndex = -1;

//   for (int i = 0; i < size; i++)
//   {
//     smallest = min(num[i], smallest);
//     smallestIndex = i;
//     largest = max(num[i], largest);
//     largestIndex = i;
//   }
//   cout << "smallest =" << smallest << "smallestIndex =" << smallestIndex << endl;
//   cout << "largest =" << largest << "largestIndex =" << largestIndex << endl;

//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//   int num[] = {12, 34, 7, -9, 9, 38};
//   int size = 6;
//   int smallest = INT32_MAX;
//   int largest = INT32_MIN;
//   int smallestIndex = -1;
//   int largestIndex = -1;

//   for (int i = 0; i < size; i++)
//   {
//     if (num[i] < smallest)
//     {
//       smallest = num[i];
//       smallestIndex = i;
//     }
//     if (num[i] > largest)
//     {
//       largest = num[i];
//       largestIndex = i;
//     }
//   }

//   cout << "Smallest = " << smallest << ", Index = " << smallestIndex << endl;
//   cout << "Largest = " << largest << ", Index = " << largestIndex << endl;

//   return 0;
// }
// #include <iostream>
// using namespace std;

// void ReverseArray(int arr[], int size)
// {
//   int start = 0, end = size - 1;
//   while (start < end)
//   {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
// }

// int main()
// {
//   int arr[] = {4, 2, 7, 8, 5, 9, 3};
//   int size = 7;
//   ReverseArray(arr, size);
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int sumArray(int arr[], int size)
// {
//   int sum = 0;
//   for (int i = 0; i < size; i++)
//   {
//     sum += arr[i];
//   }
//   return sum;
// }
// int multiArray(int arr[], int size)
// {
//   int mul = 1;
//   for (int i = 0; i < size; i++)
//   {
//     mul *= arr[i];
//   }
//   return mul;
// }
// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5, 6};
//   int size = 6;
//   sumArray(arr, size);
//   multiArray(arr, size);
//   cout << "sum of all the array=" << sumArray(arr, size) << endl;
//   cout << "multiple of all the array=" << multiArray(arr, size) << endl;
//   return 0;
// }

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapMaxMin(int arr[], int n)
{
  int max = INT32_MIN, min = INT32_MAX;
  int maxIndex = -1, minIndex = -1;

  // Find indices of max and min elements
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      maxIndex = i;
    }
    if (arr[i] < min)
    {
      min = arr[i];
      minIndex = i;
    }
  }

  // Swap max and min elements
  swap(arr[maxIndex], arr[minIndex]);
}

int main()
{
  int arr[] = {3, 5, 1, 8, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  swapMaxMin(arr, n);

  cout << "\nArray after swapping max and min: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
