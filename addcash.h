#ifndef ADDCASH_H 
#define ADDCASH_H

#include <iostream>
#include <stdlib.h>
#include "exit.h"
using namespace std;


int addcash(double z){
            cout<<endl;
            cout<<"How much credit will you add?";
            double addedmoney ;
		    cin>>addedmoney;
			z = z + addedmoney;
			cout<<endl;
			cout << "You have " << z << " RON left";
			return z;}
			
#endif			