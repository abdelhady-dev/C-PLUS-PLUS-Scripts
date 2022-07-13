#include<iostream>
#include<iomanip>
using namespace std;

void fillTable(int **table, signed int &, signed int &);
void showTable(int **table, signed int &, signed int &);
// function to fill table
void fillTable(int **table, signed int &numRounds, signed int &numPlayers) {
	for (int row = 0; row < numRounds; row++) {
		cout << "Round " << row + 1 << " enter score of " << numPlayers << " player(s) : ";
		for (int col = 0; col < (numPlayers + 1); col++) {
			if (col == 0) { table[row][0] = row + 1; col++; }
			cin >> table[row][col];
			cout << "\n";
		}
	}
}
// function to show table
void showTable(int **table, signed int &numRounds, signed int &numPlayers) {
	int max = 0;
	int min = table[0][1];
	cout << "first column for number of Rounds and privous columns for " << numPlayers << " players : \n";
	for (int row = 0; row < numRounds; row++) {
		for (int col = 0; col < (numPlayers + 1); col++) {
			// show table
			cout << setw(6) << table[row][col];
			if (col == 0) { continue; }
			// get maximum value
			if (table[row][col] > max) { max = table[row][col]; }
			// if (table[row][col] < min) { min = table[row][col]; }
			if (table[row][col] < min) { min = table[row][col]; }
		}
		cout << endl;
	}
	cout << "maximum value is = " << max << "\n";
	cout << "minimum value is = " << min << "\n";
}
// main
int main() {

	// input number of rounds and players
	signed int numPlayers;
	signed int numRounds;
	cout << "Please enter number of rounds : "; cin >> numRounds;
	cout << "Please enter number of players : "; cin >> numPlayers;
	// create table
	int **table = new int*[numRounds];
	for (int row = 0; row < numRounds; row++)
		table[row] = new int[numPlayers + 1];
	// fill and show table
	fillTable(table, numRounds, numPlayers);
	showTable(table, numRounds, numPlayers);
	// delete table
	delete table;
	table = NULL;

	system("pause");
	return 0;
}