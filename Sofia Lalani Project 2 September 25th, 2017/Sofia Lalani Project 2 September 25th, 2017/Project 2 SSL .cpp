/* Sofia Lalani- September 25th, 2017 4th Period- Hudson

Project Problem 2: Take_In_Data

Create code for all data types to handle all users and use addition, subtraction, multiplication, and division to compute values */

// Libraries
#include <iostream> // gives access to  cin, cout, cndl; <<, >>, boolalpha, noboolalpha;
#include <conio.h> // gives access to _kbhit() and _getch() for pause()\

//Namespces
using namespace std; //*

//Functions()
void pause() {
	cout << "Press any key to continue ....";
	while (!_kbhit()); 
	_getch(); 
	cout << '\n'; 
}
 //MAIN
void main() {
	// Variables
	int candy; // How much candy did you get on Halloween?; 
	char first_letter; //  What is the first letter of the last name of your Physics teacher?; 
	double seconds; // Exactly how long did it take to drop the egg from the top of the roof? ; 
	float number_people;  // How many people in the world go to school (in millions)? ; 
	bool truth; // Is it true that you got the highest grade on the quiz? ; }
    int calc_1, calc_2, calc_3, calc_4, calc_5; 


// User Queries 
	cout << "How much candy did you get on Halloween?:";
	cin >> candy;
	cout << " What is the first letter of the last name of your Physics teacher :";
	cin >> first_letter;
	cout << " Exactly how long did it take to drop the egg from the top of the roof? :";
	cin >> seconds;
	cout << "How many people in the world go to school?";
	cin >> number_people;
	cout << "Is it true that you got the highest grade on the quiz? :";
	cin >> truth;
	cout << 1;
	cin >> calc_1;
	cout << 2; 
	cin >> calc_2; 
	cout << 3; 
	cin >> calc_3;
	cout << 4;
	cin >> calc_4; 
    cout << 5;
	cin >> calc_5; 


	// After questions print out stored data
	cout << " Wow! You got" << candy << "I did not get that much" << endl;
	cout << " That is cool that your physics teacher's last name starts with" << first_letter << "My teacher's is W." << endl;
	cout << " I did not expect it to take" << seconds << " I thought it would take longer" << endl;
	cout << "I did not know it would be" << number_people << "I expected it to be more" << endl;
	cout << " I did not know it was" << truth << "that you got the highest grade. I did well too!" << endl; 

	pause(); 

	//  Do some calculations 
	cout << calc_1 << "+" << calc_3 << "=" << calc_1 + calc_3 << endl; 
	cout << calc_5 << "-" << calc_4 << "=" << calc_5 - calc_4 << endl; 
	cout << calc_4 << "/" << calc_2 << "=" << calc_4 / calc_2 << endl; 
	cout << calc_5 << "*" << calc_4 << "=" << calc_5 * calc_4 << endl; 




} 

