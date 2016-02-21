#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

int main()
{
	vector<Employee*> vec;
	Employee* emp;
	string empName;
	bool found = false;
	ofstream outF;

	bool quit = false;

	while (!quit)
	{
		cout << "Number of Employees = " << vec.size() << endl;

		cout <<
		"1) Add an Employee, "
		"2) Delete an Employee "
		"3) Save Database, "
		"4) Exit. :";

		int input = 0;
		cin >> input;

		int inp = 0;

		switch (input)
		{
			case 1:
			cout <<
			"1) Add a Manager, "
			"2) Add an Engineer "
			"3) Add a Researcher. ";

			cin >> inp;

			switch (inp)
			{
				case 1:
				emp = new Manager;
				emp->addEmployee();
				vec.push_back(emp);
				cout << "Added a Manager" << endl;
				break;
				case 2:
				emp = new Engineer;
				emp->addEmployee();
				vec.push_back(emp);
				cout << "Added an Engineer" << endl;
				break;
				case 3:
				emp = new Researcher;
				emp->addEmployee();
				vec.push_back(emp);
				cout << "Added a Researcher" << endl;
				break;
			}
			break;
			case 2:
			cout << "Enter the employee's last name: " << endl;
			cin >> empName;

			for (int i = 0; i < vec.size(); ++i)
			{
				found = vec[i]->search(empName);
				if (found)
				{
					delete vec[i];
					vec.erase(vec.begin() + i);
					cout << "Deleted an Employee" << endl;
				}
			}
			if (!found)
			cout << "Cannot Find the employee" << endl;
			break;
			case 3:
			outF.open("emp.txt");
			if (outF)
			{
				for (int i = 0; i < vec.size(); ++i)
				vec[i]->save(outF);
				outF.close();
				cout << "Saved Database" << endl;
			}
			else
			{
				cout << "Cannot open the file!" << endl;
			}
			break;
			case 4:
			quit = true;
			cout << "Exiting..." << endl;
			break;
		}
	}

	emp = NULL;
	delete emp;
}
