#include <iostream>
#include <csetjmp>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	jmp_buf env;
	int val;

	val = setjmp(env);

	if (val == 0) {
		cout << "setjmp returned " << val << endl;
		longjmp(env, val);
	} else {
		cout << "setjmp returned " << val << endl;
		cout << "Program terminating" << endl;
	}

	_getch();
	return 0;
}