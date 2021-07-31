#include <iostream>
#include <fstream>
#define MAX_LINES 4096
using namespace std;
string LINE[MAX_LINES];
// modes: 0 - command, 1 - edit line
void err() { cout << "?!\n"; }
int saveto(string f) { 
	ofstream fl; fl.open(f); if (fl.is_open() == 0) {return 1;}
	for ( int i = 0; i < MAX_LINES; i++ ) { if ( LINE[i] != "" ) { fl << LINE[i]; } } fl.close();return 0; }
int main() {
	int mode = 0, line = 0, tmpi ;
	string fname, com, tmps;
	while (true) {
		if (mode == 0) {
			getline(cin, com);
			if (com == "a") { mode = 1; }
			else if (com == "g") {
				cout << "g?: " ; getline(cin, tmps);
				if (tmps == "" ) { err(); } else {  tmpi = stoi(tmps) ; if (tmpi > MAX_LINES) { err(); } else { line = tmpi; }}}
			else if (com == "w") {
				cout << "w?: " ; getline(cin, fname) ; if (saveto(fname)) { err() ; return 1; } else {cout << "w -> " << fname << endl; } }
			else if (com == "q") { return 0; }
			else if (com == "s") { cout << "l " << line << ":\n" << LINE[line]; }
			else { err(); }
		} else {
			getline(cin, LINE[line]); LINE[line] = LINE[line] + "\n";
			mode = 0;
} } }
