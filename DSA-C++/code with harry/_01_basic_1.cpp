#include <iostream>
// input stream= direction of flow of bytes takes place from input device to the main memory
// output stream= direction of flow of bytes takes place from the main memory to output device
#include <conio.h>
using namespace std;
int gv1 = 5;
int gv2 = 10;

int main()
{
    system("cls");
    float pi = (char)'d';
    int gv2 = 15; // local var >> global var
    bool a1 = true;
    bool a2 = false;          
    cout << pi << endl;
    cout << gv1 << endl;
    cout << gv2 << endl;
    cout << a1 << endl;
    cout << a2 << endl;
    cout <<"global value of gv2 is " << ::gv2 << endl; //global value represented by ::

    int a = 5, b = 9;
    cout << "following is comparison" << endl;
    cout << "a==b:" << (a == b) << endl;                         // 0
    cout << "a!=b:" << (a != b) << endl;                         // 1
    cout << "a>=b:" << (a >= b) << endl;                         // 0
    cout << "a<=b:" << (a <= b) << endl;                         // 1
    cout << "a>b:" << (a >= b) << endl;                          // 0
    cout << "a<b:" << (a <= b) << endl;                          // 1
    cout << "((a==b) || (a<b)) :" << ((a == b) || (a < b)) << endl; //

    float d=23.56f;
    float d2=23.56;
    long double e= 576.2l;
    long double e2= 576.2;
    cout <<d << endl;
    cout << e << endl;
    cout << d2 << endl;
    cout << e2 << endl;

    cout<<"****************************************************************"<<endl;
    cout <<"the size of 34.4 is "<<sizeof(34.4)<< endl;   //8
    cout <<"the size of 34.4f is "<<sizeof(34.4f)<<endl;  //4
    cout <<"the size of 34.4F is "<<sizeof(34.4F)<<endl;  //4
    cout <<"the size of 34.4l is "<<sizeof(34.4l)<<endl;  //12
    cout <<"the size of 34.4L is "<<sizeof(34.4L)<<endl;  //12

    getch();
    return 0;
}