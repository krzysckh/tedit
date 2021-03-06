#include <iostream>
#include <fstream>
#define MAX_LINES 4096
using namespace std;
string LINE[MAX_LINES], fname, com, tmps;
void err() { cout << "?!\n"; }
int openf(string f) { for (int i=0;i<MAX_LINES;i++) { LINE[i]=""; } ifstream fl; fl.open(f); if(fl.is_open())
	{ int i=0; while(getline(fl, LINE[i])) { i++; } } else { return 1; } fl.close();return 0; }
int saveto(string f) { 
	ofstream fl; fl.open(f); if (fl.is_open() == 0) {return 1;}
	for ( int i = 0; i < MAX_LINES; i++ ) { if ( LINE[i] != "" ) { fl << LINE[i] << endl; } } fl.close();return 0; }
int main() {
	int line = 0, tmpi ;
	while (true) {
		getline(cin, com);
		if (com == "a") { getline(cin, LINE[line]); }
		else if (com == "ap") { getline(cin, tmps); LINE[line] = LINE[line] + tmps; }
		else if (com == "g") {
			cout << "g?: " ; getline(cin, tmps);
			if (tmps == "" ) { err(); } else {  tmpi = stoi(tmps) ; if (tmpi > MAX_LINES) { err(); } else { line = tmpi; }}}
		else if (com == "w") {
			cout << "w?: " ; getline(cin, fname) ; if (saveto(fname)) { err(); } else {cout << "w -> " << fname << endl; } }
		else if (com == "q") { return 0; }
		else if (com == "s") { cout << "l " << line << ":\n" << LINE[line] << endl; }
		else if (com == "o") {
			cout << "o?: " ; getline(cin, fname) ; if (openf(fname)) { err(); } else {cout << "o <- " << fname << endl; } }
		else { err(); }
	}
}
