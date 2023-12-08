#include<stdio.h>
#include "liste.c"
#include "liste.h"

int main(void){
    Element* my_liste;
    int a, size, value_j,j;
    int data;

    printf("1:empty_list 2:ajout_debut 3:supprime_debut 4:taille 5:jieme 6:ajout_position : ");
    scanf("%d", &a);

    while (a > 0) {
        if (a == 1) {
            my_liste = cree_liste_vide();
        }
        else if (a == 2) {
            printf("enter the value of the first node: ");
            scanf("%d", &data);
            my_liste = ajout_debut(my_liste, data);
        }
        else if (a == 3) {
            my_liste = supprime_debut(my_liste);
        }
        else if (a == 4) {
            size = taille(my_liste);
            printf("the size of this list is: %d\n", size);
        }
        else if (a==5){
        	printf("enter the index you want");
        	scanf("%d",&j);
        	value_j=jieme(my_liste,j);
        	printf("the jieme element is: %d",value_j);
		}
		else if (a == 6) {
            printf("Enter the value to add: ");
            scanf("%d", &data);
            printf("Enter the position to add: ");
            scanf("%d", &j);
            my_liste = ajout_position(my_liste, data, j);
        }

        printf("My List: ");
        afficher(my_liste);
        printf("1:empty_list 2:ajout_debut 3:supprime_debut 4:taille 5:jieme 6:ajout_position : ");
        scanf("%d", &a);
    }

    return 0;
}

