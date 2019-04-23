#ifndef CASH_H 
#define CASH_H

#include <iostream>
#include <stdlib.h>
using namespace std;



int addcash(double y){
	int x;
	cout<<endl;
    cout<<"would like to insert more credit into the machine? [y/n]: " ;
    cin>>x;
	cout<<endl;
    char res;
    switch(res){
    case 'y':	
			cout<<endl;
            cout<<"How much credit will you add?";
            double addedmoney ;
		    cin>>addedmoney;
			y = y + addedmoney;
			cout<<endl;
			cout << "You have " << y << " RON left";
			return y;
			break;
    case 'n': 
			cout<<endl;
			cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
    default: cout<<"Please enter 1 or 2 only. ";
             break;
    }

}

#endif