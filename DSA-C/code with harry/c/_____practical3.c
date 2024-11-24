#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll_no;
    int eng_marks;
    int maths_marks;
    int science_marks;
};

int main()
{
    struct student s[10];
  

    int avg=0;
    int max_avg=0;
    char ans[100];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of %d student ",i+1);
       scanf("%s",&s[i].name);
    
        printf("Enter the roll number of %d student ",i+1);
        scanf("%d",&s[i].roll_no);
    
        printf("Enter the english marks of %d student ",i+1);
        scanf("%d",&s[i].eng_marks);
    
        printf("Enter the maths marks of %d student ",i+1);
        scanf("%d",&s[i].maths_marks);
    
        printf("Enter the science marks of %d student ",i+1);
        scanf("%d",&s[i].science_marks);

        avg= (s[i].eng_marks + s[i].maths_marks + s[i].science_marks)/3;
        if(max_avg< avg)
        {
            max_avg=avg;
            strcpy(ans,s[i].name);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf(" the name of %d student is %s\n",i,s[i].name);
    
        printf(" the roll number of %d student  is %d\n",i,s[i].roll_no);
        
    
        printf(" the english marks of %d student is %d\n ",i,s[i].eng_marks);
        
    
        printf(" the maths marks of %d student is %d\n ",i,s[i].maths_marks);
        
    
        printf(" the science marks of %d student is %d\n ",i,s[i].science_marks);
        
    }

    
   printf("The student with the highest marks is %s\n",ans);

    return 0;
}