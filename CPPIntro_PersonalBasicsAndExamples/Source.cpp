#include <iostream>

using namespace std;


/*Basically the Hello World example*/
int main()
{
	cout << "The start of a new era! --- by Ray" << endl;
	cout << "Second line here... after endl \n \n";

	cout << "The start of a new era! --- by Ray \n";
	cout << "Second line here starts with backslash n instead of endl";

	cin.get();
	return 0;

}

/* Integer, function example*/
int main()
{


	int MyLuckyNumber = 3;
	cout << MyLuckyNumber;

	return 0;



}

///////////////////////////////////////


//Calculate your Bitcoin Balance//
int main()
{
	//USD Values//
	int USD_BTC = 6000;
	int USD_LTC = 50;
	int USD_ETH = 213;

	//Balances//
	int BTC_Balance = 3;
	int LTC_Balance = 200;
	int ETH_Balance = 300;

	int Total_BTC_Value = USD_BTC * BTC_Balance;
	int Total_LTC_Value = USD_LTC * LTC_Balance;
	int Total_ETH_Value = USD_ETH * ETH_Balance;

	cout << Total_BTC_Value;
	return 0;
}

//////////////////////////////////////

//Calculating and posting sum of variables
int main()
{

	int BTC;
	int LTC;
	int ETH;

	int sum;

	cout << "Enter the BTC price" << endl;
	cin >> BTC;

	cout << "Enter the LTC price" << endl;
	cin >> LTC;

	cout << "Enter the ETH price" << endl;
	cin >> ETH;

	sum = BTC + LTC + ETH;

	cout << "Total USD Price for each BTC, LTC , ETH is " << sum << endl;




	cin.get();
	return 0;
}

/////////////////////////////////

//Memory keeps the latest value
int main()
{

	int BTC = 5;
	int LTC = 3;
	int ETH = 9;

	BTC = 6000;
	LTC = 50;
	ETH = 200;

	cout << BTC << LTC << ETH << endl;


	cin.get();
	return 0;
}
///////////////////////////////


//Basic Arithmetic and negative results
int main()
{

	int BTC = 5;
	int LTC = 3;
	int ETH = 9;

	int sum = (BTC + LTC) - ETH;

	cout << sum << endl;


	cin.get();
	return 0;
}

///////////////////////////

//If statements 1
int main()
{

	int BTC = 6000;
	int LTC = 50;
	int ETH = 200;

	if (BTC > (LTC + ETH))
	{
		cout << "BTC has more value than ETH and LTC \n" << endl;
	}

	if (BTC <= 6000)
	{
		cout << "BTC is smaller than or equal to 6000 \n" << endl;

	}

	//if a number should be equal to another number than you use ==
	if (9 == 9)
	{
		cout << "Nine actually equals to nine \n" << endl;
	}

	//Not Equals to is !=
	if (3 != 4)
	{
		cout << "Three is of course not equals to four \n" << endl;
	}

	cin.get();
	return 0;
}


///////////////////////////////////

//Functions and calling functions


// This is the protype for a function that is called BELOW (after) the int main
void My_Test_Function_Prototype();


void BTC_Price()
{
	cout << "Right now the BTC price is 6470.53 \n" << endl;
}


int main()
{


	BTC_Price();
	My_Test_Function_Prototype();



	cin.get();
	return 0;
}

void My_Test_Function_Prototype()
{
	cout << "This is the result of my function prototype which is first preproccessed on top but now running on the bottom \n" << endl;
}

//////////////////////////////////////////

/*Single parameter function*/


void BTC_Price(int x)
{
	cout << "BTC Price is" << x << endl;
}



int main()
{
	BTC_Price(6345);

	cin.get();
	return 0;
}

///////////////////////////////////////////////

/*Multiple parameter function*/


double BTC_Balances(double Rays_Balance, double Susans_Balance, double Claudias_Balance)
{
	double Total_Balance = Rays_Balance + Susans_Balance + Claudias_Balance;

	return Total_Balance;
}

int main()
{
	cout << BTC_Balances(3.1, 4.1, 5.1);

	cin.get();
	return 0;
}

//////////////////////////////////////////////////

#include <iostream>

using namespace std;

// Classes and Objects

// When creating a class make sure to add public or private with a :
class BTCBalanceTotal
{
public:
	void BTC_Balances()
	{
		double RayBTC = 1.1;
		double SusanBTC = 2.1;
		double ClaudiaBTC = 3.1;

		double Total_BTC = RayBTC + SusanBTC + ClaudiaBTC;

		cout << Total_BTC << endl;
	}

};

class LTCBalanceTotal
{
public:
	void LTC_Balances()
	{
		double RayLTC = 100.1;
		double SusanLTC = 200.1;
		double ClaudiaLTC = 300.1;

		double Total_LTC = RayLTC + SusanLTC + ClaudiaLTC;

		cout << Total_LTC << endl;
	}
};

int main()
{
	//Name your class an object first
	BTCBalanceTotal BTCBalanceObject;
	//Call your function in your class/object with a dot ( . ) between them. Dot is the separator here
	BTCBalanceObject.BTC_Balances();

	// Same thing for LTC
	LTCBalanceTotal LTC_Balance_O;
	LTC_Balance_O.LTC_Balances();

	cin.get();
	return 0;
}


////////////////////////////////////////////

