// WAP for Account class in which account deatils like as deposite money,withdraw money,show balence,calculate interest any other things//

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class AccountDetails
{

  float balance;

public:

    AccountDetails ()
  {
    balance = 0;
  }

  float deposite (float b);//for deposite money

  float withdraw_money (float b);//for withdraw money

  void display_balance (void);//show current balaence



  float calc_interest ();//calculate interest



};
//decaleration of functions

float AccountDetails::deposite (float b)
{
  balance = balance + b;
  return balance;
}

float AccountDetails::withdraw_money (float b)
{
  if (balance <= 0 || balance < b)
    {
      cout << "Insufficient balance unable to withdraw" << "\n";

    }
  else
    {

      balance = balance - b;
    }

  return balance;
}

void AccountDetails::display_balance (void)
{
  if (balance <= 0)
    {
      cout << "Insufficient balance " << endl;
    }
  else
    {

      cout << "Account balance : " << balance << "\tRs only" << endl;
    }
}

float AccountDetails::calc_interest ()
{
  float r;
  int t;
  cout << "Enter rate of interest() and time period(in year) : " << "\n";
  cin >> r >> t;

  float ci = balance * pow ((1 + r / 100), t);

  return ci;
}



int main ()
{
  AccountDetails c1;
  int choice;
  do
    {

      cout << "Welcome" << "\n";
      cout << "1. enter Deposit Money" << "\n";
      cout << "2. enter Withdraw Money" << "\n";
      cout << "3. check Current Balance" << "\n";
      cout << "4. Calculate Interst " << "\n";

      cout << "5. Exit" << "\n";


      cout << "Enter your choice : " << endl;
      cin >> choice;



      switch (choice)
	{
	case 1:
	  {
	    float a;
	    cout << "Enter the amount you want to Deposit : ";
	    cin >> a;
	    c1.deposite (a);//function calling
	    break;
	  }
	case 2:
	  {
	    int a;
	    cout << "Enter the amount you want to Withdraw :" << "\n";
	    cin >> a;
	    c1.withdraw_money (a);//function calling
	    break;
	  }

	case 3:
	  {
	    c1.display_balance ();//function calling
	    break;
	  }

	case 4:
	  {

	    cout << " calculated Interest is = " << c1.calc_interest () << "\n";
	    break;
	  }

	case 5:
	  {
	    exit (0);
	    break;
	  }


	}


    }
  while (choice != 5);

return 0;
}