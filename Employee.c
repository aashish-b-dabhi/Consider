#include<stdio.h>

struct employee{
	
	int emp_id;
 	char emp_name[100];
 	int emp_age;
 	char emp_role[50];
 	char emp_city[50];
 	char emp_experienc[200];
 	char emp_company_name[100];
};

void main()
{
	int n;
	
	printf("Enter Employee Count = ");
	scanf("%d",&n);
	
	struct employee s[n];
	
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter Employee ID = ");
		scanf("%d",&s[i].emp_id);
		printf("Enter Employee Name = ");
		scanf("%s",&s[i].emp_name);
		printf("Enter Employee Age = ");
		scanf("%d",&s[i].emp_age);
		printf("Enter Employee Role = ");
		scanf("%s",&s[i].emp_role);
		printf("Enter Employee City = ");
		scanf("%s",&s[i].emp_city);
		printf("Enter Employee Experience = ");
		scanf("%s",&s[i].emp_experienc);
		printf("Enter Employee Company Name = ");
		scanf("%s",&s[i].emp_company_name);
	}
	
	printf("\n\n------ Employee Details ------\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("Employee ID = %d\n",s[i].emp_id);
		printf("Employee Name = %s\n",s[i].emp_name);
		printf("Employee Age = %d\n",s[i].emp_age);
		printf("Employee Role = %s\n",s[i].emp_role);
		printf("Employee City = %s\n",s[i].emp_city);
		printf("Employee Experience = %s\n",s[i].emp_experienc);
		printf("Employee Company Name = %s\n",s[i].emp_company_name);
	}
}