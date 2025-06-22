#include<stdio.h>

// int sum(int n);
// int main() {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     printf("the sum is :%d",sum(n));
//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//    int sumNm1= sum(n-1);
//    int sumN = sumNm1 + n;
//    return sumN;

// void printAddress(int n);
// int main(){
//     int n=4;

//     printf("%p\n",(&n));
//     printAddress(n);

//     return 0;
// }
// void printAddress(int n){
//     printf("%p\n",(&n));
// void cal(int a ,int b ,int *sum ,int *prod ,int *avg);
// int main(){
//     int a =5,b=6;
//     int sum ,prod ,avg;
//     cal(a,b,&sum,&prod,&avg);
//     printf("sum = %d ,prod =%d ,avg=%d \n",sum,prod,avg);
//     return 0;
// }


// void cal(int a,int b,int *sum ,int *prod ,int *avg){
//     * sum= a+b;
//     *prod=a*b;
//     *avg =(a+b)/2;
    
// }

// int max(int a ,int b);
// int main(){
    
//     printf("the maximum is :%d\n ",max(5,6));
//     return 0;
// }

// int max(int a ,int b){
//      return (a>b) ? a: b;

// }

// int main(){
//     int  a,b,*ptr1=&a,*ptr2=&b;
//     printf("enter the value of a:");
//     scanf("%d",ptr1);
//     printf("enter the value of b:");
//     scanf("%d",ptr2);

//     if(*ptr1 > *ptr2){
//         printf("\n\n %d is the maximum number \n\n",*ptr1);
//     }
//     else{
//          printf("\n\n %d is the maximum number \n\n",*ptr2);
//     }
//     return 0;
// }



// int main() {
//     int arr[5] = {1, 2, 3, 4, 5}; // initialize the array
//     int temp, i, j;

//     printf("Original array: ");
//     for (i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     for (i = 0, j = 4; i < j; i++, j--) { // loop to swap elements
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     printf("\nReversed array: ");
//     for (i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



// int main() {
//     // Declaration of variables
//     char alph[27];  // Array to store alphabets
//     int x;
//     char *ptr;  // Pointer to char

//     // Displaying the purpose of the program
//     printf("\n\n Pointer : Print all the alphabets:\n");
//     printf("----------------------------------------\n");

//     ptr = alph; // Assigning the base address of array 'alph' to pointer 'ptr'

//     // Storing alphabets in the array using pointer arithmetic
//     for (x = 0; x < 26; x++) {
//         *ptr = x + 'A'; // Assigning ASCII values of alphabets to the array through the pointer
//         ptr++; // Moving the pointer to the next memory location
//     }

//     ptr = alph; // Resetting the pointer to the base address of array 'alph'

//     // Printing the stored alphabets using the pointer
//     printf(" The Alphabets are : \n");
//     for (x = 0; x < 26; x++) {
//         printf(" %c ", *ptr); // Printing each alphabet
//         ptr++; // Moving the pointer to the next memory location
//     }
//     printf("\n\n");
//     return 0;
// }


struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};


void printAdd(struct address add);

int main(){
    struct address adds[5];
   printf("enter info for person 1; ");
   scanf("%d",&adds[0].houseNo);
   scanf("%d",&adds[0].block);
   scanf("%s",adds[0].city);
   scanf("%s",adds[0].state);

   printf("enter info for person 2; ");
   scanf("%d",&adds[0].houseNo);
   scanf("%d",&adds[0].block);
   scanf("%s",adds[0].city);
   scanf("%s",adds[0].state);

   printf("enter info for person 3; ");
   scanf("%d",&adds[0].houseNo);
   scanf("%d",&adds[0].block);
   scanf("%s",adds[0].city);
   scanf("%s",adds[0].state);

   printf("enter info for person 4; ");
   scanf("%d",&adds[0].houseNo);
   scanf("%d",&adds[0].block);
   scanf("%s",adds[0].city);
   scanf("%s",adds[0].state);

   printf("enter info for person 5; ");
   scanf("%d",&adds[0].houseNo);
   scanf("%d",&adds[0].block);
   scanf("%s",adds[0].city);
   scanf("%s",adds[0].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add)
{
    printf("address is: %d ,%d, %s, %s\n" ,add.houseNo ,add.block, add.city,add.state);
};




