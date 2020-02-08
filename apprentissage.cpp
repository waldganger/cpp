#include <iostream>
#include <vector>

using namespace std;


void collecte(int note, vector<int> &vecteurNotes);
int totalNotes(int &nombreNote, vector<int> &vecteurNotes);



int main(void)
{
	int note(-1);
	int nombreNote (0);
	int sommeNotes(0);
	std::vector<int> vecteurNotes(0);
	while(true){
		cout << "Note N° " << nombreNote + 1 << endl << "Veuillez entrer une note." << endl;
		cin >> note;
		if (!note)
			break;
		nombreNote++;
		collecte(note,  vecteurNotes);
		sommeNotes = totalNotes(nombreNote, vecteurNotes);
		cout << "La moyenne des notes est de " <<  sommeNotes << " / " << nombreNote << " = " << sommeNotes / nombreNote << endl;
	}
	return 0;
}

void collecte(int note, vector<int> &vecteurNotes)
// collecte les notes
{
	vecteurNotes.push_back(note);
}

int totalNotes(int &nombreNote, vector<int> &vecteurNotes)
// renvoie la somme de toutes les notes dans le vecteur.
{
	int sommeNotes = 0;
	for(int i = 0; i < nombreNote; i++)
		sommeNotes +=vecteurNotes[i];
	return sommeNotes;
}

// int main(void)
// {
// 	vector<int> vecteur(5);
// 	vector<string> listeNoms(12, "John Doe");
	
// 	for (int (i) = 5; i > 0; i--)
// 		listeNoms.push_back("Antony Merle");

// 	listeNoms.pop_back();
// 	int const taille(listeNoms.size());
// 	for (int i = 0; i < taille; i++)
// 		cout << listeNoms[i] << endl;
// 	return 0;
// }
// int moyenne(int tableau[], int taille);

// int main(void)
// {
// 	int const (taille) = 1000;
// 	int tableau[taille];

// 	for (int (i) = 0; i < taille; i++){
// 		tableau[i] = i * i;
// 		// cout << "[ " << tableau[i] << " ]";
// 	}
// 	cout << "Moyenne d'un tableau de 1000 : " << moyenne(tableau, taille) << endl;
// 	return 0;
// }

// int moyenne(int tableau[], int taille)
// {
// 	int (resultat) = 0;
// 	for (int (i) = 0; i < taille; i++)
// 		resultat += tableau[i];
// 	return resultat /= taille;
// }

// int secondes(int heures = 0, int minutes = 0, int secondes = 0);

// int main(void)
// {
// 	cout << "Nombre de secondes = " << secondes(2) << endl; 
// 	return 0;
// }

// int secondes(int heures, int minutes, int secondes)
// {
// 	int (total) = 0;
// 	total += secondes;
// 	total += minutes * 60;
// 	total += heures * 60 * 60;
// 	return total;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// void echange(int &a, int &b)
// {
// 	int (temp) = 0;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// int main(void)
// {
// 	int (a) = 5;
// 	int (b) = 6;
// 	cout << "Avant transformation, a = " << a << " et b = " << b << endl;
// 	echange(a, b);
// 	cout << "Après transformation, a = " << a << " et b = " << b << endl;	
// 	return 0;
// }

// void afficheRectangle(int hauteur, int largeur)
// {
// 	for(int (ligne) = 0; ligne < hauteur; ligne++){
// 		for (int (colonne) = 0; colonne < largeur ; colonne++){
// 			cout << "*";
// 		}
// 		cout << endl;
// 	}

// }

// int main(void)
// {
// 	int (hauteur), (largeur) = 0;
// 	cout << "Bienvenue dans le programme de dessin de rectangle.\n";
// 	cout << "Entrez la hauteur :\n";
// 	cin >> hauteur;
// 	cout << "Entrez la largeur :\n";
// 	cin >> largeur;
// 	afficheRectangle(hauteur, largeur);
// 	return 0;
// }

// int main(void)
// {
// 	while (true){
// 	int (a), (b) = 0;
// 	cout << "Entrez opérande a" << endl;
// 	cin >> a;
// 	cout << "Entrez opérande b" << endl;
// 	cin >> b;
// 	cout << a << " + " << b  << " = " << a + b << endl;
// }
// 	return 0;
// }

// int main()
// {
// 	int age(0);
// 	string nom("");
// 	cout << "Quel est votre nom ?";
// 	getline(cin, nom);
// 	cout << "Quel age avez-vous ?" << endl;
// 	cin >> age;
// 	cin.ignore();

// 	cout << "Bonjour " << nom << endl << "Vous avez " << age << " ans." << endl;
// 	return 0;
// }
