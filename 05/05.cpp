#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Kashurina.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream fout;
    ifstream fin;
    Student Sonya = {1, "Кабанова", "София", "Лейсанова", 'ж', 14, 1.65};
    cout_(Sonya);
    fout_(Sonya);
}
