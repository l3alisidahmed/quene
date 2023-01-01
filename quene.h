#include <stdio.h>
#include <stdlib.h>

typedef struct quene
{
    int data;
    struct quene *next;
    struct quene *last;
} quene;

// fonction pushF qui va remplir la file

quene *pushF(quene *head)
{
    quene *nv = (quene *)malloc(sizeof(quene));
    printf("give the value: ");
    scanf("%d", &nv->data);
    nv->next = head;
    head->last = nv;
    head = nv;
    nv->last = NULL;

    return head;
}

// fonction popF: delete the node in your file

quene *popF(quene *end)
{
    quene *ptr = end;
    end = ptr->last;
    end->next = NULL;
    free(ptr);

    return end;
}

// estVideF: c' est une fonction verifier est ce que la file recoit NULL

int estVideF(quene *end)
{
    if (end == NULL)
        return 1;
    else
        return 0;
}

// estPlieneF: c'est une fonction qui verfier est ce que la file il est pliene??

int estPlieneF(int cpt, int taille)
{
    if (cpt == taille)
        return 1;
    else
        return 0;
}
