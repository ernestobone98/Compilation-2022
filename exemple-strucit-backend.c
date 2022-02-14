/*****************************

 * Petit exemple de STRUCIT-backend  *

 * Il n'y a plus de struct.  *

 *****************************/

 

extern void *malloc(int size);

extern void free(void *ptr);

/* Allocation du prochain element de la liste */

void *allouer(void *p) {

  if (p==0) goto Lelse1; /* Correspond au if then else */ 

  { /* Partie then: p!=0 */

    void *_t1;

    void *_t2;

    _t1=p+4; /* Correspond au champ suivant dans la structure */

    _t2=malloc(8);

    *_t1=_t2;

    return _t1;

  }

 Lelse1: /* Partie else: p==0 */

  {

    p=malloc(8);

    return p;

  }

}

/* Desallocation de l'element courant de la liste */

void *desallouer(void *p) {

  void *q;

  void *_t1;

  _t1=p+suivant;

  q=*_t1;

  free(p);

  return q;

}

/* Iterateur sur la liste. Applique la fonction f sur chaque element */

void *parcours(void *l, void *f) {

  int i;

  void *p;

  void *tete;

  p=f(l);

  tete=p;

  i=0;

  /* La boucle for reecrite avec des gotos */

  goto Ltest1;

 Lfor1:

  p=f(p);

  i=i+1;

 Ltest1:

  if (i<100) goto Lfor1;

  return tete;

}

/* Alloue une liste chainee puis la desalloue */

int main() {

  void *tete;

  void *_t1;

  void *_t2;

  _t1=&allouer;

  _t2=&desallouer;

  tete=parcours(0,_t1);

  parcours(tete,_t2);

  return 1;

}