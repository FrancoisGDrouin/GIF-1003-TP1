/**
 * \file programmePrincipal.cpp
 * \brief
 *
 * \author etudiant
 * \version 0.1
 * \date 2017-08-18
 */
#include <iostream>
#include "fonctionsUtilitaires.h"
using namespace std;



int main()
{

	int image[HAUTEUR][LARGEUR] =
	{
	{ 72, 74, 84, 82, 82, 90, 90, 82, 82, 90, 90, 82, 81, 92, 89, 83, 80 },
	{ 200, 200, 217, 72, 72, 209, 187, 190, 194, 197, 199, 202, 197, 149, 143,
			190, 197, 194, 194, 194, 195 },
	{ 190, 187, 207, 72, 71, 207, 187, 190, 193, 188, 171, 179, 149, 40, 37,
			163, 203, 192, 194, 194, 194 },
	{ 190, 187, 207, 71, 71, 200, 184, 193, 191, 104, 57, 76, 69, 74, 131, 187,
			194, 190, 191, 191, 190 },
	{ 188, 184, 200, 71, 70, 196, 183, 192, 151, 51, 106, 35, 34, 99, 190, 197,
			187, 189, 189, 189, 188 },
	{ 186, 183, 196, 70, 69, 190, 183, 176, 80, 127, 131, 40, 40, 94, 178, 190,
			186, 186, 187, 187, 186 },
	{ 184, 179, 190, 69, 69, 185, 179, 177, 105, 94, 53, 58, 63, 97, 170, 188,
			183, 186, 183, 183, 183 },
	{ 181, 176, 185, 69, 67, 181, 174, 184, 170, 77, 44, 63, 86, 112, 167, 193,
			179, 173, 190, 184, 179 },
	{ 179, 174, 181, 67, 67, 175, 169, 182, 170, 69, 58, 75, 90, 55, 164, 155,
			78, 83, 106, 180, 182 },
	{ 173, 170, 175, 67, 66, 169, 170, 176, 89, 88, 147, 58, 150, 142, 105, 62,
			30, 39, 28, 114, 180 },
	{ 175, 167, 170, 66, 66, 165, 171, 149, 44, 154, 170, 51, 169, 177, 54, 40,
			58, 54, 55, 42, 137 },
	{ 175, 165, 165, 66, 66, 160, 164, 76, 88, 193, 151, 74, 144, 112, 44, 60,
			55, 55, 57, 53, 60 },
	{ 163, 167, 158, 66, 66, 158, 156, 84, 154, 183, 149, 84, 95, 35, 39, 39,
			37, 37, 37, 44, 35 },
	{ 159, 159, 156, 65, 65, 153, 155, 155, 164, 160, 164, 160, 160, 158, 163,
			160, 161, 160, 161, 160, 160 },
	{ 150, 155, 153, 65, 65, 131, 153, 154, 152, 152, 154, 156, 156, 158, 158,
			158, 159, 159, 159, 159, 158 },
	{ 156, 153, 131, 65, 69, 71, 141, 168, 170, 172, 175, 175, 178, 181, 182,
			181, 179, 176, 174, 170, 169 },
	{ 70, 71, 71, 69, 72, 57, 40, 37, 35, 35, 37, 37, 37, 37, 37, 37, 37, 37,
			37, 37, 35 } };

	int imageBinaire[HAUTEUR][LARGEUR];
	copie_tableau(*image, *imageBinaire, HAUTEUR, LARGEUR);
	cout << "conversion" << endl;
	conversionBinaire(imageBinaire);
	affiche_image(*imageBinaire, HAUTEUR, LARGEUR);

	cout << "rotation" << endl;
	int i[LARGEUR][HAUTEUR];
	rotation(imageBinaire, i);
	affiche_image(*i, LARGEUR, HAUTEUR);
	cout << "fin du programme" << endl;
	return 0;
}
