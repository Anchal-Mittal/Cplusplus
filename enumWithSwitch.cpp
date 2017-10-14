#include <iostream>
#include <stdlib.h>
using namespace std;

enum alphabet {
	A=2,
	B,
	C,
	D=10,
	E,
	F
};

int main()
{
	int choice;
	cout << "\nEnter your choice\t:\t" ;
	cin >> choice ;
	alphabet alphaTest;
	switch ( choice )
	{
		case 1 : alphaTest=A ;
			cout << "\nValue of A\t\t:\t" << alphaTest ;
		case 2 : alphaTest=B ;
			 cout << "\nValue of B\t\t:\t" << alphaTest ;
		case 3 : alphaTest=C ;
			 cout << "\nValue of C\t\t:\t" << alphaTest ;
		case 4 : alphaTest=D ;
			 cout << "\nValue of D\t\t:\t" << alphaTest ;
		case 5 : alphaTest=E ;
			 cout << "\nValue of E\t\t:\t" << alphaTest ;
		case 6 : alphaTest=F ;
			 cout << "\nValue of F\t\t:\t" << alphaTest ;
 			 break;
		default : cout << "\nWrong Choice\n" ;
			  exit(0);
	}
	cout << endl ;
	return 0;
}
