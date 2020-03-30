#include "C:\Users\antony\bin\cpp\ppp\std_lib_facilities.h"

// exercice 17
int main()
{
	string tableau[10] = { "eggs", "bacon", "cheese", "riz", "aaron a aaronson", 
	"spinach", "zorglub", "milk", "eggs", "spaghetti" };
	
	string motTemporaire;
	string plusPetitMotJusquici = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	string plusGrandMotJusquici;


	int compteurTemporaireMode = 0;
	int maxOccurences = 0;
	string mode = "";
	for (int i = 0; i < 10; i++){
		motTemporaire = tableau[i];
		if (motTemporaire < plusPetitMotJusquici)
			plusPetitMotJusquici = motTemporaire;
		else if (motTemporaire > plusGrandMotJusquici)
			plusGrandMotJusquici = motTemporaire;

		for (int j = 0; j < 10; j++){
			if (tableau[j] == tableau[i]){
				compteurTemporaireMode++;
			}
		
		}
		if (compteurTemporaireMode > maxOccurences){
			maxOccurences = compteurTemporaireMode;
			mode = tableau[i];
		}


		compteurTemporaireMode = 0;

	}
	cout << "Le mode est : " << mode << endl;
	cout << "Le plus petit mot est : " << plusPetitMotJusquici << endl;
	cout << "Le plus grand mot est : " << plusGrandMotJusquici << endl;
	return 0;
}


// exercice 16

// int main()
// {
// 	int tableau[12] = { 12, 14, 16, 14, 8, 99, 99, 63, 27, 99, 99, 57 };
// 	int compteurTemporaire = 0;
// 	int max = 0;
// 	int mode;
// 	for (int i = 0; i < 12; i++){
// 		for (int j = 0; j < 12; j++){
// 			if (tableau[j] == tableau[i]){
// 				compteurTemporaire++;
// 			}
// 		}
// 		if (compteurTemporaire > max){
// 			max = compteurTemporaire;
// 			mode = tableau[i];
// 		}
// 		compteurTemporaire = 0;
// 	}
// 	cout << "Le mode est : " << mode << endl;
// 	return 0;
// }

// int main()
// {
// 	int n = 0;
// 	cout << "Entrez le nombre de premiers voulus.\n";
// 	cin >> n;
// 	int tableauPremiers[n];
// 	int decomptePremiers = 0;
// 	int nombreATester = 1;
// 	int i;
// 	while (decomptePremiers < n){

// 		i = 2;
// 		nombreATester++;
// 		while (i <= nombreATester){
// 			if (nombreATester % i == 0 && i != nombreATester){ // le nombre n'est pas entier
// 				break;
// 			}
// 			else{
// 				tableauPremiers[decomptePremiers] = nombreATester;
// 				decomptePremiers++;
// 				break;
// 			}
// 			i++;
// 		}
// 	}
// 	//affichage de l'array
// 	for(int i= 0; i < n; i++)
// 		cout << " "<<tableauPremiers[i] << " ";
// 	cout << endl;
// 	return 0;
// }

// // exercice 13 - 14

// int main()
// {
// 	cout << "Entrez le plafond de recherche de nombres premiers.\n";
// 	int plafond = 0;
// 	cin >> plafond;

// 	bool crible[plafond] ;
// 	for (int i = 0; i < plafond ; i++)
// 		crible[i] = true;
// 	cout << endl;
	

// 	for(int i = 2 ; i*i < plafond; i++)
// 		for (int j = i; j < plafond; j++)
// 			if (j % i == 0 && j != i)
// 				crible[j] = false;


// 	for (int i = 2; i < plafond ; i++)
// 		if (crible[i])
// 		cout << i << " ";
// 	//cout << endl;

// return 0;
// }

// int main()
// {
// 	vector<int> listePremiers = {
// 		2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
// 		43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
// 	};
// 	vector<int> recoltePremiers;

// 	cout << "Entrez le plafond de recherche de nombres premiers.\n";
// 	int plafond = 0;
// 	cin >> plafond;

// 	for (int i = 1; i < plafond; i++){
// 		for (int prime : listePremiers){
// 			if (i <= prime && i % prime == 0)
// 				recoltePremiers.push_back(i);
// 		}
// 	}
// 	for (int temp : recoltePremiers)
// 		cout << "[" << temp << "] "  ;
// 	return 0;
// }


// int main()
// {
// 	unsigned int scoreJoueur = 0;
// 	unsigned int scoreOrdinateur = 0;
// 	vector<string> v1 = 
// 	{"papier", "pierre", "ciseaux", "papier",
// 	 "pierre", "ciseaux", "pierre", "papier", 
// 	 "ciseaux", "pierre", "ciseaux", "pierre", 
// 	 "papier", "pierre", "ciseaux", "ciseaux"};

