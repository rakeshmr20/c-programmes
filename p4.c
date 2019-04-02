#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
char name[10];
int id;
int sal;
};
typedef struct employee NAME;
NAME stud[10], temp[10];

void main()
{
int no,i;

void sort(int N); /* Function declaration */

fflush(stdin);

printf("Enter the number of employee in the list\n");
scanf("%d",&no);

for(i = 0; i < no; i++)
{
printf("\nEnter the name of employee %d : ", i+1);
fflush(stdin);
gets(stud[i].name);

printf("Enter the id number of %d : ", i+1);
scanf("%d",&stud[i].id);
printf("Enter the salary of %d : ", i+1);
scanf("%d",&stud[i].sal);
temp[i] = stud[i];
}

printf("\n*****************************\n");
printf (" Names before sorting \n");
/* Print the list of names before sorting */
for(i=0;i<no;i++)
{
printf("%-10s\t%3d\t%d\n",temp[i].name,temp[i].id,temp[i].sal);
}

sort(no); /* Function call */

printf("\n*****************************\n");
printf (" Names after sorting \n");
printf("\n*****************************\n");
/* Display the sorted names */
for(i=0;i<no;i++)
{
printf("%-10s\t%3d\n",stud[i].name,stud[i].id,stud[i].sal);

}
printf("\n*****************************\n");
} /* End of main() */

/* Function to sort the given names */
void sort(int N)
{
int i,j;
NAME temp;

for(i = 0; i < N-1;i++)
{
for(j = i+1; j < N; j++)
{
if(strcmp(stud[i].name,stud[j].name) > 0 )
{
temp = stud[i];
stud[i] = stud[j];
stud[j] = temp;
}
}
}
}