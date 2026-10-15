#include <stdio.h>


int main(){
    FILE *f = fopen("sonlar.txt", "r");
    int son, yigindi=0;

    while(fscanf(f, "%d", &son) == 1){

     yigindi+=son;
    }
    printf("%d", yigindi);
    fclose(f);
}