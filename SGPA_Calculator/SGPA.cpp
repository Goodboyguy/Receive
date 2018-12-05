#include <iostream>
#include <string>
#include "SGPA.h"
using namespace std;

int course, weighted_average;	
float units, gpa;
string name;

void Intro(){
	cout << "Hello! This a C++ program designed by Goodboyguy that calculates your Semester's Grade Point Average. I hope you'd love it \n\n";
}

void Get_name(){
	string name;
	cout << "What is your name? \n";
	cin >> name;
	
}

void Get_school(){
	string school;
	cout << "What is the name of your institution? \n";
	cin >> school;
}

void Get_department(){
	string dept;
	cout << "What department are you in? \n";
	cin >> dept;
}

void Get_level(){
	int level;
	cout << "What level are you? \n";
	cin >> level;
}

void Get_semester(){
	int sem;
	cout << "What semester's GPA do you wanna calculate? \n";
	cin >> sem;
}

int Get_no_of_courses(){
	int course;
	cout << "How many courses did you take? \n";
	cin >> course;
	return course;
}

float Get_total_units(){
	float units;
	cout << "What is your total number of units? \n";
	cin >> units;
	return units;
}

float Calc_weighted_average(int course){
	string grade;
	int unit, points;
	float weighted_average = 0;
	
	for (int x=1; x<= course; x++){
		cout << "Enter your grade \n";
		cin >> grade;
		if (grade == "A"){
		points = 5;
		}else if (grade == "B"){
			points = 4;
		}else if(grade == "C"){
			points = 3;
		}else if (grade == "D"){
			points = 2;
		}else if (grade == "E"){
			points = 1;
		}else if (grade == "F"){
			points = 0;
		}else{
			cout << "You entered an invalid grade, enter a valid grade from A to F \n";
			cin >> grade;
			if (grade == "A" || grade == "a"){
			points = 5;
			}else if (grade == "B" || grade == "b"){
				points = 4;
			}else if(grade == "C" || grade == "c"){
				points = 3;
			}else if (grade == "D" || grade == "d"){
				points = 2;
			}else if (grade == "E" || grade == "e"){
				points = 1;
			}else if (grade == "F" || grade == "f"){
				points = 0;
			}else{
				cout << "You entered an invalid grade, enter a valid grade from A to F \n";
				cin >> grade;
	}
		}
		cout << "Enter the number of units \n";
		cin >> unit;
		weighted_average = weighted_average + (points * unit);
	}
	return weighted_average;
}

float Calc_gpa(float &wa, float &u){
	float gpa = wa/u;
	return gpa;
}

void Write_units(float units){
	cout << "\n The total number of units offered is " << units <<endl;
}

void Write_weighted_average(float weighted_average){
	cout << "The weighted average calculated is " << weighted_average << endl;
}

void Display_GPA(float gpa){
	cout << "Hello, your semester's grade point average is " << gpa <<endl;
}