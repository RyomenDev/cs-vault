#include <iostream>
#include <conio.h>
using namespace std;

// void getinput(int *, int);
// void showinput(int, int);
// double getaverage(int, int);
// void getinput();
// void showinput();
// double getaverage();
void getinput(int *r, int);
void showinput(int r[], int);
double getaverage(int r[], int);

int main()
{
    system("cls");
    // int arr[5]={5,4,3,2,1};
    int arr[5];
    getinput(arr, 5);
    cout << "\n";
    showinput(arr, 5);
    cout << "\n";
    cout << "average is " << getaverage(arr, 5) << endl;

    getch();
    return 0;
}
void getinput(int *arr, int size) // formal parameter as a pointer
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter " << i + 1 << " value: ";
        cin >> arr[i];
    }
}
void showinput(int arr[5], int size) // formal parameter as sized array
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // sum=sum+i
    }
}
double getaverage(int arr[], int size) // formal parameter as an unsized array
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // sum=sum+arr[i]
    }
    cout<<"sum is "<<sum<<endl;
    double average = (double)sum / size; // sum as double
    return average;
}