//Q-29.WAP to show difference between structure and union#include
#include<stdio.h>
#include<string.h>
struct employee{
      int id;
      char name[100];
};
union employee{
     int emp_id;
     char emp_name[100];
};
int main()
{
	struct employee s1;
	union employee u1;
	//structure
	printf("Enter employee name\n");
	scanf("%s",&s1.name);
	printf("Enter employee id\n");
	scanf("%d",&s1.id);
	printf("name of employee is %s and id is %d",s1.name,s1.id);
	//union
	printf("Enter employee id\n");
	scanf("%d",u1.&emp_id);
	printf("employee id is %d",u1.emp_id);
	printf("Enter employee name\n");
	scanf("%s",u1.&emp_name);
	printf("employee name is %s",u1.emp_name);
	return 0;
}
