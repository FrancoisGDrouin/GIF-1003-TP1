/*
 * fonctionsUtilitaires.h
 *
 *  Created on: 2017-08-18
 *      Author: etudiant
 */

#ifndef FONCTIONSUTILITAIRES_H_
#define FONCTIONSUTILITAIRES_H_

const int LARGEUR = 21 ;
const int HAUTEUR = 17;

void initialise(int* p_tableau, int nb_colonnes, int p_valeur);
void rotation(int p_imageSource[HAUTEUR][LARGEUR], int p_imageDestination[LARGEUR][HAUTEUR]);
void conversionBinaire(int p_image[HAUTEUR][LARGEUR]);
void affiche_image(int* p_image, int p_nbLignes, int p_nbColonnes);
void copie_tableau(int* p_tableauSource, int* p_tableauDestination,
		int p_nbLlignes, int p_nbColonnes);

#endif /* FONCTIONSUTILITAIRES_H_ */
