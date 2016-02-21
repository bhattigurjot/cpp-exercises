#include "Employee.h"

Employee::Employee()
{
	mFirstName = "Default FName";
	mLastName = "Default LName";
	mSalary = 0;

	cout << "Enter First Name: ";
	cin >> mFirstName;
	cout << "Enter Last Name: ";
	cin >> mLastName;
	cout << "Enter Salary: ";
	cin >> mSalary;
}

Employee::~Employee()
{
	cout << "Del" << endl;
}

void Employee::addEmployee()
{

}

void Employee::save(ofstream& outFile)
{
	outFile << "First Name= " << mFirstName << endl;
	outFile << "Last Name= " << mLastName << endl;
	outFile << "Salary= " << mSalary << endl;
}

bool Employee::search(string name)
{
	if (mLastName == name)
	return true;
	else
	return false;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Manager::Manager()
{
	mMeetingsPerWeek = 0;
	mVacationDaysPerYear = 0;
}

Manager::~Manager()
{
	cout << "Del Man" << endl;
}

void Manager::addEmployee()
{
	cout << "Enter Number of Meetings Per Week: ";
	cin >> mMeetingsPerWeek;
	cout << "Enter Number of Vacation Days Per Year: ";
	cin >> mVacationDaysPerYear;
}

void Manager::save(ofstream& outFile)
{
	Employee::save(outFile);
	outFile << "Meetings Per Week= " << mMeetingsPerWeek << endl;
	outFile << "Vacation Days Per Year= " << mVacationDaysPerYear << endl;
	outFile << endl;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Engineer::Engineer()
{
	mKnowCPP = false;
	mYearsOfExp = 0;
	mEngineerType = "software";
}

void Engineer::addEmployee()
{
	cout << "Enter the type of engineer (software/mechanical/electric): ";
	cin >> mEngineerType;
	cout << "Enter whether know c++ (true[1]/false[0]): ";
	cin >> mKnowCPP;
	cout << "Enter Number of Years of Experience: ";
	cin >> mYearsOfExp;
}

void Engineer::save(ofstream& outFile)
{
	Employee::save(outFile);
	outFile << "Type of Engineer= " << mEngineerType << endl;
	outFile << "Know c++= " << mKnowCPP << endl;
	outFile << "Years of Exp= " << mYearsOfExp << endl;
	outFile << endl;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Researcher::Researcher()
{
	mSchool = "abc";
	mTopicOfPhd = "aa";
}

void Researcher::addEmployee()
{
	cout << "Enter the name of School of Researcher: ";
	cin >> mSchool;
	cout << "Enter the topic of PhD: ";
	cin >> mTopicOfPhd;
}

void Researcher::save(ofstream& outFile)
{
	Employee::save(outFile);
	outFile << "School= " << mSchool << endl;
	outFile << "Topic of PhD= " << mTopicOfPhd << endl;
	outFile << endl;
}
