#include <cstdio>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;
/*
	The idea is to calculate the total number of lines needed and divide it by
	the number of lines that can be in one page.
*/

int main() {
	int h, w, n;
	cin >> h >> w >> n;
	string wrd;
	int remchar = w, lines = 1;
	// printf("lines: %d remchar: %d p: %d\n", lines, remchar, p);
	while (n--) {
		cin >> wrd;
		//If enough chars remain in this line to fit the word, write it.
		if (wrd.length() <= remchar) {
			remchar -= wrd.length();
		}
		//Else write it in the next line.
		else {
			lines++;
			remchar = w-wrd.length();
		}
		if (remchar > 0)
			remchar--;
		else {
			//if remchar == 0, then we just need to change the line and don't need to add space on
			//the next line. Space exists between two words only if they are on the same line (found this
			//by trial and error.
			remchar = w;
			//increase the number of lines only if any new words remain.
			lines = lines + (n > 0);
		}
		// printf("lines: %d remchar: %d\n", lines, remchar);
	}
	cout << ceil(lines*1.0/h) << '\n';
}