// 	 vector<string> v2 = 
// 	{"papier", "pierre", "ciseaux", "ciseaux",
// 	"ciseaux", "pierre", "ciseaux", "pierre",
// 	"papier", "pierre", "ciseaux", "papier",
// 	"pierre", "ciseaux", "pierre", "papier"};

// 	vector<string> v3 = 
// 	{"ciseaux", "papier", "ciseaux", "ciseaux",
// 	"ciseaux", "pierre", "pierre", "pierre",
// 	"papier", "pierre", "ciseaux", "papier",
// 	"pierre", "papier", "papier", "papier"};

// 	cout << "Entrez n'importe quel caractère ou chiffre\n";
// 	char repAleatoire = 0;
// 	cin >> repAleatoire;
// 	vector<string> *pVecteur = 0;

// 	// génération d'un pseudo hasard
// 	if (!(repAleatoire % 3))
// 		pVecteur = &v3;
// 	else if (!(repAleatoire % 2))
// 		pVecteur = &v2;
// 	else
// 		pVecteur = &v1;

// 	for (string temp : *pVecteur){
	
// 	int choix = 0;
// 	//while (true){
	
// 	cout 
// 	<< "1. Pierre\n"
// 	<< "2. Papier\n"
// 	<< "3. Ciseaux\n"
// 	<< "Entrez un chiffre : 1, 2 ou 3 ?\n";

// 	cin >> choix;

// 	switch(choix){
// 		case 1:{
// 			if (temp == "pierre")
// 				cout << "Joueur joue : pierre. " << "Ordinateur joue pierre : égalité.\n";
// 			else if (temp == "papier"){
// 				cout << "Joueur joue : pierre. " << "Ordinateur joue papier : vous perdez.\n";
// 				scoreOrdinateur++;
// 			}
// 			else{
// 				cout << "Joueur joue : pierre. " << "Ordinateur joue ciseaux : vous gagnez.\n";
// 				scoreJoueur++;
// 			}
// 			break;
// 		}

// 		case 2:{
// 			if (temp == "pierre"){
// 				cout << "Joueur joue : papier. " << "Ordinateur joue pierre : vous gagnez.\n";
// 				scoreJoueur++;
// 			}
// 			else if (temp == "papier")
// 				cout << "Joueur joue : papier. " << "Ordinateur joue papier : égalité.\n";
// 			else{
// 				cout << "Joueur joue : papier. " << "Ordinateur joue ciseaux : vous perdez.\n";
// 				scoreOrdinateur++;
// 			}
// 			break;
// 		}

// 		case 3:{
// 			if (temp == "pierre"){
// 				cout << "Joueur joue : ciseaux. " << "Ordinateur joue pierre : vous perdez.\n";
// 				scoreOrdinateur++;
// 			}
// 			else if (temp == "papier"){
// 				cout << "Joueur joue : ciseaux. " << "Ordinateur joue papier : vous gagnez.\n";
// 				scoreJoueur++;
// 			}
// 			else
// 				cout << "Joueur joue : ciseaux. " << "Ordinateur joue ciseaux : égalité.\n";
// 			break;
// 		}	
// 	}

// //}
// 	cout << "Joueur : " << scoreJoueur << "\t" << "Ordinateur : " << scoreOrdinateur << endl;
// 	cout <<"Appuyez sur une touche pour continuer\n";
// 	// getchar();
// 	// system("cls");
// }

	



// 	return 0;
// }


// exercices 4.8 - 4.9

// int main()
// {
// 	constexpr int casesDamier = 64;
// 	int noCase = 0;
// 	double currentSquareRice = 0;
// 	double totalRice = 0;

// 	// for (int noCase = 1; noCase <= casesDamier; noCase++){
// 	// 	currentSquareRice *=2;
// 	// 	totalRice += currentSquareRice;
// 	while (noCase < casesDamier){
// 		if (!noCase){
// 			noCase++;
// 			currentSquareRice++;
// 			totalRice++;
// 			cout 
// 		<< "Numéro de case : " << noCase 
// 		<< " comporte " << currentSquareRice << " grains de riz. \t Total Damier : " 
// 		<< totalRice <<"\n";
// 			continue;
// 		}
// 		currentSquareRice *=2;
// 		totalRice += currentSquareRice;
// 		noCase++;
// 		cout 
// 		<< "Numéro de case : " << noCase 
// 		<< " comporte " << currentSquareRice << " grains de riz. \t Total Damier : " 
// 		<< totalRice <<"\n";
// 	}

