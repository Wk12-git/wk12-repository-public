#include "BasicCalculations.h"
#include <iostream>
#include <fstream>
using namespace std;
ofstream history("multi_calc_history.txt");
void BasicCalculations::subNumbers(int sumSub) {
	cout << "Answer is: " << sumSub << endl;
	history << "Your last subtraction sum was: " << sumSub << "\n";
	history.close();
}
void BasicCalculations::addNumbers(int sumAdd) {
	cout << "Answer is: " << sumAdd << endl;
	history << "Your last addition sum was: " << sumAdd << "\n";
	history.close();
}
void BasicCalculations::multiplyNumbers(int sumMulti) {
	cout << "Answer is: " << sumMulti << endl;
	history << "Your last multiplication sum was: " << sumMulti << "\n";
	history.close();
}
void BasicCalculations::divideNumbers(int sumDiv) {
	cout << "Answer is: " << sumDiv << endl;
	history << "Your last division sum was: " << sumDiv << "\n";
	history.close();
}
