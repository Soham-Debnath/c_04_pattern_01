// print star right angle triangle
#include<stdio.h>
int main (){
    int n;
    printf("enter your number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main (){
//     int n;
//     scanf("%d", &n);  // Correct usage of scanf, passing address of n
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
