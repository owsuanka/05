#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Kashurina.h"
using namespace std;
struct Student
{
	int id{};
	string f{};
	string i{};
	string o{};
	char pol{};
	int age{};
	float rost{};
};
void cout_(Student st)
{
	cout << st.f << " " << st.i << " " << st.o << " " << st.pol << " " << st.age << " " << st.rost << endl;
}
void fout_(Student st)
{
	ofstream fout;
	fout.open("student.txt", ios::app);
	fout << st.f << " " << st.i << " " << st.o << " " << st.pol << " " << st.age << " " << st.rost << endl;
	fout.close();
}