// 	return 0;
// }

// exercice 4.7

// int convertisseur(string chiffre, vector<string>& v){
// 	for (int i = 0; i < v.size() ; i++)
// 		if (v[i] == chiffre)
// 			return i;
// }

// int main()
// {
// 	cout << "Calculatrice rudimentaire V 0.2.\n"
// 	<< "Entrez deux nombres réels suivis d'un opérateur + - * /\n"
// 	<< "Entrez une lettre  --> Quitter le programme.\n";

// 	string strOperand1, strOperand2 = "";

// 	vector<string> v = {"zero", "un", "deux", "trois", "quatre", 
// 	"cinq", "six", "sept", "huit", "neuf"};

// 	char operateur = 0;
// 	while (cin >> strOperand1 >> strOperand2 >> operateur){
// 		int operand1 = convertisseur(strOperand1, v);
// 		int operand2 = convertisseur(strOperand2, v);
// 		switch (operateur){
// 			case '+': {
// 				cout << operand1 + operand2 << "\n";
// 				break;
// 			}
// 			case '-': {
// 				cout << operand1 - operand2 << "\n";
// 				break;
// 			}
// 			case '*': {
// 				cout << operand1 * operand2 << "\n";
// 				break;
// 			}
// 			case '/': {
// 				cout << operand1 / operand2 << "\n";
// 				break;
// 			}
// 			default: cout << "Mauvaise entrée.\n"
// 			<< "Entrez deux nombres réels suivis d'un opérateur + - * /\n";
// 		}
// 	}
// 	cout << "Au revoir.\n";
// 	return 0;
// }

// exercice 4.6

// int main()
// {
	// vector<string> v = {"zero", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};
	// cout << "Entrez un chiffre entre 0 et 9 pour le convertir en toutes lettres :\n";
	// int chiffre = 0;
	// while(cin >> chiffre){
	// 	if (chiffre > 9 || chiffre < 0){
	// 		cout << "Entrez un chiffre entre 0 et 9 pour le convertir en toutes lettres :\n";
	// 		continue;
	// 	}
	// 	cout << v[chiffre] << "\n";
	// }

// 	vector<string> v = {"zero", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};
// 	cout << "Entrez un chiffre en toutes lettres :\n";
// 	string chiffre = "";
// 	while(cin >> chiffre){
// 		for (int i = 0; i < v.size() ; i++)
// 			if (v[i] == chiffre)
// 				cout << i << "\n";
// 		}
// 	return 0;
// }


// exercice 4.5

// int main()
// {
// 	cout << "Calculatrice rudimentaire.\n"
// 	<< "Entrez deux nombres réels suivis d'un opérateur + - * /\n"
// 	<< "Entrez une lettre  --> Quitter le programme.\n";

// 	double operand1, operand2 = 0;
// 	char operateur = 0;
// 	while (cin >> operand1 >> operand2 >> operateur){
// 		switch (operateur){
// 			case '+': {
// 				cout << operand1 + operand2 << "\n";
// 				break;
// 			}
// 			case '-': {
// 				cout << operand1 - operand2 << "\n";
// 				break;
// 			}
// 			case '*': {
// 				cout << operand1 * operand2 << "\n";
// 				break;
// 			}
// 			case '/': {
// 				cout << operand1 / operand2 << "\n";
// 				break;
// 			}
// 			default: cout << "Mauvaise entrée.\n"
// 			<< "Entrez deux nombres réels suivis d'un opérateur + - * /\n";
// 		}
// 	}
// 	cout << "Au revoir.\n";
// 	return 0;
// }

// // exercice 4.4
// int main()
// {
// 	int mystere(0);
// 	int low = 1;
// 	int high = 100;
// 	int deduction = (high + low) / 2;
// 	char reponse = 0;
// 	cout << "Entrez le nombre à deviner (entre 1 et 100).\n";
// 	cin >> mystere;
// 	while (deduction != mystere){
// 		cout << "Est-ce que le nombre est supérieur à " << deduction << " ? o/n" << "\n";
// 		cin >> reponse ;
// 		if (reponse == 'o'){
// 			low = deduction;
// 			deduction = (high + low) / 2;
// 		}
// 		else if (reponse == 'n'){
// 			high = deduction;
// 			deduction = (high + low) / 2;
// 		}
// 		else
// 			continue;
// 	}
// 	cout << "Le nombre mystère est : " << deduction << " !" << "\n";
//	return 0;
// }


// // exercice 4.3
// int main()
// {
// 	vector<double> distances;
// 	for (double hop ; cin >> hop; )
// 		distances.push_back(hop);

