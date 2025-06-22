// #include <stdio.h>
// int main()
// {
//   int i = 0;
//   do
//   {
//     printf("%d\n", i);
//     i++;
//   } while (i <= 10);
//   {
//     if (i % 2 == 0)
//     {
//       printf("%d\n", i);
//     }
//   }
//   return 0;
// }
// #include <stdio.h>
// int main()
// {
//   for (int i = 0; i % 2 == 0; i++)
//   {
//     printf("%d\n", i);
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int age;
//   printf("enter urr age:\n");
//   scanf("%d\n", age);
//   for (age; age < 50; age++)
//   {
//     if (age > 18)
//     {
//       printf("You are eligiable");
//     }
//     else
//     {
//       printf("You are not eligiable");
//     }
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int i;
//   for (i = 5; i > 0; i--)
//   {
//     printf("%d\n", i);
//   }
// }

#include <stdio.h>
int sum(int a, int b);
int main()
{
  sum(60, 50);
  return 0;
}
int sum(int a, int b)
{

  
  printf("The sum is: %d\n", (a+b));
  
}