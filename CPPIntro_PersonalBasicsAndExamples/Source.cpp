#include <iostream>

using namespace std;

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

