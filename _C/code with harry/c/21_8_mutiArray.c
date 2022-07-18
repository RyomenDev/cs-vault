#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int n_students;
scanf("%d",&n_students);
int n_subjects;
scanf("%d",&n_subjects);

int marks[n_students][n_subjects];

for (int i = 0; i < n_students; i++)
{
    for (int j = 0; j < n_subjects; j++)
    {
        printf("enter the marks of student %d in subject %d\n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
    
}


for (int i = 0; i < n_students; i++)
{
    for (int j = 0; j < n_subjects; j++)
    {
        printf("the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
      
    }
    
}

return 0;
}