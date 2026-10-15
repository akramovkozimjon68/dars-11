#include <stdio.h>

int main(){
    FILE *f = fopen("matn.txt", "r");
    int 

    while(fscanf(f, "%d", &son) == 1){

     yigindi+=son;
    }
    printf("%s", yigindi);
    fclose(f);
}