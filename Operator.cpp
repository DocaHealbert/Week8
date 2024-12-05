#include<iostream>
#include<string.h>
using namespace std;

int main(){
	//declaration
	char op;
	int firstNum, secondNum;
	
	//menu
	cout << "\nEnter the operator to calculate two integer numbers";
	cout << " (+, -, *, /, %) : ";
	cin >> op;
	cout << "Enter two integer numbers : ";
	cin >> firstNum >> secondNum;
	
	switch(op)
	{
		case '+' : cout << firstNum << "+" << secondNum << "=" << firstNum + secondNum <<endl;
		break;
		
		case '-' : cout << firstNum << "-" << secondNum << "=" << firstNum - secondNum <<endl;
		break;
		
		case '*' : cout << firstNum << "*" << secondNum << "=" << firstNum * secondNum <<endl;
		break;
		
		case '/' : cout << firstNum << "/" << secondNum << "=" << firstNum / secondNum <<endl;
		break;
		
		case '%' : cout << firstNum << "%" << secondNum << "=" << firstNum % secondNum <<endl;
		break;
		
		default : cout << "Invalid operator" <<endl;
	}
	
	return(0);
}