// 	double somme = 0;
// 	double courteDistance = distances[0];
// 	double longueDistance = distances[0];

// 	for(double el : distances){
// 		if (el < courteDistance)
// 			courteDistance = el;
// 		if (el > longueDistance)
// 			longueDistance = el;
// 		somme += el;
// 		cout << el << "\t";
// 	}
	
// 	cout << "\n"
// 	<< "Total de la distance en km : " << somme << "\n"
// 	<< "Plus petite distance entre deux villes : " << courteDistance << "\n"
// 	<< "Plus grande distance entre deux villes : " << longueDistance << "\n"
// 	<< "Moyenne des distances : " << somme / distances.size() << "\n";
// 	return 0;
// }

// double mediane(vector<double>& tableau){
// 	if (tableau.size() % 2)
// 		return tableau[tableau.size() / 2];
// 	else
// 		return (tableau[tableau.size() / 2 - 1] + tableau[tableau.size() / 2]) / 2;
// }

// // compute mean and median temperatures
// int main()
// {
// vector<double> temps; // temperatures
// for (double temp; cin>>temp; ) // read into temp
// temps.push_back(temp); // put temp into vector
// // compute mean temperature:
// double sum = 0;
// for (int x : temps) sum += x;
// cout << "Average temperature: " << sum/temps.size() << '\n';
// // compute median temperature:
// sort(temps); // sort temperatures
// cout << "Median temperature: " << mediane(temps) << '\n';
// }


// void minOuMax(double nombreATester, double& min, double& max){
// 	if (nombreATester > max){
// 		max = nombreATester;
// 		cout << nombreATester << " mètres est le nombre le plus grand jusqu'à présent.\n";
// 	}
// 	else if (nombreATester < min){
// 		min = nombreATester;
// 		cout << nombreATester << " mètres est le nombre le plus petit jusqu'à présent.\n";
// 	}
// 	else
// 		;
// }

// void convert(double& nombreAConvertir, string& uniteMesure){
// 	// on convertit en mètres
// 	if (uniteMesure == "cm")
// 		nombreAConvertir *= 0.01;
// 	else if(uniteMesure == "in")
// 		nombreAConvertir  *= 0.0254;
// 	else if(uniteMesure == "ft")
// 		nombreAConvertir *= 0.3048;
// }

// int main()
// {	
// 	double i1, i2 = -1;
// 	string uniteMesure, uniteMesure2;

// 	double min = 22250738585072014;
// 	double max = -22250738585072014;
// 	vector<double> vecteur;
// 	while((cin >> i1 >> uniteMesure >> i2 >> uniteMesure2) /* && i1 != '|' && i2 != '|'*/){
// 		//uniteMesure = "";
// 		//cin >> i1 >> uniteMesure;
// 		if (uniteMesure != "cm" && uniteMesure != "in" && uniteMesure != "ft" && uniteMesure != "m")
// 			continue;
// 		if (uniteMesure2 != "cm" && uniteMesure2 != "in" && uniteMesure2 != "ft" && uniteMesure2 != "m")
// 			continue;
// 		// if (i1 == '|' && i2 != '|')
// 		// 	break;
// 		if (i2 == '|'){
// 			convert(i1, uniteMesure);
// 			minOuMax(i1, min, max);
// 			vecteur.push_back(i1);
// 			break;
// 		}

// 		convert(i1, uniteMesure);
// 		minOuMax(i1, min, max);
// 		vecteur.push_back(i1);
		
// 		// cin >> i2 >> uniteMesure;
// 		// if (i2 == '|'){
// 			// continue;
// 			//vecteur.pop_back();
// 			// vecteur.pop_back();
// 		// 	break;
// 		// }
// 		// if (uniteMesure != "cm" && uniteMesure != "in" && uniteMesure != "ft" &&  uniteMesure != "m")
// 		// 	continue;
// 		convert(i2, uniteMesure2);

// 		minOuMax(i2, min, max);
		
// 		vecteur.push_back(i2);
// 		if(i1 == i2)
// 			cout << "Les valeurs sont identiques.\n";
// 		sort(vecteur);
// 		//cout << vecteur[0] << " " << vecteur[vecteur.size() - 1] << "\n";
// 		if (i1 >= i2 - (0.01 * i2)  && i1 <= i2 + (0.01*i2) && i1 != i2) //10.89 -- 11.11
//  			cout << "Les valeurs sont presques identiques.\n";
// 		cout << i1 << " " << i2 << "\n";
// 	}
// 		//sort(vecteur);
// 		convert(i1, uniteMesure);
// 		minOuMax(i1, min, max);
// 		vecteur.push_back(i1);
		
