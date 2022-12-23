// atmMachineProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std;

void showMenu() {
	cout << "**********MENU**********" << endl; //initializes the menu by printing out options to the console
	cout << "1. Check balance " << endl;
	cout << "2. Deposit money " << endl;
	cout << "3. Withdraw " << endl;
	cout << "4. Exit " << endl;
	cout << "************************" << endl;

}

void showAccounts() {
	cout << "1. Checking" << endl;
	cout << "2. Savings" << endl;
}

void welcomeMessage()
{
	cout << "**********WELCOME TO C++ BANK**********" << endl;
}

void enterPin() {
	cout << "Enter PIN: " << endl;
}

int main()
{

	//First, enter correct PIN. Then, check balance, deposit, withdraw, show menu

	int optionChosen;
	int accountChosen;
	double checkingBalance = 0; //initial user checking balance
	double savingsBalance = 0; //initial user saving balance 
	double correctPin = 1111;
	double userPinEntered;
	welcomeMessage();
	do //Keep prompting the user for the correct PIN
	{
		enterPin();
		cin >> userPinEntered;

		if (userPinEntered != correctPin)
			cout << "Incorrect PIN!" << endl;
	}

	while (userPinEntered != correctPin);

	if (userPinEntered == correctPin) {
		do {


			showMenu();
			cout << " Option: ";
			cin >> optionChosen;

			switch (optionChosen)
			{
				//case 1: cout << "Your balance is: $ " << userBalance << endl; break;
			case 1: cout << "Accounts:" << endl;
				showAccounts();
				cout << "Selection:" << endl;
				cin >> accountChosen;
				if (accountChosen == 1)
				{
					cout << "Your checking balance is: $ " << checkingBalance << endl;
					break;
				}
				else
				{
					cout << "Your savings balance is: $ " << savingsBalance << endl;
					break;
				}
			case 2: cout << "Accounts:" << endl;
				showAccounts();
				cout << "Selection:" << endl;
				cin >> accountChosen;
				if (accountChosen == 1)
				{
					double checkingDepositAmount;
					cout << "Amount to deposit to checking account:" << endl;
					cin >> checkingDepositAmount;
					checkingBalance += checkingDepositAmount;
					break;
				}
				else
				{
					double savingsDepositAmount;
					cout << "Amount to deposit to savings account:" << endl;
					cin >> savingsDepositAmount;
					savingsBalance += savingsDepositAmount;
					break;
				}
			case 3: cout << "Accounts:" << endl;
				showAccounts();
				cout << "Selection:" << endl;
				cin >> accountChosen;
				if (accountChosen == 1)
				{
					double checkingWithdrawAmount;
					cout << "Amount to withdraw from checking account:" << endl;
					cin >> checkingWithdrawAmount;

					if (checkingWithdrawAmount <= checkingBalance)
					{
						checkingBalance -= checkingWithdrawAmount;
						break;
					}
					else
					{
						cout << "Insufficient funds in checking account!!!" << endl;
						break;
					}
				}
				else
				{
					double savingsWithdrawAmount;
					cout << "Amount to withdraw from savings account:" << endl;
					cin >> savingsWithdrawAmount;
					if (savingsWithdrawAmount <= savingsBalance)
					{
						savingsBalance -= savingsWithdrawAmount;
						break;
					}
					else
					{
						cout << "Insufficient funds in savings account!!!" << endl;
						break;
					}
				}

			case 4: exit;

				break;

				}
			}

			while (optionChosen != 4);
		}

	else
		cout << "Incorrect PIN, try again" << endl;


}




