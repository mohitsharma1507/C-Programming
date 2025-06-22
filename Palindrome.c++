// #include <iostream>
// using namespace std;

// bool isAlphaNums(char ch)
// {
//   if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
//   {
//     return true;
//   }
//   return false;
// }

// bool isPalindrome(string s)
// {
//   int st = 0, end = s.length() - 1;
//   while (st < end)
//   {
//     if (!isAlphaNums(s[st]))
//     {
//       st++;
//       continue;
//     }
//     if (!isAlphaNums(s[end]))
//     {
//       end--;
//       continue;
//     }

//     if (tolower(s[st]) != tolower(s[end]))
//     {
//       return false;
//     }

//     st++;
//     end--;
//   }
//   return true;
// }

// int main()
// {
//   string s = "poop";
//   if (isPalindrome(s))
//     cout << "\"" << s << "\" is a palindrome" << endl;
//   else
//     cout << "\"" << s << "\" is not a palindrome" << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;

// string removeOccurrences(string s, string part)
// {
//   while (s.length() > 0 && s.find(part) < s.length())
//   {
//     s.erase(s.find(part), part.length());
//   }
//   return s;
// }

// int main()
// {
//   string s = "daabcbaabcbc";
//   string part = "abc";
//   cout << "After removal: " << removeOccurrences(s, part) << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// class solution
// {
// public:
//   bool isFreqSame(int freq1[], int freq2[])
//   {
//     for (int i = 0; i < 26; i++)
//     {
//       if (freq1[i] != freq2[i])
//       {
//         return false;
//       }
//     }
//     return true;
//   };
//   bool checkInclusion(string s1, string s2)
//   {
//     int freq[26] = {0};
//     for (int i = 0; i < s1.length(); i++)
//     {
//       freq[s1[i] - 'a']++;
//     }
//     int windSize = s1.length();
//     for (int i = 0; i < s2.length(); i++)
//     {
//       int windFreq[26] = {0};
//       int windidx = 0, idx = i;

//       while (windidx < windSize && idx < s2.length())
//       {
//         windFreq[s2[idx] - 'a']++;
//         windidx++;
//         idx++;
//       }
//       if (isFreqSame(freq, windFreq))
//       {
//         return true;
//       }
//     }
//     return false;
//   }
// };
// int main()
// {
//   solution sol;

//   string s1 = "ab";
//   string s2 = "eidbaooo";

//   if (sol.checkInclusion(s1, s2))
//   {
//     cout << "True" << endl;
//   }

//   else
//   {
//     cout << "False" << endl;
//   }

//   return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     bool isSwap = false;
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//         isSwap = true;
//       }
//     }
//     if (!isSwap)
//     {
//       return;
//     }
//   }
// }

// void selectionSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     int smallestIndex = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] < arr[smallestIndex])
//       {
//         smallestIndex = j;
//       }
//     }
//     swap(arr[i], arr[smallestIndex]);
//   }
// }

// void insertionsort(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     int curr = arr[i];
//     int prev = i - 1;
//     while (prev >= 0 && arr[prev] > curr)
//     {
//       arr[prev + 1] = arr[prev];
//       prev--;
//     }
//     arr[prev + 1] = curr;
//   }
// }
// void printArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// int main()
// {
//   int arr[] = {12, 5, 6, 4, 588, 8};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "Before Sorting :\n";
//   printArray(arr, n);

//   // bubbleSort(arr, n);
//   // selectionSort(arr, n);
//   insertionsort(arr, n);

//   cout << "After Sorting :\n";
//   printArray(arr, n);
// }

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  bool isFreqSame(unordered_map<char, int> &freq1, unordered_map<char, int> &freq2)
  {
    if (freq1.size() != freq2.size())
    {
      return false;
    }

    for (auto &pair : freq1)
    {
      if (freq2[pair.first] != pair.second)
      {
        return false;
      }
      return true;
    }
  }
  bool checkInclusion(string s1, string s2)
  {
    int len1 = s1.length(), len2 = s2.length();
    if (len1 > len2)
    {
      return false;
    }

    unordered_map<char, int> freq;
    for (char ch : s1)
      freq[ch]++;

    unordered_map<char, int> windowFeq;
    for (int i = 0; i < len1; i++)
    {
      windowFeq[s2[i]]++;
    }

    if (isFreqSame(freq, windowFeq))
    {
      return true;
    }

    for (int i = len1; i < len2; i++)
    {
      char newChar = s2[i];
      char oldChar = s2[i - len1];
      windowFeq[newChar]++;
      windowFeq[oldChar]--;
      if (windowFeq[oldChar] == 0)
      {
        windowFeq.erase(oldChar);
      }

      if (isFreqSame(freq, windowFeq))
      {
        return true;
      }
    }
  };
};

int main()
{
  Solution sol;

  string s1 = "ab";
  string s2 = "eidba000";

   if (sol.checkInclusion(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}