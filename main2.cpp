#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

/*
Name 	: Cedric Hilary Samah
Group 	: 21
Pair	: MacCallister Aaron
*/

using namespace std;

class Bank{
	char name[100], grade[10], y[50];
	double balance;
	public:
		void openacc();
		void deposit();
		void withdraw();
		void display();
		void end();
};


void Bank::openacc(){
	
	cout << "ENTER FULL NAME \t: ";
	cin.ignore();
	cin.getline(name,100);
	cout << "\nENTER GRADE \t\t: ";
	cin.getline(grade,10);
	
	cout << "\nTYPE OF ACCOUNT ||	S - SAVING | C - CURRENT :  ";
	cin.getline(y,50);
	
	if (strcmp(y, "s") == 0)
		strcpy(y, "SAVING");
	else
		strcpy(y, "CURRENT");
	
	
	//Extra Cosmetic hehehhehehehe
	cout << "\nINITIAL DEPOSIT\t\t: RM ";
	cin >> balance;
	system("cls");
	sleep(1);
	cout << "\nRegistering username...\t\t\t12%";
	sleep(1);
	system("cls");
	cout << "\nContacting the bank system...\t\t\t34%";
	sleep(2);
	system("cls");
	cout << "\nAlmost there...\t\t\t78%";
	sleep(3);
	system("cls");
	cout << "\n\n ****** ACCOUNT SUCCESSFULLY CREATED\t\t\t100% ******";
	sleep(2);
	system("cls");
}


void Bank::deposit(){
	
	double a;
	cout << "AMOUNT TO BE DEPOSITED \t\t: RM ";
	cin >> a;
	balance += a;
	cout << "\n TOTAL BALANCE AMOUNT \t\t: RM" << fixed << setprecision(2) << balance << endl;
	cout << "\n";
}


void Bank::withdraw() {
	
	double amount;
	cout << "AMOUNT TO WITHDRAW \t\t: RM ";
	cin >> amount;
	balance-=amount;
	cout << "\n TOTAL BALANCE AMOUNT \t\t: RM" << fixed << setprecision(2) << balance << endl;
}


void Bank::display() {
	
	cout << "\nFULL NAME \t\t: " << name;
	cout << "\nGRADE \t\t\t: " << grade;
	cout << "\nTYPE OF ACCOUNT \t: " << y;
	cout << "\nTOTAL DEPOSITED \t: RM " << fixed << setprecision(2) << balance << endl;
}

void Bank::end() {
	system("cls");
	cout << "\n\n******** THANK YOU FOR USING FINANCIAL & SAVING SYSTEM ********";
	sleep(2);
	exit(0);
}


int main() {
	
	Bank B;
	int choice;
    do{
    	cout << "\n =========================";
    	cout << "\n1.	OPEN ACCOUNT\n";
    	cout << "\n2.	MONEY DEPOSIT\n";
    	cout << "\n3.	WITHDRAW MONEY\n";
    	cout << "\n4.	DISPLAY MY ACCOUNT\n";
    	cout << "\n5.	EXIT";
    	cout << "\n =========================";
    	cout << "\n OPTION \t :";
    	cin >> choice;
    	system("cls");
    	
    	
    	switch(choice)
    	{
    		case 1:
    			B.openacc();
    			break;
    		
    		case 2:
    			B.deposit();
    			break;
    		
    		case 3:
    			B.withdraw();
    			break;
    			
    		case 4:
    			B.display();
    			break;
    		
    		case 5:
    			B.end();
    			
		}
	}
	while(choice);
	return 0;
} 
