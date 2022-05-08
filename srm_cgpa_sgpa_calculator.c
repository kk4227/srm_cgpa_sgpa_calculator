#include <stdio.h>
#include <stdlib.h>

struct semester_result
{
	float sgpa;
	int semester_credit;
};

struct semester_result sgpa_calculator(int semester)
{
	int number_of_subjects;
	printf("\n---------------------------- Calculating SGPA for Semester %d ----------------------------\n", semester);
	printf("Enter number of subjects in semester: ");
	scanf("%d", &number_of_subjects);

	int *credits;
	credits = malloc(sizeof(int) * number_of_subjects);
	printf("Enter credits of each %d subject seperated by \" \" (space): ", number_of_subjects);
	for (int i = 0; i < number_of_subjects; i++)
	{
		scanf("%d", &credits[i]);
	}

	int *grades;
	grades = malloc(sizeof(int) * number_of_subjects);
	printf("Enter Grade Points (10, 9, 8, 7, 6, 5, 0, 0, 0) of each %d subject in same order as credits seperated by \" \" (space): ", number_of_subjects);
	for (int i = 0; i < number_of_subjects; i++)
	{
		scanf("%d", &grades[i]);
	}

	float sgpa_num = 0.0;
	float sgpa_deno = 0.0;
	for (int i = 0; i < number_of_subjects; i++)
	{
		sgpa_num += credits[i] * grades[i];
		sgpa_deno += credits[i];
	}

	float sgpa = sgpa_num / sgpa_deno;
	printf("Your SGPA for %d semester is %.2f\n", semester, sgpa);

	struct semester_result result;
	result.sgpa = sgpa;
	result.semester_credit = sgpa_deno;
	printf("--------------------------------------------------------\n");
	return result;
}

int main()
{
	int number_of_semesters;
	printf("Enter number of semester: ");
	scanf("%d", &number_of_semesters);

	float cgpa_num = 0.0;
	float cpga_deno = 0.0;
	for (int i = 1; i <= number_of_semesters; i++)
	{
		struct semester_result sgpa = sgpa_calculator(i);

		cgpa_num += sgpa.sgpa * sgpa.semester_credit;
		cpga_deno += sgpa.semester_credit;
	}

	float cgpa = cgpa_num / cpga_deno;

	printf("Your CGPA is %.2f", cgpa);
	return 0;
}
