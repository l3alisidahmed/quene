#include <stdio.h>
#include <stdlib.h>
#include "quene.h"

int main()
{
    int nbr_n, cpt;

    // nbr_n: size of your file      //cpt: calculer how node in your file

    printf("how manny node do you want: ");
    scanf("%d", &nbr_n);

    quene *head = (quene *)malloc(sizeof(quene)); // head: pointeur qui pointe sur le premiere node in your file
    printf("give the value: ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->last = NULL;

    quene *lastOne = head;

    cpt = 0;

    while (!(estPlieneF(cpt, nbr_n - 1)))
    {
        head = pushF(head);
        cpt++;
    }

    while (!(estVideF(lastOne)))
    {
        printf("%d", lastOne->data);
        lastOne = popF(lastOne);
    }
}