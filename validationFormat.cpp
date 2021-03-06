#include "validationFormat.h"
#include <iostream>
#include <sstream>

using namespace std;

bool validerNas(const string& p_nas)
{
	int somme = 0;
	int j = 0;
    for (int i = 0; i<11; i++)
    {
    	int nbr = p_nas[i]-48; //conversion décimale ASCII
        if (nbr >= 0)
        {
        	if(j % 2 == 1) //impair i={1, 3, 5, 7}
        	{
				if((2*nbr) >= 10) //si la multiplication par le facteur de 2 est plus grande que 10
				{
					somme = somme + (2*nbr) - 9; //on additionne les caractères du nombre obtenu
				}
				else
				{
					somme = somme + (2*nbr); //sinon, on additionne les nombres multipliés par 2
				}
			}
			else //impair ou zéro
       		{
       			somme = somme + nbr;
       		}
        j++;
        }
    }

	if(somme % 10 == 0)
	{
		cout << "NAS valide" << endl;
		return true;
	}
	else
	{
		cout << "NAS invalide" << endl;
		return false;
	}
}

bool validerFormatFichier(std::istream& p_is)
{
	//valider sur la ligne du NAS que le premier caractère est un chiffre (.isalpha())

	int compteurLignes = 0;
	string ligneActuelle;

	int flagParti = 0;
	int flagPrenom = 0;
	int flagNom = 0;
	int flagNas = 0;
	int flagDate = 0;

	//si ligneActuelle commence par une lettre
	while (getline(p_is, ligneActuelle))
	{
		if (isalpha.(ligneActuelle[0]))
		{
			int flag = 0;
		}
		else if (ligneActuelle.empty())
		{
			return false;
		}
		//si ligneActuelle commence par un chiffre
		else
		{
			int flag = 1;
		}

		switch (flag)
		{
		case 0:
			if (compteurLignes == 0) && (ligneActuelle.find("Circonscription") != string::npos)
			{
				break;
			}
			else (compteurLignes == 0) && (ligneActuelle.find("Circonscription") == string::npos)
			{
				return false;
			}
			if flagParti = 0
			{
			//vérifier si ligneActuelle = parti
				switch (ligneActuelle)
				{
					case "BLOC_QUEBECOIS":
						flagParti = 1;
						break;
					case "CONSERVATEUR":
						flagParti = 1;
						break;
					case "INDEPENDANT":
						flagParti = 1;
						break;
					case "LIBERAL":
						flagParti = 1;
						break;
					case "NOUVEAU_PARTI_DEMOCRATIQUE":
						flagParti = 1;
						break;
					default:
						return false;
				 }
				 break;
			//vérifier si ligneActuelle = prénom, nom ou adresse
			}
			else if (flagPrenom = 0)
			{
				flagPrenom = 1;
				break;
			}
			else if (flagNom = 0)
			{
				flagNom = 1;
				break;
			}
			else
			{
				int flagParti = 0;
				int flagPrenom = 0;
				int flagNom = 0;
				break;
			}
		case 1:
			if (flagNas = 0)
			{
				flagNas = 1;
				break;
			}
			else if (flagDate = 0)
			{
				flagDate = 1;
				break;
			}
	}
}
