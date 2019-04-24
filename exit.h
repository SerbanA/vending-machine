#ifndef EXIT_H 
#define EXIT_H

#include <iostream>
#include <stdlib.h>
using namespace std;

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
    default: cout<<"Please enter y or n only. ";
             exitP();
    }

}


#endif