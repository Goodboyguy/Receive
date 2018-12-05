#ifndef SGPA_H
#define SGPA_H

void Intro();
void Get_name();
void Get_school();
void Get_department();
void Get_level();
void Get_semester();
int Get_no_of_courses();
float Get_total_units();
float Calc_weighted_average(int);
float Calc_gpa(float &, float &);
void Write_units(float);
void Write_weighted_average(float weighted_average);
void Display_GPA(float gpa);

#endif