// 		double somme(0);
// 		for (double x : vecteur){
// 			cout << x << "\t";
// 			somme += x;
// 		}

// 		if (vecteur.size()){
// 			cout 
// 			<< "Plus petite valeur : " << vecteur[0] << "\n" 
// 			<< "Plus grande valeur : " << vecteur[vecteur.size() - 1] << "\n";
// 		}
// 		else
// 			cout << "Aucune valeur à afficher\n";
// 		cout 
// 		<< "Taille du vecteur : " << vecteur.size() << "\n"
// 		<< "Somme des valeurs : " << somme << " mètres." << endl;
// 	return 0;
// }

// int main()
// {
// 	double i1, i2 = 0;
// 	vector<double> vecteur;
// 	while((cin >> i1 >> i2) && i1 != '|' && i2 != '|'){
// 		vecteur.push_back(i1);
// 		vecteur.push_back(i2);
// 		if(i1 == i2)
// 			cout << "Les valeurs sont identiques.\n";
// 		sort(vecteur);
// 		cout << vecteur[0] << " " << vecteur[vecteur.size() - 1] << "\n";
// 		if (i1 >= i2 - (0.01 * i2)  && i1 <= i2 + (0.01*i2) && i1 != i2) //10.89 -- 11.11
// 			cout << "Les valeurs sont presques identiques.\n";
// 		//cout << i1 << " " << i2 << "\n";
// 	}
// 	return 0;
// }

// ----------


// int main()
// {
// 	vector<string> dictionnaire;

// 	for(string temp; cin >> temp;)
// 		dictionnaire.push_back(temp);

// 	cout << "Nombre mots : " << dictionnaire.size() <<"\n";

// 	sort(dictionnaire);

// 	for (int i = 0; i < dictionnaire.size(); i++){
// 		if (i == 0 || dictionnaire[i] != dictionnaire[i-1]){
// 			cout << dictionnaire[i] << "\n";
// 		}
// 	}
// 	return 0;
// }

// ----------

// int main()
// {
	
// 	cout << "Basic calculator (operator operand1 operand2\n";
// 	string operation{""};
// 	double operand1{0}, operand2{0};
// 	while (cin >> operation >> operand1 >> operand2){
// 	if (operation == "+" || operation == "plus")
// 		cout << operand1 + operand2 << "\n";
// 	else if (operation == "-" || operation == "minus")
// 		cout << operand1 - operand2 << "\n";
// 	else if (operation == "*" || operation == "mul")
// 		cout << operand1 * operand2 << "\n";
// 	else if (operation == "/" || operation == "div")
// 		cout << operand1 / operand2 << "\n";
// 	else
// 		cout << "Je n'ai pas compris.\n";
// }
// }

// int main()
// {
// 	string chiffre{""};

// 	cout << "Entrez un chiffre pour le convertir en entier\n";
// 	while (cin >> chiffre){
// 	if (chiffre == "zero")
// 		cout << 0;
// 	else if (chiffre == "un")
// 		cout << 1;
// 	else
// 		cout << "Entrez un chiffre que je connais\n";
// }
// 	// switch(chiffre){
// 	// 	case "zero":
// 	// 	cout << 0;
// 	// 	break;
// 	// 	case "un":
// 	// 	cout << 1;
// 	// 	break;
// 	// 	default:
// 	// 	cout << "Entrez un chiffre que je connais\n";
// 	// }
// 	return 0;
// }

// int main()
// {
// 	double d = 0;
// 	while(cin >> d){
// 		int i = d;
// 		char c = i;
// 		int i2 = c;
// 		cout << "d == " << d
// 			<< "i == " << i
// 			<< "char 'c' == " << c
// 			<< "i2 == \n" << i2;

// 	}
// 	return 0;
// }

// int main()
// {
// 	string previous {" "};
// 	string current;
// 	while(cin >> current){
// 		if(current == previous){
// 			cout << "repeated word: " << current << "\n";
// 		}
// 		previous = current;
// 	}
// 	return 0;
// }


// ----------------
// int main()
// {
// 	cout << "Entrez votre prénom, votre nom et votre age\n";
// 	string prenom = {"???"};
// 	string nom = "???";
// 	int age{0};
// 	int test{36};
// 	age << test;
// 	cin >> prenom >> nom;
// 	cout << "Vous vous appelez " << prenom << " " << nom << " et vous avez " << age * 12 << " mois.\n";
// 	return 0;
// }

// int main()
// {
// 	cout << "Hello world !\n";
// 	keep_window_open();
// 	return 0;
// }