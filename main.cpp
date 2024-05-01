#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

//function declaration
void Menu();
void Register();
void Login();
void Dashboard();


int main(){
	
	Menu();
	
	
	return 0;
}

void Menu(){
	
	int selection;
	
	cout << "============================================\n";
	cout << "WELCOME TO STUDENT SAVING & FINANCIAL SYSTEM\n";
	cout << "============================================\n";
	cout << "\n*************\n";
	cout << "1. REGISTER\n2. LOGIN\n3. DASHBOARD\n";
	cout << "*************";
	cout << "\n\nSELECTION : ";
	cin >> selection ;
	
	switch (selection){
		
		case 1:
			Register();
			break;
		
		case 2:
			Login();
			break;
		
		case 3:
			Dashboard();
			break;
		
		case 4:
			cout << "Thank you for using SSNF System";
			break;
		
	}
}

void Register(){
	cout << "This is Register Page.";
}

void Login(){
	cout << "This is Login Page.";
}

void Dashboard(){
	cout << "This is Dashboard Page.";
}


