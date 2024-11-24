#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");
unsigned int num=-1;
int x = num;
cout<<num<<" , "<<x;    //4294967295 , -1
getch();
return 0;
}

/*
(-1)--->the binary equivalent is converted to it's 2;s compliment

-1 ----> the binary equivalent in 32 bits format:
       
                    00000000000000000000000000000001
 1's compliment     11111111111111111111111111111110  

 2's compliment     11111111111111111111111111111110  
                                             +     1
                    --------------------------------                         
                    11111111111111111111111111111111   

                    binary to decimal conveter
                    we get (4294967295) for  (11111111111111111111111111111111).                    
                    
*/