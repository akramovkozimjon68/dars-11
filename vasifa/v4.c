#include <stdio.h>

int main()
{
    int seats[3][4];
    int qator, orindiq;


    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            scanf("%d", &seats[i][k]);
        }
    }

    scanf("%d %d", &qator, &orindiq);

    if(qator < 1 || qator > 3 || orindiq < 1 || orindiq > 4)
    {
        printf("To`g`ri orindiq ! ");
    } else if (seats[qator - 1][orindiq - 1] == 0)
    {
        printf("%d- qator, %d-orindiq: Bosh", qator, orindiq);
    }else {
        printf("%d-qator, %d-orindiq: Band", qator, orindiq);
    }
}