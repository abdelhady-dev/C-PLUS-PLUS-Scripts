#include<iostream>
using namespace std;
void buildGride();
void display();
void check();
void play();
bool isWin();
struct grid {
	short int num;
	short int check = 0;
	char val;

};
grid game[3][3];
short int r = 1; // round  
short int win = 0;
short int full = 1;
char player1 = 'O';
char player2 = 'X';
int main() {
	cout << " @author Abdelhady_GoH \n Game TIC TAC TOE \n Version 1.00 \n"
		<< " rules: \n player 1 is : o \n player 2 is : x \n"
		<< " Enter the field number to put X or O. \n"
		<< "======================================\n";
	buildGride();
	display();
	while (full <= 9) {
		play();
		display();
		check();
		if (isWin())
			break;
	}
	if ( !( isWin() ) )
		cout << " no one win \n";
	system("pause");
	return 0;
}
// build gride
void buildGride() {
	short int calc = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			game[i][j].num = calc;
			game[i][j].check = 2 + calc;
			calc++;
		}
	}
}
// check and determine winner
void check() {
	if ( (game[0][0].check == game[0][1].check && game[0][1].check == game[0][2].check) || (game[1][0].check == game[1][1].check && game[1][1].check == game[1][2].check) || (game[2][0].check == game[2][1].check && game[2][1].check == game[2][2].check) || (game[0][0].check == game[1][0].check && game[1][0].check == game[2][0].check) || (game[0][1].check == game[1][1].check && game[1][1].check == game[2][1].check) || (game[0][2].check == game[1][2].check && game[1][2].check == game[2][2].check) || (game[0][0].check == game[1][1].check && game[1][1].check == game[2][2].check) || (game[0][2].check == game[1][1].check && game[1][1].check == game[2][0].check) ) {
		cout << ( r % 2 ? " player 2 is Win ( X ) \n" : " player 1 is Win ( O ) \n" ); win = 1;
	}
}
bool isWin() {
	if (win == 1)
		return true;
	else
		return false;
}
// display game
void display() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (game[i][j].val != NULL) { cout << game[i][j].val << "	"; } 
			else { cout << game[i][j].num << "	"; }
		}
		cout << endl;
		cout << endl;
	}
}
// play
void play() {
	short int enter;
	char player;
	short int uniq;
	// choose player
	if (r % 2) {
		cout << " Player 1 (O) : ";
		player = player1;
		uniq = 1;
	} else {
		cout << " Player 2 (X) : ";
		player = player2;
		uniq = 2;
	}
	// get field number 
	cin >> enter;
	if (enter < 0 || enter > 9) {
		while (enter < 0 || enter > 9) { cout << "invalid number enter valid number : "; cin >> enter; }
	}
	// put x or o in field
	switch (enter) {
	case 1:
		if (game[0][0].val == NULL) {
			game[0][0].val = player;
			game[0][0].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 2:
		if (game[0][1].val == NULL) {
			game[0][1].val = player;
			game[0][1].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 3:
		if (game[0][2].val == NULL) {
			game[0][2].val = player;
			game[0][2].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 4:
		if (game[1][0].val == NULL) {
			game[1][0].val = player;
			game[1][0].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 5:
		if (game[1][1].val == NULL) {
			game[1][1].val = player;
			game[1][1].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 6:
		if (game[1][2].val == NULL) {
			game[1][2].val = player;
			game[1][2].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 7:
		if (game[2][0].val == NULL) {
			game[2][0].val = player;
			game[2][0].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 8:
		if (game[2][1].val == NULL) {
			game[2][1].val = player;
			game[2][1].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	case 9:
		if (game[2][2].val == NULL) {
			game[2][2].val = player;
			game[2][2].check = uniq;
			r++; full++;
		} else {
			cout << " the field is full \n";
			play();
		}
		break;
	}
}