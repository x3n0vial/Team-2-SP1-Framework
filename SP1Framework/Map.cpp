
#include "map.h"
#include <iostream>

using namespace std;

void map::initialise()
{
	//initialise map
	for (j = 0; j < 25; j++)
	{
		for (i = 0; i < 80; i++)
		{
			(Grid[i][j] = ' ');
		}
	}
}

void map::printmap()
{
	//print first line
	j = 0;
	for (i = 0; i < 82; i++)
	{
		cout << "#";
	}
	cout << "\n";

	//print middle
	for (j = 0; j < 25; j++)
	{
		cout << "#";
		for (i = 0; i < 80; i++)
		{
			cout << Grid[i][j];
		}
		cout << "#\n";
	}

	//print end
	j = 25;
	for (i = 0; i < 82; i++)
	{
		cout << "#";
	}
	cout << "\n";

}

void map::townsquare()
{
	//doors
	j = 0; for (i = 8; i < 24; i++) { (Grid[i][j] = '@'); }
	j = 0; for (i = 57; i < 73; i++) { (Grid[i][j] = '@'); }
	//road lines
	i = 7; for (int j = 0; j < 21; j++) { (Grid[i][j] = '|'); }i = 72; for (int j = 0; j < 21; j++) { (Grid[i][j] = '|'); }j = 22; for (int i = 7; i < 77; i++) { (Grid[i][j] = '-'); }
	i = 24; for (int j = 0; j < 17; j++) { (Grid[i][j] = '|'); }i = 56; for (int j = 0; j < 17; j++) { (Grid[i][j] = '|'); }j = 17; for (int i = 24; i < 57; i++) { (Grid[i][j] = '-'); }
	//road markings
	i = 15; for (int j = 3; j < 7; j++) { (Grid[i][j] = 'I'); }i = 15; for (int j = 10; j < 14; j++) { (Grid[i][j] = 'I'); }i = 15; for (int j = 17; j < 20; j++) { (Grid[i][j] = 'I'); }
	i = 64; for (int j = 3; j < 7; j++) { (Grid[i][j] = 'I'); }i = 64; for (int j = 10; j < 14; j++) { (Grid[i][j] = 'I'); }i = 64; for (int j = 17; j < 20; j++) { (Grid[i][j] = 'I'); }
	j = 19; for (int i = 17; i < 22; i++) { (Grid[i][j] = '='); }j = 19; for (int i = 30; i < 36; i++) { (Grid[i][j] = '='); }j = 19; for (int i = 44; i < 50; i++) { (Grid[i][j] = '='); }j = 19; for (int i = 58; i < 63; i++) { (Grid[i][j] = '='); }
	//houses on the sides
	j = 1; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }Grid[3][2] = '|'; Grid[4][2] = ' '; Grid[5][2] = 'H'; Grid[6][2] = ' '; Grid[7][2] = '|'; j = 3; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }
	j = 6; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }Grid[3][7] = '|'; Grid[4][7] = ' '; Grid[5][7] = 'H'; Grid[6][7] = ' '; Grid[7][7] = '|'; j = 8; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }
	j = 11; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }Grid[3][12] = '|'; Grid[4][12] = ' '; Grid[5][12] = 'H'; Grid[6][12] = ' '; Grid[7][12] = '|'; j = 13; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }
	j = 16; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }Grid[3][17] = '|'; Grid[4][17] = ' '; Grid[5][17] = 'H'; Grid[6][17] = ' '; Grid[7][17] = '|'; j = 18; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }
	j = 21; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }Grid[3][22] = '|'; Grid[4][22] = ' '; Grid[5][22] = 'H'; Grid[6][22] = ' '; Grid[7][22] = '|'; j = 23; for (int i = 3; i < 8; i++) { (Grid[i][j] = '-'); }
	j = 1; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }Grid[72][2] = '|'; Grid[73][2] = ' '; Grid[74][2] = 'H'; Grid[75][2] = ' '; Grid[76][2] = '|'; j = 3; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }
	j = 6; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }Grid[72][7] = '|'; Grid[73][7] = ' '; Grid[74][7] = 'H'; Grid[75][7] = ' '; Grid[76][7] = '|'; j = 8; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }
	j = 11; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }Grid[72][12] = '|'; Grid[73][12] = ' '; Grid[74][12] = 'H'; Grid[75][12] = ' '; Grid[76][12] = '|'; j = 13; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }
	j = 16; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }Grid[72][17] = '|'; Grid[73][17] = ' '; Grid[74][17] = 'H'; Grid[75][17] = ' '; Grid[76][17] = '|'; j = 18; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }
	j = 21; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }Grid[72][22] = '|'; Grid[73][22] = ' '; Grid[74][22] = 'H'; Grid[75][22] = ' '; Grid[76][22] = '|'; j = 23; for (int i = 72; i < 77; i++) { (Grid[i][j] = '-'); }
	j = 21; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }Grid[54][22] = '|'; Grid[55][22] = ' '; Grid[56][22] = 'H'; Grid[57][22] = ' '; Grid[58][22] = '|'; j = 23; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }
	j = 21; for (int i = 38; i < 43; i++) { (Grid[i][j] = '-'); }Grid[38][22] = '|'; Grid[39][22] = ' '; Grid[40][22] = 'H'; Grid[41][22] = ' '; Grid[42][22] = '|'; j = 23; for (int i = 38; i < 43; i++) { (Grid[i][j] = '-'); }
	//houses in the middle
	j = 1; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }Grid[22][2] = '|'; Grid[23][2] = ' '; Grid[24][2] = 'H'; Grid[25][2] = ' '; Grid[26][2] = '|'; j = 3; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }
	j = 6; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }Grid[22][7] = '|'; Grid[23][7] = ' '; Grid[24][7] = 'H'; Grid[25][7] = ' '; Grid[26][7] = '|'; j = 8; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }
	j = 11; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }Grid[22][12] = '|'; Grid[23][12] = ' '; Grid[24][12] = 'H'; Grid[25][12] = ' '; Grid[26][12] = '|'; j = 13; for (int i = 22; i < 27; i++) { (Grid[i][j] = '-'); }
	j = 1; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }Grid[54][2] = '|'; Grid[55][2] = ' '; Grid[56][2] = 'H'; Grid[57][2] = ' '; Grid[58][2] = '|'; j = 3; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }
	j = 6; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }Grid[54][7] = '|'; Grid[55][7] = ' '; Grid[56][7] = 'H'; Grid[57][7] = ' '; Grid[58][7] = '|'; j = 8; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }
	j = 11; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }Grid[54][12] = '|'; Grid[55][12] = ' '; Grid[56][12] = 'H'; Grid[57][12] = ' '; Grid[58][12] = '|'; j = 13; for (int i = 54; i < 59; i++) { (Grid[i][j] = '-'); }
	//Orphanage
	j = 21; for (int i = 21; i < 26; i++) { (Grid[i][j] = '-'); }Grid[21][22] = '|'; Grid[22][22] = ' '; Grid[23][22] = 'â'; Grid[24][22] = ' '; Grid[25][22] = '|'; j = 23; for (int i = 21; i < 26; i++) { (Grid[i][j] = '-'); }
}
