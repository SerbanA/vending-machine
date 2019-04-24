#include <iostream>
#include <stdlib.h>
#include "exit.h"
#include "addcash.h"
#include "cashconfirm.h"
using namespace std;

int main(){

	double product1 = 6.0;
	double product2 = 5.5;
	double product3 = 7.5;
	double product4 = 8.0;
	double customerMoney = 0.00;
	int exitProgram = 1;
	
	 cout << "How much money do you have? ";
	 cin >> customerMoney;
pentakill:
	while (customerMoney >= 5.5 && exitProgram == 1)
	{
		int customerChoice = 0;
		cout<<endl;
		cout << "Which product would you like to buy?";
		cout<<endl;
		cout<<"Press '1' for Coca-Cola(6.0 RON)";
		cout<<endl;
		cout<<"Press '2' for Pepsi(5.5 RON)";
		cout<<endl;
		cout<<"Press '3' for Nescaffe Coffee(7.5 RON)";
		cout<<endl;
		cout<<"Press '4' for Lipton Tea(8.0 RON)";
		cout<<endl;
		cout<<"Choice:";
		cin >> customerChoice;
		if (customerChoice == 1)
		{	cout<<endl;
			cout << "You have selected Coca-Cola";
			cout<<endl;
			customerMoney = customerMoney - product1;
			cout<<endl;
			cout << "You have " << customerMoney << " RON left";
			cout<<endl;
			exitP();
		}
		else if (customerChoice == 2)
		{	cout<<endl;
			cout << "You have selected Pepsi";
			cout<<endl;
			customerMoney = customerMoney - product2;
			cout<<endl;
			cout << "You have " << customerMoney << " RON left";
			cout<<endl;
			exitP();
		}
		else if (customerChoice == 3)
		{	cout<<endl;
			cout << "You have selected Nescaff Coffee";
			cout<<endl;
			customerMoney = customerMoney - product3;
			cout<<endl;
			cout << "You have " << customerMoney << " RON left";
			cout<<endl;
			exitP();
		}
		else if (customerChoice == 4)
		{	cout<<endl;
			cout << "You have selected Lipton Tea";
			customerMoney = customerMoney - product4;
			cout<<endl;
			cout << "You have " << customerMoney << " RON left";
			cout<<endl;
			exitP();
		}

	}
	cout<<endl;
	cout << "Your credit is less than the ammount required 2 purchase a drink.";
	cashconfirm();

	customerMoney = customerMoney + addcash(customerMoney);
	goto pentakill;
	cin.ignore();
	cin.get();
	return 0;

}