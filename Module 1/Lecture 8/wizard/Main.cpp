#include "Wizard.h"
#include <iostream>

using namespace std;

int main()
{
	Wizard wiz0("Gandalf", 25, 100, 10);
	Wizard wiz1("Loki", 50, 150, 12);
	Wizard wiz2("Magius", 10, 75, 6);

	ofstream outFile("wizdata.txt", ios_base::binary);

	if (outFile)
	{

		wiz0.save(outFile);
		wiz1.save(outFile);
		wiz2.save(outFile);

		outFile.close();
	}

	Wizard wiz3;
	Wizard wiz4;
	Wizard wiz5;

	cout << "BEFORE LOADING..." << endl;
	wiz3.print();
	wiz4.print();
	wiz5.print();

	ifstream inFile("wizdata.txt", ios_base::binary);

	if (inFile)
	{
		wiz3.load(inFile);
		wiz4.load(inFile);
		wiz5.load(inFile);
		inFile.close();
	}

	cout << "AFTER LOADING..." << endl;
	wiz3.print();
	wiz4.print();
	wiz5.print();
}
