// dsa questions lab assignment

// //C program to input 10 elements into an array and display the elements and their total count
// #include <stdio.h>

// int main() {
//     int arr[10];
//     int i;

//     // Input 10 elements
//     printf("Enter 10 elements:\n");

//     for (i = 0; i < 10; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     // Display elements
//     printf("\nElements of the array are:\n");

//     for (i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }

//     // Display number of elements
//     printf("\n\nNumber of elements present in array = %d\n", 10);

//     return 0;
// }

// //  c program to read n elemet and give sum and avrage
// #include <stdio.h>

// int main()
// {

//     int a[] = {12, 21, 32, 1, 2, 3, 4, 5, 2, 3};
//     int n = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         n = n + a[i];
//     }
//     printf("sum of all element  %d\n", n);
//     int avg = n / 10;
//     printf(" avrage of the elemets  %d", avg);
//     return 0;
// }

// // c program to find largest and smallest element
// #include <stdio.h>

// int main() {

//  int a[] = {12,21,32,1,2,3,4,5,2,3};
// int bigger = a[0];
// int chota = a[0];

//  for(int i =0;i<10;i++){
//     if(bigger<a[i]){
//         bigger = a[i];
//     }
//      if(chota>a[i]){
//         chota = a[i];
//     }

//  }
//  printf(" bada %d\n" , bigger) ;
//     printf(" chota %d" , chota) ;

//     return 0;
// }

// // c program for inser element on specfic postions
// #include <stdio.h>

// int main() {

//     int a[] = {12,21,32,1,2,3,4,5,2,3};
//     int indx ;
//     int val;
//     printf("give the index you want to change ");
//     scanf("%d" , &indx);
//     printf("give the value you want to change ");
//     scanf("%d" , &val);

//     a[indx] = val;
//     printf("chnaged value on index %d", a[indx]);

//     for(int i =0;i<10;i++){
//       printf("chnaged value on index %d\n", a[i]);
//     }
//     return 0;
// }

// // c program for print revers array
// #include <stdio.h>

// int main() {

//     int arrlength;

//     printf("Give how many values you want in array: ");
//     scanf("%d", &arrlength);

//     int arr[arrlength];

//     for(int i = 0; i < arrlength; i++) {
//         printf("Give the value %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Array in reverse: ");

//     for(int i = arrlength - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
