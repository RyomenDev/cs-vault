/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void display(); //fuction prototype

int main()
{
    int a;
    printf("initialising display function\n");
    display();   //function call
    printf("display function finished its work\n");


return 0;
}

//function defination
void display()
{
    printf("this is display\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
goodmorning();
goodafternoon();
goodnight();

return 0;
}

void goodmorning()
{
    printf("wish u good morning\n");
}
void goodafternoon()
{
    printf("wish u good afternoon\n");
}
void goodnight()
{
    printf("wish u good night\n");
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
goodmorning();

return 0;
}

void goodmorning()
{
    printf("wish u good morning\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("wish u good afternoon\n");
    goodnight();
}
void goodnight()
{
    printf("wish u good night\n");
    
}