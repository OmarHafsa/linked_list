#ifndef _LISTE_H_
#define _LISTE_H_

typedef struct Element {
    int donne;
    struct Element* suivant;
} Element;

Element* cree_liste_vide();
void afficher(Element* liste);
Element* ajout_debut(Element* liste, int donne);
int taille(Element* liste);
Element* supprime_debut(Element* liste);
int jieme(Element* liste , int j);
Element* ajout_position(Element* liste, int donne, int j);
#endif

