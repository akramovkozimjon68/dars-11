#include <stdio.h>
 void almashtrsh(int *a, int *b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 int main()
 {
     int a, b;
   
     printf("Sonlarni kriting ", b);

    scanf("%d %d ", &a, &b);
    almashtrsh(&a, &b);
    
    printf("A  = %d\n", a);
    printf("B  = %d\n", b);
 }