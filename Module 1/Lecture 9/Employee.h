//#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
public:
	Employee();
	~Employee();
	virtual void addEmployee();
	virtual void save(ofstream& outFile);
	bool search(string name);

protected:
	string mFirstName;
	string mLastName;
	int mSalary;
};

class Manager: public Employee
{
public:
	Manager();
	~Manager();

	void addEmployee();
	void save(ofstream& outFile);

private:
	int mMeetingsPerWeek;
	int mVacationDaysPerYear;
};

class Engineer : public Employee
{
public:
	Engineer();

	void addEmployee();
	void save(ofstream& outFile);

private:
	bool mKnowCPP;
	int mYearsOfExp;
	string mEngineerType;
};

class Researcher : public Employee
{
public:
	Researcher();

	void addEmployee();
	void save(ofstream& outFile);

private:
	string mSchool;
	string mTopicOfPhd;
};

#endif // EMPLOYEE_H
