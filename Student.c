#include<stdio.h>

struct student{
	
	int stu_id;
 	char stu_name[100];
 	int stu_age;
 	char stu_course[50];
 	char stu_city[50];
 	int stu_std;
 	char stu_school[200];
};

void main()
{
	int n;
	
	printf("Enter Student Count = ");
	scanf("%d",&n);
	
	struct student s[n];
	
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter Student ID = ");
		scanf("%d",&s[i].stu_id);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].stu_name);
		printf("Enter Student Age = ");
		scanf("%d",&s[i].stu_age);
		printf("Enter Student Course = ");
		scanf("%s",&s[i].stu_course);
		printf("Enter Student City = ");
		scanf("%s",&s[i].stu_city);
		printf("Enter Student Std = ");
		scanf("%d",&s[i].stu_std);
		printf("Enter student School = ");
		scanf("%s",&s[i].stu_school);
	}
	
	printf("\n\n--- Student Details ---\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("Studet ID = %d\n",s[i].stu_id);
		printf("Studet Name = %s\n",s[i].stu_name);
		printf("Studet Age = %d\n",s[i].stu_age);
		printf("Studet Course = %s\n",s[i].stu_course);
		printf("Studet City = %s\n",s[i].stu_city);
		printf("Studet Std = %d\n",s[i].stu_std);
		printf("Studet School = %s\n",s[i].stu_school);
	}
}