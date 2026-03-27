# STS1-GitHub — TD Fonctions C++

## 📌 Présentation

Ce dépôt contient le travail collaboratif réalisé dans le cadre d'un TD de programmation en C++.
L'objectif est d'implémenter un ensemble de fonctions réparties entre trois étudiants, puis de modifier certaines fonctions des camarades selon les consignes.

---

## 👥 Membres du groupe

|    Roles   |    Nom   |
|------------|----------|
| Étudiant 1 | Baptiste |
| Étudiant 2 | Robin    |
| Étudiant 3 | Ibrahim  |

---

## 📁 Fichiers

| Fichier | Description |
|--------|-------------|
| `TD_GitHub.h` | Déclarations de toutes les fonctions |
| `TD_GitHub.cpp` | Implémentation des fonctions par chaque étudiant |

---

## ⚙️ Fonctions implémentées

### Étudiant 1
| Fonction | Description |
|----------|-------------|
| `estMajeur(int age)` | Retourne `true` si la personne est majeure (≥ 18 ans) |
| `exposant(int nbre, int exp)` | Calcule `nbre^exp` sans utiliser `pow()`. Retourne `-1` si `exp > 99` |
| `TVA(int prix)` | Applique une TVA de 19,6% si `prix ≥ 1000€`, sinon 5,5% |
| `plusGrand(int a, int b, int c)` | Retourne le plus grand des trois nombres. Retourne le plus petit si deux valeurs sont égales |

### Étudiant 2
| Fonction | Description |
|----------|-------------|
| `estPair(int nb)` | Retourne `true` si `nb` est pair |
| `sommeNombre(int nb)` | Calcule la somme de `nb + (nb-1) + ... + 1`, puis ajoute `nb` au résultat |
| `salaireNet(int salaire, float charge_salariale, float prime)` | Calcule le salaire net après déduction des charges et ajout d'une prime |
| `plusPetit(int a, int b, int c)` | Retourne le plus petit des trois nombres |

### Étudiant 3
| Fonction | Description |
|----------|-------------|
| `estImpair(int nb)` | Retourne `true` si `nb` est impair ou divisible par 8 |
| `moyenne(int nb1, int nb2, int nb3)` | Retourne la moyenne des trois nombres. Retourne `-1` si le résultat est négatif |
| `reduction(int prix, int reduc)` | Applique une réduction (en %) puis une TVA à 5,5% |
| `nombreMedian(int a, int b, int c)` | Retourne le nombre médian. Retourne `999` si deux valeurs sont égales |

---

## 🔧 Modifications inter-étudiants

### Étudiant 1 a modifié :
- `estPair` *(étudiant 2)* — retourne également `true` si le nombre est divisible par 7
- `reduction` *(étudiant 3)* — la TVA peut être passée en paramètre
- `sommeNombre` *(étudiant 2)* — ajoute `nb` à la fin du calcul

### Étudiant 2 a modifié :
- `estMajeur` *(étudiant 1)* — retourne également `true` si l'âge est négatif
- `nombreMedian` *(étudiant 3)* — retourne `999` si au moins deux nombres sont égaux
- `moyenne` *(étudiant 3)* — retourne `-1` si le résultat est négatif

### Étudiant 3 a modifié :
- `salaireNet` *(étudiant 2)* — la charge salariale et la prime sont passées en paramètre
- `plusGrand` *(étudiant 1)* — retourne le plus petit si deux des trois valeurs sont égales
- `exposant` *(étudiant 1)* — retourne `-1` si l'exposant est supérieur à 99

---
