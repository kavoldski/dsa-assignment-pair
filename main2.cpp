#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

/*
Name		: Cedric Hilary Samah || Mac
Matrix No.	: 86350 || 00000
Group		: 
*/

using namespace std ;

class Bank{
	char name[100], grade[10], y[50] ;
	double balance ;
	public:
		void openacc() ;
		void deposit() ;
		void withdraw() ;
		void display() ;
		void achievement() ;
		void end() ;
};


void Bank::openacc(){
	
	cout << "ENTER FULL NAME \t: " ;
	cin.ignore() ;
	cin.getline(name,100) ;
	cout << "\nENTER GRADE \t\t: " ;
	cin.getline(grade,10) ;
	
	cout << "\nTYPE OF ACCOUNT ||	S - SAVING | C - CURRENT :  " ;
	cin.getline(y,50) ;
	
	if (strcmp(y, "s") == 0)
		strcpy(y, "SAVING") ;
	else
		strcpy(y, "CURRENT") ;
	
	
	//Extra Cosmetic hehehhehehehe
	cout << "\nINITIAL DEPOSIT\t\t: RM " ;
	cin >> balance ;
	system("cls") ;
	sleep(1) ;
	cout << "\nRegistering username...\t\t\t12%" ;
	sleep(1) ;
	system("cls") ;
	cout << "\nContacting the bank system...\t\t\t34%" ;
	sleep(2) ;
	system("cls") ;
	cout << "\nAlmost there...\t\t\t78%" ;
	sleep(3) ;
	system("cls") ;
	cout << "\n\n ****** ACCOUNT SUCCESSFULLY CREATED\t\t\t100% ******" ;
	sleep(2) ;
	system("cls") ;
}


void Bank::deposit(){
	
	double a ;
	cout << "AMOUNT TO BE DEPOSITED \t\t: RM " ;
	cin >> a ;
	balance += a ;
	cout << "\n TOTAL BALANCE AMOUNT \t\t: RM" << fixed << setprecision(2) << balance << endl ;
	cout << "\n" ;
}


void Bank::withdraw() {
	
	double amount ;
	cout << "AMOUNT TO WITHDRAW \t\t: RM " ;
	cin >> amount ;
	
	if(amount > balance)
		cout << "\n\nInsufficient balance." ;
	else
		balance-=amount ;
	cout << "\n\n TOTAL BALANCE AMOUNT \t\t: RM" << fixed << setprecision(2) << balance << endl <<endl ;
	system("pause") ;
	system("cls") ;
}


void Bank::display() {
	
	cout << "\nFULL NAME \t\t: " << name ;
	cout << "\nGRADE \t\t\t: " << grade ;
	cout << "\nTYPE OF ACCOUNT \t: " << y ;
	cout << "\nTOTAL DEPOSITED \t: RM " << fixed << setprecision(2) << balance << endl ;
	cout << "\nACHIEVEMENTS:-";
	achievement();
	cout << endl;
	system("pause");
	system("cls");
}


void Bank::achievement() {
	
	//MILESTONE ACHIEVEMENTS
	if (balance >= 1000 && balance <= 9999)
		cout << "\nCongratulations! You have reach BEGINNER tier." ;
	else if (balance >= 10000 && balance <= 99999)
		cout << "\nCongratulations! You have reach PRIMARY tier." ;
	else if (balance >= 100000 && balance <= 999999)
		cout << "\nCongratulations! You have reach GOLD tier." ;
	else
		cout << "\nNo achievements yet.";
}



void Bank::end() {
	system("cls") ;
	cout << "\n\n******** THANK YOU FOR USING FINANCIAL & SAVING SYSTEM ********" ;
	exit(0) ;
}


int main() {
	
	Bank B;
	int choice;
    do{
    	cout << "+++++ FINANCIAL & SAVING SYSTEM +++++";
    	cout << "\n\n =========================" ;
    	cout << "\n1.	OPEN ACCOUNT\n" ;
    	cout << "\n2.	MONEY DEPOSIT\n" ;
    	cout << "\n3.	WITHDRAW MONEY\n" ;
    	cout << "\n4.	DISPLAY MY ACCOUNT\n" ;
    	cout << "\n5.	EXIT" ;
    	cout << "\n =========================" ;
    	cout << "\n OPTION \t :  " ;
    	cin >> choice ;
    	system("cls") ;
    	
    	
    	switch(choice)
    	{
    		case 1:
    			B.openacc() ;
    			break;
    		
    		case 2:
    			B.deposit() ;
    			break;
    		
    		case 3:
    			B.withdraw() ;
    			break;
    			
    		case 4:
    			B.display() ;
    			break;
    		
    		case 5:
    			B.end() ;
    			
		}
	}
	while(choice) ;
	return 0 ;
} 
