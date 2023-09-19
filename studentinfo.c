#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  student_info{
	char fname[30];
	char lname[30];
	char dob[11];	//01-01-2000
	char course[4];	// TDC or HS
	char contact[11]; //contact number- 9876543210
	char email[40];
};
typedef struct student_info student;


student *salloc();	//allocates memory for one student
void read_students(student *students, int h); //read an array of students 
void display_students(student *students,int l, int h); //display an array of students from index l to h
void search(student *students,int l, int h, char *fname);		//search student by first name
int main()
{
	student *students;		//array to keep students' info
	int count, l, h;
	printf("How many students:");
	scanf("%d", &count);
	l=0,h=count;

	students = (student *)malloc(count * sizeof(student));
	read_students(students, h);
	display_students(students,l,h);
	return 0;
}

student *salloc()
{
	student *temp;
	temp = (student *)malloc(sizeof(student));
	return temp;
}
void read_students(student *students, int n) //read an array of students 
{
	int i;
	printf("reading %d students' info.....\n",n);

	for(i=0; i<n; ++i)
	{
		printf("Input first name:");
		scanf("%s", students[i].fname);
		printf("Input last name:");
		scanf("%s", students[i].lname);
		printf("Date of birth <DD-MM-YYYY>:");
		scanf("%s", students[i].dob);
		printf("Input course <HS/TDC>:");
		scanf("%s", students[i].course);
		printf("Input contact number <9876543210>:");
		scanf("%s", students[i].contact);
		printf("Email <student@student.domain>:");
		scanf("%s", students[i].email);
	}
}
void display_students(student *students,int l, int h) //display an array of students from index l to h
{
	printf("Displaying %d students info <%d, %d>\n", h-l, l, h);
	int i;
	for(i=l; i<h; ++i)
	{
		printf("...............\n");	
		printf("\tName: %s %s\n", students[i].fname, students[i].lname);
		printf("\tDate of birth %s\n", students[i].dob);
		printf("\tCourse : %s\n", students[i].course);
		printf("\tContact number: %s\n", students[i].contact);
		printf("\tEmail: %s\n", students[i].email);
		printf("...............\n");	
	}

}
void search(student *students,int l, int h, char *fname)	//search student by first name
{

}
