#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

Element* cree_liste_vide() {
    return NULL;
}

void afficher(Element* liste) {
    Element* p = liste;
    while (p != NULL) {
        printf("%d -> ", p->donne);
        p = p->suivant;
    }
    printf("NULL\n");
}

Element* ajout_debut(Element* liste, int donne) {
    Element* p = (Element*)malloc(sizeof(Element));
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    p->donne = donne;
    p->suivant = liste;
    return p;
}

int taille(Element* liste) {
    int taille = 0;
    Element* p = liste;
    while (p != NULL) {
        taille++;
        p = p->suivant;
    }
    return taille;
}

Element* supprime_debut(Element* liste) {
    if (liste == NULL) {
        return NULL;
    }

    Element* p = liste;
    liste = liste->suivant;
    free(p);
    return liste;
}
int jieme(Element* liste , int j){
	 Element* p = liste;
	 int i=0;
    while( i < j && p != NULL) {
        p = p->suivant;
        i++;
    }
    return p->donne;
}
Element* ajout_position(Element* liste, int donne, int j) {
    if (j < 0) {
        printf("Invalid position.\n");
        return liste;
    }

    Element* newElement = (Element*)malloc(sizeof(Element));
    if (newElement == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newElement->donne = donne;

    if (j == 0) {
        newElement->suivant = liste;
        return newElement;
    }

    Element* p = liste;
    int i=0;
    while(i < j - 1 && p != NULL) {
        p = p->suivant;
        i++;
    }

    if (p == NULL) {
        printf("Invalid position.\n");
        free(newElement);
        return liste;
    }

    newElement->suivant = p->suivant;
    p->suivant = newElement;

    return liste;
}
