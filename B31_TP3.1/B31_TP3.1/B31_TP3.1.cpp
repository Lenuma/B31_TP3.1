/*	Projet: B31_TP3
	Auteur: José Manuel Viger
	Code Permanent: 0371618
*/

#include <iostream>
#include <conio.h>

struct LaStr_s
{
	int a, b;
	float c;
};

LaStr_s TabStr[3];

LaStr_s MatStr[2][2];

void remplissage(LaStr_s Tab[3], LaStr_s Mat[2][2]) 
{
	for (int i = 0; i < 3; i++)
	{
		Tab[i].a = i + 1;
		Tab[i].b = i + 2;
		Tab[i].c = i + 1.5;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			Mat[i][j].a = i + j;
			Mat[i][j].b = i + j + 1;
			Mat[i][j].c = i + j + 0.5;
		}
		
	}
}

int main()
{
	LaStr_s *PointeurStruc;
	int *PointeurA, *PointeurB;
	float *PointeurC;

	remplissage(TabStr, MatStr);

	std::cout << "Adresses des elements du tableau:" << "\n";
	for (int i = 0; i < 3; i++)
	{
		PointeurA = &TabStr[i].a;
		PointeurB = &TabStr[i].b;
		PointeurC = &TabStr[i].c;

		std::cout << "Element A de l'index " << i << ": "<< PointeurA << "\t" << "Element B de l'index " << i << ": " << PointeurB << "\t" << "Element C de l'index " << i << ": " << PointeurC;
		std::cout << "\n";
	}

	std::cout << "\n";
	std::cout << "Contenus des elements du tableau:" << "\n";
	for (int i = 0; i < 3; i++)
	{
		PointeurA = &TabStr[i].a;
		PointeurB = &TabStr[i].b;
		PointeurC = &TabStr[i].c;

		std::cout << "Element A de l'index " << i << ": " << *PointeurA << "\t" << "Element B de l'index " << i << ": " << *PointeurB << "\t" << "Element C de l'index " << i << ": " << *PointeurC;
		std::cout << "\n";
	}

	std::cout << "\n";
	std::cout << "Adresses des elements de la matrice:" << "\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			PointeurA = &MatStr[i][j].a;
			PointeurB = &MatStr[i][j].b;
			PointeurC = &MatStr[i][j].c;

			std::cout << "Element A de l'index [" << i << "] [" << j << "] : " << PointeurA << "\t" << "\t" << "Element B de l'index [" << i << "] [" << j << "] : "
				<< PointeurB << "\t" << "\t" << "Element C de l'index [" << i << "] [" << j << "] : " << PointeurC;
			std::cout << "\n";
		}
	}

	std::cout << "\n";
	std::cout << "Contenus des elements de la matrice:" << "\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			PointeurA = &MatStr[i][j].a;
			PointeurB = &MatStr[i][j].b;
			PointeurC = &MatStr[i][j].c;

			std::cout << "Element A de l'index [" << i <<"] [" << j << "] : " << *PointeurA << "\t" << "Element B de l'index [" << i << "] [" << j << "] : "
					<< *PointeurB << "\t" << "Element C de l'index [" << i << "] [" << j << "] : " << *PointeurC;
			std::cout << "\n";
		}
	}

	_getch();
}