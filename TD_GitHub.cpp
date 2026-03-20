//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp) {
    int resultat = 1;
    for (int i = 0; i < exp; i++) {
        resultat = resultat * nbre;
    }
    return resultat;
}



//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb)
{
	int resultat;
	resulstat = nb /2 ==0;
	return resulstat;
}

int sommeNombre(int nb)
{
	int somme = 0;
	for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    return somme;
}

float salaireNet(int salaire)
{
	float net = salaire * (1 - 0.23);
	float resulstat = net * (1 + 0.12);
    return resulstat;
}

int plusPetit(int a, int b, int c) 
{
    int mini = a;
    if (b < mini) mini = b;
    if (c < mini) mini = c;
    return mini;
}









//Fonctions réalisées par l'étudiant 3 :
