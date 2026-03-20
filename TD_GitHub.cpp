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
bool estPair(int nb)
{
	int resultat;
	if nb
}









//Fonctions réalisées par l'étudiant 3 :
