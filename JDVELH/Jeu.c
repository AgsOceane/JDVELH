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


struct Chapitre
{
	char description[100];
	int gainOr;
	int gainPdv;
	char tiD[4];
};
typedef struct Chapitre chapitre;

chapitre astria = {"Bienvenue a Astria",50,200,{0}};
chapitre arcadia = {"Bienvenue a Arcadia",40,100,{1}};
chapitre feur = {"Bienvenue a Feur", 70, 150,{2}};
chapitre solrigen = {"Bienvenue a Solrigen", 150, 300, {3}};


int choixDest;

int main ()
{
	printf ("Vous entrez dans une nouvelle ere \n Choisissez votre destination ! \n Entrez 0 pour Astria \n Entrez 1 pour Arcadia\n");
	scanf ("%d", &choixDest);
	
	/*chapitre tiD[0] = astria;
	chapitre tiD[1] = arcadia;
	chapitre tiD[2] = feur;
	chapitre tiD[3] = solrigen;*/
	
	switch(choixDest){
		case 0 : return chapitre astria;
		case 1 : return chapitre arcadia;
	break;
	 
}	

}
	