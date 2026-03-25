//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age) {
    if (age >= 18 || age < 0) {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp) {
    int resultat = 1;
    if (exp > 99){
        return -1;
    }
    
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

    if(a == b || b == c || (a == c)){
        int min = plusPetit(a,b,c);
        return min;
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

    for (int i = 1; i <= nb; i++){
        somme += i;
    }

    somme = somme + nb;

    return somme;
}

float salaireNet(int salaire,float charge_salariale,float prime)
{
	float net = salaire * (1 - charge_salariale);
	float resulstat = net * (1 + prime);
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

// Retourne vrai si nb est impair ou divisible par 8, faux sinon
bool estImpair(int nb){
if((nb %2 != 0) || (nb%8==0)){
    return true;
}
else return false;
}


// Retourne la moyenne des trois nombres passés en paramètre
float moyenne(int nb1, int nb2, int nb3){
	float resulstat = (nb1 + nb2 + nb3)/3.0f;
	if (resulstat < 0)
		return -1.0f;
}

// Reçoit un prix et une réduction en pourcentage
// Applique d'abord la réduction, puis la TVA à 5.5%
// Retourne le prix final
float reduction(int prix, int reduc){
prix = prix - prix*(reduc/100.0f);
prix = prix + prix*5.5/100.0f;
return prix;
}

// Retourne le nombre médian parmi les trois entiers a, b, c
int nombreMedian(int a, int b, int c){
	if (a == b || a == c || b == c)
        return 999;    
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    if ((c >= a && c <= b) || (c >= b && c <= a))
        return c;
    else{
        return a;
    }
}
