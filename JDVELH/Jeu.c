#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

/*struct Guerrier
{
	int pdvGuerrier == 200;
	int forceGuerrier == 20;
	int defenseGuerrier == 30;
	int curpdvGuerrier == pdvGuerrier;
	
};
typedef struct Guerrier guerrier;

struct Mage
{
	int pdvMage == 150;
	int forceMage == 10;
	int manaMage == 100;
	int curpdvMage == pdvMage;
};
typedef struct Mage mage;*/

int choixDest;

int main ()
{
	
	printf ("Vous entrez dans une nouvelle ere \n Choisissez votre destination ! \n Entrez 1 pour Astria \n Entrez 2 pour Arcadian\n");
	scanf ("%d",&choixDest);
	
	 if(choixDest == 1){
		 printf("Vous etes un guerrier d'Astria fort, robuste et courageux !");
	 }
	 else if(choixDest == 2){
		 printf("Vous etes un mage d'Arcadia doue de magie, sensibilite et intelligence !");
	 }
	 
	 
}	 