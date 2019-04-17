#include <iostream>
#include <stdlib.h>
using namespace std;
//void method
void exitP(){

	char res;
	cout<<endl;
    cout<<"Would you like to exit the program? [y/n]: " ;
    cin>>res;

    switch(res){
    case 'y': cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
    case 'n': 
            break;
    default: cout<<"Please enter 1 or 2 only. ";
             exitP();
    }

}

int addcash(double y){
	int x;
	cout<<endl;
    cout<<"would like to insert more credit into the machine? [1 -> yes :: 2 -> no]: " ;
    cin>>x;
	cout<<endl;
    switch(x){
    case 1:	
			cout<<endl;
            cout<<"How much credit will you add?";
            double addedmoney ;
		    cin>>addedmoney;
			y = y + addedmoney;
			cout<<endl;
			cout << "You have " << y << " RON left";
			return y;
			break;
    case 2: 
			cout<<endl;
			cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
    default: cout<<"Please enter 1 or 2 only. ";
             break;
    }

}
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
	double dis = addcash(customerMoney);
	customerMoney = customerMoney + dis;
	goto pentakill;
	cin.ignore();
	cin.get();
	return 0;

}