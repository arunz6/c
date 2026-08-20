#include <stdio.h>

int main()
{

    // swap a number with 3rd value
    int a, b;
    printf("give the value 1st value");
    scanf("%d", &a);
    printf("give the value 2st value");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("now a is %d", a);
    printf("b value is %d", b);
}

// // question no 2
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

// // question no 3
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

// // qurstio no 4
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

// dsa ke questions

// number system pado
// probablity
// sdlc and projectt flow

// // this code is for swap a to b with temp var

// #include <stdio.h>

// int main()
// {

//     // swap a number with 3rd value
//     int a, b;
//     printf("give the value 1st value");
//     scanf("%d", &a);
//     printf("give the value 2st value");
//     scanf("%d", &b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("now a is %d", a);
//     printf("b value is %d", b);
// }

// swap var without temp var
#include <stdio.h>

int main()
{

    // swap a number with 3rd value
    int a, b;
    printf("give the value 1st value");
    scanf("%d", &a);
    printf("give the value 2st value");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("now a is %d\n", a);
    printf("b value is %d", b);
}
