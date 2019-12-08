#ifndef _ELEMENT_H_
#define _ELEMENT_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct elemnt
 {
     int n;
     int type; //1 pour locomotive et 0 pour wagon
     int etat; //1 pour OK et 0 pour en panne
 } elemnt;

 typedef struct train
  {
      elemnt m;
      struct cellule *suiv;
  } *locomotive ;

  locomotive ajoutlocomotive (locomotive tete , elemnt i);
  locomotive ajoutwagon (locomotive tete , elemnt i);
  void recherche (locomotive tete , int i);
  void affiche (locomotive tete);
  locomotive supprime (locomotive tete);
  locomotive ajoutwagonposition (locomotive tete , int i , elemnt m);

#endif /* _ELEMENT_H_ */
