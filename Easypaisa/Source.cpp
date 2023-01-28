// Loginpin (2323) USERNAME (danish99@gmail.com)
// Easypaisa Project
#include<iostream>
#include<string>
using namespace std;
/* There is a some Global variable */
int pin, l_pin;
double cnic;
string name, dob, uname, l_uname;
float balance = 0.00, t_amount, withdraw, amount, bill_amount;

/* Here Defined some parent functions */
void login();
void signup();
/* Menu Functions */
int menu();
void deposite();
void Withdraw();
void Transfer();
void Biling();
void details();


int main()
{

	int op;
	cout << "\n\t\t\t**** Enter 1 for SignUp ****";
	cout << "\n\n\t\t\t**** Enter 0 for LogIn  ****" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
	{
		signup();
		break;
	}
	case 0:
	{
		login();
		break;
	}
	default:
		break;
	}

	return 0;
}// End of main()

void signup()
{
	cout << "\n\t\t\t\t ----------";
	cout << "\n\t\t\t\t | SignUP |";
	cout << "\n\t\t\t\t ----------";
	getline(cin, name); // Temprory (If your ide work with single getline then remove that one)
	cout << "\n\nEnter Name : ";
	getline(cin, name);
	cout << "\nEnter date of birth : ";
	getline(cin, dob);
	cout << "\nEnter CNIC : ";
	cin >> cnic;
	cout << "\nEnter username : ";
	cin >> uname;
	cout << "\nEnter  4 to 6 Digit PIN : ";
	cin >> pin;
	if (pin <= 6 || pin >= 4)
	{
		cout << "\n\n\t\t\t **** Account Created ****\n\n";
		system("pause");
		system("cls");
		cout << "\n\n\t\t\t\t***** LOGIN IN YOUR ACCOUNT *****" << endl;
		getline(cin, l_uname);// Temprory (If your ide work with single getline then remove that one)
		cout << "\n\n\tEnter Username : ";
		getline(cin, l_uname);
		cout << "\n\n\tEnter PIN : ";
		cin >> l_pin;
		cout << "\n\n";
		system("pause");
		system("cls");
		if (pin == l_pin && uname == l_uname)
		{

			while (true)// Infinite loop
			{
				system("pause");
				system("cls");
				switch (menu())// Call the menu function in Switch.
				{
				case 1:
				{
					deposite();
					break;
				}
				case 2:
				{
					Withdraw();
					
					break;
				}
				case 3:
				{
					Transfer();
					break;
				}
				case 4:
				{
					Biling();
					break;
				}
				case 5:
				{
					details();
					break;
				}
				case 6:
				{
					exit(0);
				}
				default:
					cout << "\n\nSorry! You Entered Wrong Operator";
					break;
				}
			}
		}
		else
		{
			cout << "\n\nCheck Your Username & PIN";
			return;
		}
	}
	else
	{
		cout << "PIN MUST 4 BE 6 INTEGERS " << endl;
		return;
	}
}// End of signup
void login()
{
	int login_pin = 2323;
	string uname= "danish99@gmail.com";
	cout << "\n\t\t\t\t ---------";
	cout << "\n\t\t\t\t | LogIn |";
	cout << "\n\t\t\t\t ---------";
	cout << "\nEnter Pin : ";
	cin >> l_pin;
	cout << "\nEnter UserName : ";
	cin >> l_uname;
	if (l_pin == 2323 && l_uname == uname)
	{


		while (true)// Infinite loop
		{
			system("pause");
			system("cls");
			switch (menu())// Call the menu function in Switch.
			{
			case 1:
			{
				deposite();
				break;
			}
			case 2:
			{
				Withdraw();
				break;
			}
			case 3:
			{
				Transfer();
				break;
			}
			case 4:
			{
				Biling();
				break;
			}
			case 5:
			{
				details();
				break;
			}
			case 6:
			{
				exit(0);
			}
			default:
				cout << "\n\nSorry! You Entered Wrong Operator";
				break;
			}
		}// End of infinite While loop
	}
	else {
		cout << "Username Or PIN typed incorrectly";

	}
}// End of login()

