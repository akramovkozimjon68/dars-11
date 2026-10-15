#include <stdio.h>


int engKattaRaqamniTop(int son) {
    int max = 0;

    if (son < 0) {
        son = -son;
    }

    while (son > 0) {
        int raqam = son % 10;
        
        if (raqam > max) {
            max = raqam; 
        }
        
        son = son / 10; 
    }
    
    return max;
}

int main() {
    int kiritilganSon;
    
    printf("Son kiriting: ");
    scanf("%d", &kiritilganSon);
    
    int natija = engKattaRaqamniTop(kiritilganSon);
    
    printf("Kiritilgan sonlar ichda eng kottasi: %d\n", natija);
    
    return 0;
}