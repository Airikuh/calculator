#include <iostream>

using namespace std;

//Function Prototypes
void WelcomeMessage();
float ComputeSum(float num1, float num2);
float ComputeSub(float num1, float num2);
float ComputeMul(float num1, float num2);
float ComputeDiv(float num1, float num2);
float computeRoot(float num1, int n);
float computePower(float num1, int index);
float ComputePerc(float num1, float perc);
int computeLCM(int num1, int num2);
int computeGCD(int num1, int num2);
int ComputeMod(int num1, int num2);
void ExitMessage();

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 
int main()
{
  //Variable Declaration
  int quit;
  quit = 0;

  //While Loop with Switch Statements Based on User Input
  while (quit != 1) {
	//Function Call
	WelcomeMessage();
	//Variable Declaration
	char operation;

	cin >> operation;

	//Switch Statements
	switch (operation) {
	//Addition Case
	case 'A':
	case 'a':
	{
		//Variable Declaration
		float num1;
		float num2;

		cout << "Please Enter an Integer: ";
		cin >> num1;
		cout << "Please Enter a Second Integer: ";
		cin >> num2;

		//Display and Function Call
		cout << num1 << "+" << num2 << "=" << ComputeSum(num1, num2) << endl;
		break; }

	//Subtraction Case
	case 'B':
	case 'b':
	{
		//Variable Declaration
		float num1;
		float num2;

		cout << "Please Enter an Integer: ";
		cin >> num1;
		cout << "Please Enter a Second Integer: ";
		cin >> num2;

		//Display and Function Call
		cout << num1 << "-" << num2 << "=" << ComputeSub(num1, num2) << endl;
		break; }

	//Multiplication Case
	case 'C':
	case 'c':
	{
		//Variable Declaration
		float num1;
		float num2;

		cout << "Please Enter an Integer: ";
		cin >> num1;
		cout << "Please Enter a Second Integer: ";
		cin >> num2;

		//Display and Function Call
		cout << num1 << "x" << num2 << "=" << ComputeMul(num1, num2) << endl;
		break; }

	//Division Case
	case 'D':
	case 'd':
	{
		//Variable Declaration
		float num1;
		float num2;

		cout << "Please Enter an Integer: ";
		cin >> num1;
		cout << "Please Enter a Second Integer: ";
		cin >> num2;

			//While Loop for 0 Input, Unable to Divide by Zero
			while (num2 == 0) {
				cout << "Please Provide an Integer that is Not 0: ";
				cin >> num2;
			}

		//Function Call and Display
		cout << num1 << "/" << num2 << "=" << ComputeDiv(num1, num2);
		break; }

	//Roots Case Along with While Loops for Positive Integer Checks
	case 'E':
	case 'e': 
	{
		//Variable Declaration
		float root; 
		float index;

		cout << "Please Provide a Positive Integer: ";
		cin >> index;

			//While Loop to get Valid User Input
			while (index < 0) {
				cout << "Please Provide a Positive Integer: ";
				cin >> index;
			}

		cout << "Please Provide a Positive Integer for the Root: ";
		cin >> root;

			//While Loop to get Valid User Input
			while (root < 0) {
				cout << "Please Provide a Positive Integer for the Root: ";
				cin >> root;
			}
	
		//Display and Function Call
		cout << index << "root" << root << "=" << computeRoot(index, root) << endl;
		break; }

	//Power Case
	case 'F':
	case 'f':
	{
		//Variable Declaration
		float num1;
		int index;

		cout << "Please Enter an Integer: ";
		cin >> num1;

			//While Loop to get Valid User Input
			while (num1 <= 0) {
				cout << "Please Enter a Valid Integer Greater than Zero: ";
				cin >> num1;
			}
		cout << "Please provide the index: ";
		cin >> index;

			//While Loop to get Valid User Input
			while (index <= 0) {
				cout << "Please Enter a Valid Integer Greater than Zero: ";
				cin >> index;
			}

		//Display and Function Call
		cout << num1 << "^" << index << "=" << computePower(num1, index) << endl;
		break; }

	//Percentage Case
	case 'G':
	case 'g':
	{
		//Variable Declaration
		float num1;
		float num2;

		cout << "Please Enter an Integer: ";
		cin >> num1;
		cout << "Please provide the Percentage: ";
		cin >> num2;

		//Display and Function Call
		cout << num2 << " percent of " << num1 << "=" << ComputePerc(num1, num2) << endl;
		break; }

//Least Common Multiple Case
case 'H':
	case 'h':
	{
		//Variable Declaration
		int num1;
		int num2;

		cout << "Please Enter the First Number: ";
		cin >> num1;
		cout << "Please Enter the Second Number: ";
		cin >> num2;

		//Display and Function Call
		cout << "lcm(" << num1 << "," << num2 << ")" << "=" << computeLCM(num1, num2) << endl;
		break; }

	//Greatest Common Divisor Case
	case 'I':
	case 'i':
	{
		//Variable Declaration
		int num1;
		int num2;

		cout << "Please Enter the First Number: ";
		cin >> num1;
			//While Loop to get Valid User Input
			while (num1 == 0) {
				cout << "Please Enter an Integer that is Not Zero" << endl;
				cin >> num1;
			}
		cout << "Please Enter the Second Number: ";
		cin >> num2;
			//While Loop to get Valid User Input
			while (num2 == 0) {
				cout << "Please Enter an Integer that is Not Zero" << endl;
				cin >> num2;
			}

		//Display and Function Call
		cout << "gcd(" << num1 << "," << num2 << ")" << "=" << computeGCD(num1, num2) << endl;
		break; }

	//Modulus Case
	case 'J':
	case 'j':
	{
		int num1;
		int num2;

		cout << "Please Enter the First Number: ";
		cin >> num1;
		cout << "Please Enter the Second Number: ";
		cin >> num2;

		//Display and Function Call
		cout << num1 << "%" << num2 << "=" << ComputeMod(num1, num2) << endl;
		break; }

	//Exit Message
	case 'L': 
	case 'l':
	{
		ExitMessage();
		return 0;
		break;
	}
		
	//Invalid Case
	default: 
	{
		cout << "Invalid operation selected" << endl; 
	}
		}
	}
	return 0;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/22/2019
//Greeting and Display for User Decision
void WelcomeMessage() {
cout << endl;
cout << "--------------------------------------------------------------------------------" << endl;
cout << " Welcome To My Calculator Project! " << endl;
cout << "--------------------------------------------------------------------------------" << endl;
cout << "A.) Addition" << endl;
cout << "B.) Subtraction" << endl;
cout << "C.) Multiplication" << endl;
cout << "D.) Division" << endl;
cout << "E.) Roots" << endl;
cout << "F.) Power" << endl;
cout << "G.) Percentage" << endl;
cout << "H.) LCM" << endl;
cout << "I.) GCD" << endl;
cout << "J.) Modulus" << endl;
cout << "K.) Quit" << endl;
cout << "--------------------------------------------------------------------------------" << endl;
cout << "Please select an operation: " << endl;

}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/23/2019
//Addition Function
float ComputeSum(float num1, float num2) {
	return num1 + num2;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/23/2019
//Subtraction Function
float ComputeSub(float num1, float num2) {
	return num1 - num2;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/25/2019
//Multiplication Function 
float ComputeMul(float num1, float num2) {
	return num1 * num2;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/25/2019
//Division Function 
float ComputeDiv(float num1, float num2) {
	return num1 / num2;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/25/2019

//Roots Function
float ComputePerc(float num1, float perc) {
	return perc * num1 / 100;
}


//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/25/2019

//Modulus Function
int ComputeMod(int num1, int num2) {
	return num1 % num2;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/28/2019
//Power Function and Computation
float computePower(float x, int n)

{
	//Variable Declaration
	float numProduct = 1.0;
	int i;

	//Power Computation
	for (i = 0; i < n; i++) {
		numProduct *= x;
	}
	return numProduct;

}


//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/28/2019
//Root Function and Computation
float computeRoot(float root, int index)
{
	//Variable Declaration
	float tp;
	float mid;
	float low = 0.0;
	float high = root;

	//Root Computation
	do
	{
		mid = (low + high) / 2;
		if (computePower(mid, index) > root)
			high = mid;
		else
			low = mid;
		mid = (low + high) / 2;
		tp = (computePower(mid, index) - root);
		if (tp < 0)
		{
			tp = -tp;
		}
	} while (tp > .000005);
	return mid;
}



//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/30/2019
//Greatest Common Divisor Function and Computation
int computeGCD(int a, int b)

{
	//Greatest Common Divisor Computation
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/30/2019
//Least Common Multiple Function and Computation
int computeLCM(int a, int b)
{
	return a * b;
}



//Erika Valle-Baird, Created 10/22/2019, Modified Last on: 10/25/2019
//Exit Message
void ExitMessage()
{
	cout << "Thanks for Using my Calculator Program!! Goodbye! " << endl;

}
