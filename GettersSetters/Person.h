#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person();
	~Person();
	string toString();
	void setName(string newName);
	string getName(void);

private:
	string name;



};

