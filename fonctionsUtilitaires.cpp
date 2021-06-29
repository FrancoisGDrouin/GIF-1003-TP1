/*
 * fonctionsUtilitairesSolution.cpp
 *
 *  Created on: 2017-08-18
 *      Author: etudiant
 */

#include <iostream>
#include "fonctionsUtilitaires.h"

using namespace std;

/**
 * \brief initialise  le tableau passé en paramètre à la valeur transmise
 * \param[in] nb_colonnes le nombre de colonnes
 * \param[in] p_valeur la valeur d'initialisation
 * \param[out] p_tableau le tableau à initialiser
 */
void initialise(int* p_tableau, int nb_colonnes, int p_valeur)
{
	for (int i = 0; i < nb_colonnes; i++)
	{
		*(p_tableau + i) = p_valeur; //p_tableau[i]=p_valeur;
	}
}

/**
 * \brief convertit l'image en niveau de gris passée en binaire
 * \param[in] p_image l'image à convertir
 * \param[out] p_image l'image convertie
 */
void conversionBinaire(int p_image[HAUTEUR][LARGEUR])
{
	for (int i = 0; i < HAUTEUR; i++)
	{
		for (int j = 0; j < LARGEUR; j++)
		{
			if (p_image[i][j] > 128)
			{
				p_image[i][j] = 1;
			}
			else
			{
				p_image[i][j] = 0;
			}
		}
	}
}

/**
 * \brief affiche l'image binaire sous forme de * et d'espace
 * \param[in] p_image l'image à afficher
 */
void affiche_image(int* p_image, int p_nbLignes, int p_nbColonnes)
{


	for (int i = 0; i < p_nbLignes; i++)
	{
		for (int j = 0; j < p_nbColonnes; j++)
		{
			if (*(p_image + (i * p_nbColonnes) + j) == 1)
			{
				cout << ' ';
			}
			else
			{
				if (*(p_image + (i * p_nbColonnes) + j) == 0)
				{
					cout << '*';
				}
				else
				{
					cout << *(p_image + (i * p_nbColonnes) + j);
				}
			}
		}
		cout << endl;
	}
}

/**
 * \brief fait une rotation de 90 degrés à droite de l'image passée en paramètre
 * \param[out] p_imageDestination l'image source tournée
 */
void rotation(int p_imageSource[HAUTEUR][LARGEUR],
		int p_imageDestination[LARGEUR][HAUTEUR])
{
	for (int j = 0; j < LARGEUR; j++) //itérer sur LARGEUR pour aller chercher le nombre entier de lignes (21 au lieu de 17)
	{
		for (int i = 0; i < HAUTEUR; i++)
		{
			p_imageDestination[j][HAUTEUR - 1 - i] = p_imageSource[i][j];
		}
	}
}

void copie_tableau(int* p_tableauSource, int* p_tableauDestination,
		int p_nbLlignes, int p_nbColonnes)
{
	for (int i = 0; i < p_nbLlignes; i++)
	{
		for (int j = 0; j < p_nbColonnes; j++)
		{
			*((p_tableauDestination + (i * p_nbColonnes)) + j) =
					*((p_tableauSource + (i * p_nbColonnes)) + j);
		}
	}
}

