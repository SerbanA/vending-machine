#ifndef CASHCONFIRM_H 
#define CASHCONFIRM_H

#include <iostream>
#include <stdlib.h>
#include "exit.h"
#include "addcash.h"
using namespace std;

void cashconfirm(){
	
	cout<<endl;
    cout<<"would like to insert more credit into the machine? [y/n]: " ;
    char res;
    cin>>res;
    switch(res){
    case 'y':	
            cout<<"cash validation";
			break;
    case 'n': 
			cout<<endl;
			cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
    default: cout<<"Please enter y or n only. ";
              cashconfirm();
             break;
    }

}

#endif