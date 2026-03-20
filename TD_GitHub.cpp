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

float TVA(int prix) {
    float prixFinal;

    if (prix >= 1000) {
        prixFinal = prix * 1.196f;
    } else {
        prixFinal = prix * 1.055f;
    }

    return prixFinal;
}

int plusGrand(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}





//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb) {
    if ((nb % 2 == 0) || (nb % 7 == 0)) {
        return true;
    } else {
        return false;
    }
}

int sommeNombre(int nb) {
    int somme = 0;

    for (int i = 1; i <= nb; i++) {
        somme += i;
    }

    somme = somme + nb;

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
