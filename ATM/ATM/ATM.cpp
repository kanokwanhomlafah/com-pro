#include<iostream>
using namespace std;

int main()
{
	int menu;
	double Deposite, Money1, Money2, Total1, Total2, Withdraw, Total3, Account1, Account2, ShowBalance, Money;
	do
	{

		cout << "1.Register" << endl;
		cout << "2.Deposite" << endl;
		cout << "3.Withdraw" << endl;
		cout << "4.Show Balance" << endl;
		cout << "0.Exit" << endl;
		cout << "Enter program : ";
		cin >> menu;

	if ( menu ==1 )

	{
		cout << "Register" << endl;
		cout << "Enter Account 1 ID : ";
		cin >> Account1;
		cout << "Enter Money for Account 1 ID : ";
		cin >> Money1;
		cout << "Enter Account 2 ID : ";
		cin >> Account2;
		cout << "Enter Money for Account 2 ID : ";
		cin >> Money2;
		cout << "Balance of Account 1 " << Money1 << endl;
		cout << "Balance of Account 2 " << Money2 << endl;
	}

	else if( menu == 2 )

	{
		cout << "Deposite" << endl;
		cout << "Enter Account ID for Deposite : ";
		cin >> Deposite;

		if (Deposite = Account1 ){
		cout << "Account 1 : Enter Deposite : ";
		Total1 = Money1 + Deposite;
		cout << "You have money " << Total1 << endl;

		}

		if (Deposite = Account2 ){
		cout << "Account 2 : Enter Deposite : ";
		Total1 = Money2 + Deposite;
		cout << "You have money " << Total1 << endl;

		}
		
	}

	else if( menu == 3 )

	{
		cout << "Withdraw" << endl;
		cout << "Enter Withdraw : ";
		cin >> Withdraw;
		if ( Withdraw <= Money )

		Total2 = Money - Withdraw;
		cout << "You have money " << Total2 << endl;
	}

	else if( menu == 4 )

	{
		cout << "Show Balance All Account" << endl;
		cout << "Balance of Account 1 " << Money1 << endl;
		cout << "Balance of Account 2 " << Money2 << endl;

	}
	}while( menu != 0 );

}