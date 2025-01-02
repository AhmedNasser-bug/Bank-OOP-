#pragma once
#include "D:\WEB\Abo-hadHoud.RoadMap\Bank (OOP)\Bank (OOP)\String.h"
#include "IputValidation.h"
#include "D:\WEB\Abo-hadHoud.RoadMap\Bank (OOP)\Bank (OOP)\Utils.h"
#include <iomanip>
#include <iostream>
#include "GlobalUser.h"
#define cls system("cls");

using namespace std;
class clsScreen
{
protected:

	static inline void PrintScreenTitle(string Title, string SubTitle = "") {
		
		cout << setw(37) << left << String::MultiplyString("-", 20) << endl;
		
		cout << setw(37) << left << Title << endl;
		
		if (SubTitle != "")cout << SubTitle << endl;

		cout << "Current User: " << CurrentUser.UserName() << endl;
		cout << "Date: " << Date().GetStringDate("dd/mm/yyyy") << endl;

		cout << setw(37) << left << String::MultiplyString("-", 20) << endl;
	}

	static inline void UIEnd() {
		
		cout << "Press any key to go back....";
		
		system("pause>0");
	}
};

