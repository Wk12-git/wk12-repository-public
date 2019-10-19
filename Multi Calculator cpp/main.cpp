#include <iostream>
#include <fstream>
#include <math.h>
#include <cmath>
#include <conio.h>
#include <string>
//header file directories
#include "FractionCalc.h"
#include "BasicCalculations.h"
#include "InfiniteSequences.h"
#include "AverageCalc.h"
using namespace std;

int hcf(int e2, int f2) {
	int hcfAnswer;

	while (e2 != f2) {
		if (e2 > f2)
			e2 -= f2;
		else
			f2 -= e2;
	}
	return hcfAnswer = e2;
}


int main() {
    ofstream history("multi_calc_history.txt");
	int firstNumOfAdd;
	int secNumOfAdd;
	int firstNumOfSub;
	int secNumOfSub;
	int firstNumOfMulti;
	int secNumOfMulti;
	int firstNumOfDiv;
	int secNumOfDiv;
	int firstNumOfLcm;
	int secNumOfLcm;
    AverageCalc AverageOf2;
    AverageCalc AverageOf3;
    AverageCalc AverageOf4;
    AverageCalc AverageOf5;
	string respond;
	cin >> respond;
	if (respond == "+") {
        BasicCalculations addNums;
		cout << "Enter 2 numbers: " << endl;
		cin >> firstNumOfAdd;
		cin >> secNumOfAdd;
		addNums.addNumbers(firstNumOfAdd + secNumOfAdd);

	}
	else if (respond == "-") {
	    BasicCalculations subNums;
		cout << "Enter 2 numbers: " << endl;
		cin >> firstNumOfSub;
		cin >> secNumOfSub;
		subNums.subNumbers(firstNumOfSub - secNumOfSub);
	}
	else if (respond == "*") {
	    BasicCalculations multiplyNums;
		cout << "Enter  2 numbers" << endl;
		cin >> firstNumOfMulti;
		cin >> secNumOfMulti;
		multiplyNums.multiplyNumbers(firstNumOfMulti * secNumOfMulti);
	}
	else if (respond == "/"){
	    BasicCalculations divNums;
		cout << "Enter 2 numbers" << endl;
		cin >> firstNumOfDiv;
		cin >> secNumOfDiv;
		divNums.divideNumbers(firstNumOfDiv / secNumOfDiv);
	}
	else if (respond == "hcf" || respond == "HCF") {
		int a, b, c;
		cout << "Enter two numbers: " << endl;
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;

		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		cout << "HCF = " << a << endl;
	}
	else if (respond == "lcm" || respond == "LCM") {
		int nmax;
		cout << "Enter 2 numbers" << endl;
		cin >> firstNumOfLcm;
		cin >> secNumOfLcm;
		nmax = (firstNumOfLcm > secNumOfLcm) ? firstNumOfLcm : secNumOfLcm;
		while (1) {
			if ((nmax % firstNumOfLcm == 0) && (nmax % secNumOfLcm == 0)) {
				cout << "LCM: " << nmax;
				break;
			}
			++nmax;
		}
	}
	else if (respond == "fAdd") {
		FractionCalc fractionAdder;

		cout << "Enter Nominator of first fraction: " << endl;
		cin >> fractionAdder.firstFractionNom;
		cout << "Enter Denominator of first fraction: " << endl;
		cin >> fractionAdder.firstFractionDenom;
		cout << "Enter Nominator of second fraction: " << endl;
		cin >> fractionAdder.secFractionNom;
		cout << "Enter Denominator of second fraction: " << endl;
		cin >> fractionAdder.secFractionDenom;

        fractionAdder.sumNomFraction = (fractionAdder.firstFractionNom * fractionAdder.secFractionDenom) + (fractionAdder.firstFractionDenom * fractionAdder.secFractionNom);
		fractionAdder.sumDenomFraction = fractionAdder.firstFractionDenom * fractionAdder.secFractionDenom;
		cout << "Fraction is: " << fractionAdder.sumNomFraction << "/" << fractionAdder.sumDenomFraction << endl;
        fractionAdder.simpSumNomFraction = fractionAdder.sumNomFraction / hcf(fractionAdder.sumNomFraction, fractionAdder.sumDenomFraction);
        fractionAdder.simpSumDenomFraction = fractionAdder.sumDenomFraction / hcf(fractionAdder.sumNomFraction, fractionAdder.sumDenomFraction);
        cout << "Simplified version: " << fractionAdder.simpSumNomFraction << "/" << fractionAdder.simpSumDenomFraction << endl;
	}
	else if (respond == "fSub") {
		FractionCalc fractionSubstracter;
		cout << "Enter Nominator of first fraction: " << endl;
		cin >> fractionSubstracter.firstFractionNom;
		cout << "Enter Denominator of first fraction: " << endl;
		cin >> fractionSubstracter.firstFractionDenom;
		cout << "Enter Nominator of second fraction: " << endl;
		cin >> fractionSubstracter.secFractionNom;
		cout << "Enter Denominator of second fraction: " << endl;
		cin >> fractionSubstracter.secFractionDenom;

		fractionSubstracter.sumNomFraction = (fractionSubstracter.firstFractionNom * fractionSubstracter.secFractionDenom) - (fractionSubstracter.firstFractionDenom * fractionSubstracter.secFractionNom);
		fractionSubstracter.sumDenomFraction = fractionSubstracter.firstFractionDenom * fractionSubstracter.secFractionDenom;
		cout << "Fraction is: " << fractionSubstracter.sumNomFraction << "/" << fractionSubstracter.sumDenomFraction << endl;
		fractionSubstracter.simpSumNomFraction = fractionSubstracter.sumNomFraction / hcf(fractionSubstracter.sumNomFraction, fractionSubstracter.sumDenomFraction);
		fractionSubstracter.simpSumDenomFraction = fractionSubstracter.sumDenomFraction / hcf(fractionSubstracter.sumNomFraction, fractionSubstracter.sumDenomFraction);
		if (fractionSubstracter.sumNomFraction == fractionSubstracter.sumDenomFraction)
			cout << "Answer is 1" << endl;
		else
			cout << "Simplified version: " << fractionSubstracter.simpSumNomFraction << "/" << fractionSubstracter.simpSumDenomFraction << endl;
	}
	else if (respond == "fMulti") {
		FractionCalc fractionMulti;

		cout << "Enter Nominator of first fraction: " << endl;
		cin >> fractionMulti.firstFractionNom;
		cout << "Enter Denominator of first fraction: " << endl;
		cin >> fractionMulti.firstFractionDenom;
		cout << "Enter Nominator of second fraction: " << endl;
		cin >> fractionMulti.secFractionNom;
		cout << "Enter Denominator of second fraction: " << endl;
		cin >> fractionMulti.secFractionDenom;

		fractionMulti.sumNomFraction = fractionMulti.firstFractionNom * fractionMulti.secFractionNom;
		fractionMulti.sumDenomFraction = fractionMulti.secFractionNom * fractionMulti.secFractionDenom;

		cout << "Fraction is: " << fractionMulti.sumNomFraction << "/" << fractionMulti.sumDenomFraction << endl;

		fractionMulti.simpSumNomFraction = fractionMulti.sumNomFraction / hcf(fractionMulti.sumNomFraction, fractionMulti.sumDenomFraction);
		fractionMulti.simpSumDenomFraction = fractionMulti.sumDenomFraction / hcf(fractionMulti.sumNomFraction, fractionMulti.sumDenomFraction);
		if (fractionMulti.sumNomFraction == fractionMulti.sumDenomFraction)
			cout << "Answer is 1" << endl;
		else
			cout << fractionMulti.simpSumNomFraction << "/" << fractionMulti.simpSumDenomFraction << endl;
	}
	else if (respond == "fDiv") {
		FractionCalc fractionDiv;

		cout << "Enter Nominator of first fraction: " << endl;
		cin >> fractionDiv.firstFractionNom;
		cout << "Enter Denominator of first fraction: " << endl;
		cin >> fractionDiv.firstFractionDenom;
		cout << "Enter Nominator of second fraction: " << endl;
		cin >> fractionDiv.secFractionNom;
		cout << "Enter Denominator of second fraction: " << endl;
		cin >> fractionDiv.secFractionDenom;

		fractionDiv.sumNomFraction = fractionDiv.firstFractionNom * fractionDiv.secFractionDenom;
		fractionDiv.sumDenomFraction = fractionDiv.firstFractionDenom * fractionDiv.secFractionNom;

		cout << "Fraction is: " << fractionDiv.sumNomFraction << "/" << fractionDiv.sumDenomFraction << endl;

		fractionDiv.simpSumNomFraction = fractionDiv.sumNomFraction / hcf(fractionDiv.sumNomFraction, fractionDiv.sumDenomFraction);
		fractionDiv.simpSumDenomFraction = fractionDiv.sumDenomFraction / hcf(fractionDiv.sumNomFraction, fractionDiv.sumDenomFraction);
		if (fractionDiv.sumNomFraction == fractionDiv.sumDenomFraction)
			cout << "Answer is 1" << endl;
		else
			cout << fractionDiv.simpSumNomFraction << "/" << fractionDiv.simpSumDenomFraction << endl;
	}
	else if (respond == "factorial") {
		int factorialNum;
		int factorialSum = 1;
		cout << "Enter Number: " << endl;
		cin >> factorialNum;
		for (int i = 1; i <= factorialNum; i++)
			factorialSum = factorialSum * i;
		cout << "Factorial of " << factorialNum << "is: " << factorialSum << endl;
	}
	else if (respond == "seqAdd") {
		int lastNumOfInfSeq;
		int sumInfSeq = 0;
		cout << "Enter number: " << endl;
		cin >> lastNumOfInfSeq;
		for(int i = 1; i <= lastNumOfInfSeq; i++)
            sumInfSeq = sumInfSeq + i;
        cout << "Sum is: " << sumInfSeq << endl;
	}
	else if (respond == "quadratics"){
        float x1;
        float x2;
        int a;
        int b;
        int c;
        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "Enter c: " << endl;
        cin >> c;
        x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
        x2 = (-b-sqrt((b*b)-4*a*c))/(2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

	}
	else if(respond == "fSquare"){
        FractionCalc fractionPower;
        cout << "Enter Nominator of fraction" << endl;
        cin >> fractionPower.firstFractionNom;
        cout << "Enter Denominator of fraction" << endl;
        cin >> fractionPower.firstFractionDenom;
        fractionPower.sumNomFraction = pow(fractionPower.firstFractionNom, 2);
        fractionPower.sumDenomFraction = pow(fractionPower.firstFractionDenom, 2);
        cout << "Fraction is: " << fractionPower.sumNomFraction << "/" << fractionPower.sumDenomFraction << endl;
	}
	else if(respond == "pow"){
        BasicCalculations power;
        cout << "Enter power base: " << endl;
        cin >> power.powerBase;
        cout << "Enter power exponent: " << endl;
        cin >> power.powerExponent;
        power.powerSum = pow(power.powerBase, power.powerExponent);
        cout << "Answer is: " << power.powerSum << endl;
	}
	else if(respond == "multiplyPowers"){
        BasicCalculations multiPowers;

        cout << "NOTE: This is only to add numbers with powers that have the same base.\n" << endl;
        cout << "Enter first power base: ";
        cin >> multiPowers.powerBase;
        cout << "Enter first power exponent: ";
        cin >> multiPowers.powerExponent;
        cout << "Enter second power base: ";
        cin >> multiPowers.powerBase2;
        cout << "Enter second power exponent: ";
        cin >> multiPowers.powerExponent2;
        if(multiPowers.powerBase2 != multiPowers.powerBase)
            cout << "Both bases must be the same." << endl;
        else{
            multiPowers.powerExponentSum = multiPowers.powerExponent + multiPowers.powerExponent2;
            cout << "\nAnswer is: " << multiPowers.powerBase << "^" << multiPowers.powerExponentSum << endl;
        }
	}
	else if(respond == "dividePowers"){
        BasicCalculations divPowers;

        cout << "NOTE: This is only to add numbers with powers that have the same base.\n" << endl;
        cout << "Enter first power base: ";
        cin >> divPowers.powerBase;
        cout << "Enter first power exponent: ";
        cin >> divPowers.powerExponent;
        cout << "Enter second power base: ";
        cin >> divPowers.powerBase2;
        cout << "Enter second power exponent: ";
        cin >> divPowers.powerExponent2;
        if(divPowers.powerBase2 != divPowers.powerBase)
            cout << "Both bases must be the same." << endl;
        else{
            divPowers.powerExponentSum = divPowers.powerExponent - divPowers.powerExponent2;
            cout << "\nAnswer is: " << divPowers.powerBase << "^" << divPowers.powerExponentSum << endl;
        }
	}
	else if(respond == "infAdd"){
        ofstream infinite_addition("infinite_addition_full_list.txt");
        InfiniteSequences infAdd;
        cout << "Enter a number: " << endl;
        cin >> infAdd.infAddNum;

        for(int i = 1; i <= infAdd.infAddNum; i++){
            infAdd.infAddSum += i;
            infinite_addition << i << " + ";
        }
        cout << "Sum is: " << infAdd.infAddSum << endl;
        cout << "Check your new created text document if you want all of the numbers that go up to " << infAdd.infAddSum << endl;


	}
	else if(respond == "infFractionAdder"){
        InfiniteSequences infFractionAdder;
        cout << "\nInfinite Fraction Adder" << endl;
        cout << "Enter nominator: " << endl;
        cin >> infFractionAdder.nominator;
        cout << "Enter denominator: " << endl;
        cin >> infFractionAdder.denominator;

        for(int i = 1; i <= infFractionAdder.nominator; i++){
            infFractionAdder.infFractionNomSum += i;
            infFractionAdder.infFractionDenomSum += i;
        }
        cout << "\n" << "Answer is: " << infFractionAdder.infFractionNomSum << "/" << infFractionAdder.infFractionDenomSum << endl;




	}
    else if(respond == "Average" || respond == "average"){
        int switchNum;
        cout << "Type in the amount of numbers you want to find the average of (up to 5)" << endl;
        cin >> switchNum;
        switch(switchNum){
case 2:
        cout << "Type in 2 numbers: " << endl;
        cin >> AverageOf2.averageNum1;
        cin >> AverageOf2.averageNum2;

        AverageOf2.averageNumSum = (AverageOf2.averageNum1 + AverageOf2.averageNum2) / 2;
        cout << "Average is: " << AverageOf2.averageNumSum << endl;
        break;
case 3:
        cout << "Type in 3 numbers: " << endl;
        cin >> AverageOf3.averageNum1;
        cin >> AverageOf3.averageNum2;
        cin >> AverageOf3.averageNum3;

        AverageOf3.averageNumSum = (AverageOf3.averageNum1 + AverageOf3.averageNum2 + AverageOf3.averageNum3) / 3;
        cout << "Average is: " << AverageOf3.averageNumSum << endl;
        break;
case 4:
        cout << "Type in 4 numbers: " << endl;
        cin >> AverageOf4.averageNum1;
        cin >> AverageOf4.averageNum2;
        cin >> AverageOf4.averageNum3;
        cin >> AverageOf4.averageNum4;

        AverageOf4.averageNumSum = (AverageOf4.averageNum1 + AverageOf4.averageNum2 + AverageOf4.averageNum3 + AverageOf4.averageNum4) / 4;
        cout << "Average is: " << AverageOf4.averageNumSum << endl;
        break;
case 5:
        cout << "Type in 5 numbers: " << endl;
        cin >> AverageOf5.averageNum1;
        cin >> AverageOf5.averageNum2;
        cin >> AverageOf5.averageNum3;
        cin >> AverageOf5.averageNum4;
        cin >> AverageOf5.averageNum5;

        AverageOf5.averageNumSum = (AverageOf5.averageNum1 + AverageOf5.averageNum2 + AverageOf5.averageNum3 + AverageOf5.averageNum4 + AverageOf5.averageNum5) / 5;
        cout << "Average is: " << AverageOf5.averageNumSum << endl;
        break;
        }

    }
ofstream last_calculated_average("last_calculated_avrg.txt");
last_calculated_average << "Last calculated average of 2: " << AverageOf2.averageNumSum << "\n" <<
"Last calculated average of 3: " << AverageOf3.averageNumSum << "\n" << "Last calculated average of 4: " <<
AverageOf4.averageNumSum << "\n" << "Last calculated average of 5: " << AverageOf5.averageNumSum << "\n";
		return 0;
}//end of main()
