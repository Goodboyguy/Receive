#include <iostream>
#include <string>
#include "SGPA.h"
using namespace std;
	
int main()
{
	int course;
	float units, weighted_average, gpa;
	Intro();
	Get_name();
	Get_school();
	Get_department();
	Get_level();
	Get_semester();
	course = Get_no_of_courses();
	units = Get_total_units();
	weighted_average = Calc_weighted_average(course);
	gpa = Calc_gpa(weighted_average, units);
	Write_units(units);
	Write_weighted_average(weighted_average);
	Display_GPA(gpa);
	
	system("pause");
}


