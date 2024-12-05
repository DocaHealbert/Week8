#include<iostream>
#include<string.h>
using namespace std;

int main(){
	//declaration and initialization
	char code, course[20] = "none";
	int age = 0, subjectTaken = 0;
	float fees = 0;
	
	//menu
	cout << "\t\t\tWELCOME TO EMPIRE COLLEGE" <<endl;
	cout << "\nPlease Enter your Course Code";
	cout << "(I=IT, B=Business, E=Education) : ";
	cin >> code;
	cout <<endl;
	
	//outer decision/if
	if ((code == 'I') || (code == 'i'))
	{	strcpy(course, "IT");
		cout << "Please enter your age: ";
		cin >> age;
			if (age > 25)//inner decision/if
			{	
				cout << "Please enter number of subject taken: ";
				cin >> subjectTaken;
				if (subjectTaken > 5)
					fees = 1200.00;
				else if ((subjectTaken > 2) && (subjectTaken <= 5))
					fees = 900.00;
			}
			else if ((age > 17) && (age <= 25))
				fees = 750.00;
	}
	
	else if ((code == 'B') || (code == 'b'))
	{	strcpy(course, "Business");
		cout << "Please enter your age: ";
		cin >> age;
			if (age > 20)//inner decision/if
			{	
				cout << "Please enter number of subject taken: ";
				cin >> subjectTaken;
				if (subjectTaken > 5)
					fees = 1000.00;
				else if ((subjectTaken > 2) && (subjectTaken <= 5))
					fees = 850.00;
			}
			else if ((age > 17) && (age <= 20))
				fees = 650.00;
	}
	
	else if ((code == 'E') || (code == 'e'))
	{	strcpy(course, "Education");
		cout << "Please enter your age: ";
		cin >> age;
			if ((age > 17) && (age <= 25))//inner decision/if
			{	
				cout << "Please enter number of subject taken: ";
				cin >> subjectTaken;
				if (subjectTaken > 5)
					fees = 950.00;
			}
	}
	
	else
		cout << "Sorry, invalid Course Code.";
		
		cout << "\n\nCourse Code       : " <<course <<endl;
		cout << "Age               : " <<age <<endl;
		cout << "Number of subject : " <<subjectTaken <<endl;
		cout << "Fees              : " <<fees <<endl;
		
	return(0);
}
