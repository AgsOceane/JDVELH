};
typedef struct Mage mage;*/


struct Chapitre
{
	char description[100];
	int gainOr;
	int gainPdv;
	char tiD[3];
};
typedef struct Chapitre chapitre;

chapitre astria = {"Bienvenue a Astria, cité des hommes, chemin obligatoire pour les apprentis \n",50,200,{0}};
chapitre arcadia = {"Bienvenue a Arcadia, royaume des elfes, les elfes sont dotés d'une grande intelligence et de magie \n",40,100,{1}};
chapitre solrigen = {"Bienvenue a Solrigen, terre des orque, les orques sont dotés d'une grande force et d'une grande robustesse \n", 150, 300, {2}};


int choixDest;

int main ()
{
	printf ("Bienvenue a Astria, cité des hommes, chemin obligatoire pour les apprentis \n,vous gagnez 50 pièce d'or et 20 points de vie\n");
	//je voulais rentrer une adresse pour récupérer les informations de chapitre astria mais en vain ("%d", *astria);
	scanf ("%d", &choixDest); 

	printf ("Vous entrez dans une nouvelle ere \n Choisissez votre destination ! \n Entrez 2 pour Arcadia \n Entrez 3 pour Solrigen \n");
	scanf ("%d",&choixDest);
	
	/*chapitre tiD[0] = astria;
	chapitre tiD[1] = arcadia;
	chapitre tiD[2] = solrigen;*/


	switch(choixDest){
		case 2 : return  *arcadia;
		case 3 : return  *solrigen;
	break;


}	  
}	

}