int menu()
{ 
	cout << "\t\t\t\t\t -------------" << endl;
	cout << "\t\t\t\t\t | EASYPAISA |" << endl;
	cout << "\t\t\t\t\t -------------" << endl;
	cout << "\n\n\n\tNAME : " << name;
	cout << "\t\t\t\t\t\t\t\tBALANCE : " << balance;
	int op;
	cout << "\n\n\t\t****** MENU ******\n\n";
	cout << "\n\t1. Deposite Amount";
	cout << "\n\t2. Withdraw Amount";
	cout << "\n\t3. Transfer Amount";
	cout << "\n\t4. Bilings";
	cout << "\n\t5. Check Details";
	cout << "\n\t6. Exit";
	cout << "\n\t---------------------------";
	cout << "\n\tChoose Option:[1/2/3/4/5/6]";
	cout << "\n\t---------------------------";
	cout << "\n\n\n\n\t\t Enter Your Choice : ";
	cin >> op;
	return (op);
}// End of menu()
void deposite()
{
	cout << "\nEnter Deposte Amount : ";
	cin >> amount;
	balance += amount;
	cout << "\n\n\t\t\t** THANKS **";
	cout << "\n\n Your Amount " << amount << "  Successfully Deposite\n\n\n";
}// End of Deposite
void Withdraw()
{
	cout << "\n Enter Amount You Want to Withdraw : ";
	cin >> withdraw;
	if (balance >= withdraw)
	{
		balance -= withdraw;
	}
	else
	{
		cout << "\nSORRY!!! Your Current Balance Is Less than Withdraw amount ";
	}
}// End of Withdraw
void Transfer()
{
	double t_number;
	cout << "\n\nEnter mobile number to transfer funds : ";
	cin >> t_number;
	cout << "\nEnter Amount You want to Transfer : ";
	cin >> t_amount;
	if (balance >= t_amount)
	{
		balance -= t_amount;
		cout << "RS " << t_amount;
		cout << " \n\nSuccesfully transfer to this number ( " << t_number << " )\n\n";
	}
	else
	{
		cout << "\nSORRY!!! Your Current Balance Is Less than Transfer funds\n ";
	}
}// End of Transfer
void Biling()
{
	int bill, id, bill_no;
	cout << "\n\n\t\t\t *Press 1.For electricity bill*\n";
	cout << "\n\n\t\t\t *Press 2.For telephone*\n";
	cin >> bill;
	if (bill == 1)
	{
		cout << "\nEnter CONSUMER ID : ";
		cin >> id;
		cout << "\nEnter Bill NO : ";
		cin >> bill_no;
		cout << "\nEnter bill amount : ";
		cin >> bill_amount;
		if (bill_amount <= balance)
		{
			cout << "\n\n\tYOUR PAID successfully";
			balance -= bill_amount;
			cout << "\n\n Your New Balance is : " << balance << endl;
		}
		else
		{
			cout << "\n\n\t Sorry you have insufficient Balance" << endl;
		}

	}
	else if (bill == 2)
	{
		cout << "Enter Your bill ID : ";
		cin >> bill;
		cout << "Enter bill payment amount : ";
		cin >> bill_amount;
		if (bill_amount <= balance)
		{
			cout << "YOUR PAID successfully";
			balance -= bill_amount;
			cout << "\n\n Your New Balance is : " << balance << endl;
		}
		else
		{
			cout << "\n\n\t Sorry you have insufficient Balance" << endl;
		}
	}
	else
	{
		cout << "ENTER VALID value and try again";
	}
}// End of Biling
void details()
{
	cout << "\n\n\t\t\t**** Details ****";
	cout << "\n\nYour Total Current Balance is : " << balance;
	cout << "\n\nYour Total amount of of Deposite is : " << amount;
	cout << "\n\nYour Total amount of Withdraw is : " << withdraw;
	cout << "\n\nYour Total amount of Withdraw is : " << bill_amount;
	cout << "\n\nYour Total Transfer amount is : " << t_amount;
	cout << "\n\n\n";
}// End of Details