/*----------------------------*/

/* un petit programme exemple

   pour montrer le langage STRUCIT-frontend. */

/*----------------------------*/

 

/* Description d'une liste chainee */

struct liste {

  int valeur;

  struct liste *suivant;

};

/* Fonctions externes utilisées */

extern void *malloc(int size);

extern void free(void *ptr);

 

/* Allocation du prochain element de la liste */

struct liste *allouer(struct liste *p) {

  if (p!=0) {

        p->suivant=malloc(sizeof(p));

        return p->suivant;

  } else {

        p=malloc(sizeof(p));

        return p;

  }

}

/* Desallocation de l'element courant de la liste */

struct liste *desallouer(struct liste *p) {

  struct liste *q;

  q=p->suivant;

  free(p);

  return q;

}

/* Iterateur sur la liste. Applique la fonction f sur chaque element */

struct liste *parcours(struct liste *l, struct liste *(*f)(struct liste *p)) {

  int i;

  struct liste *p;

  struct liste *tete;

  tete=p=f(l); 

  for (i=0; i<100; i=i+1) {

    p=f(p);

  }

  return tete;

}

/* Alloue une liste chainee puis la desalloue */

int main() {

  struct liste *tete;

  tete=parcours(0,&allouer);

  parcours(tete,&desallouer);

  return 1;

}