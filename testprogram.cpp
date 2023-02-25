#include<iostream>
#include "func.h"

using namespace std;

int students()
{
     int num;
     cout << "Enter the total number of students: ";
     cin >> num;
     float* ptr;
     ptr = new float[num];
     cout << "Enter the GPA of students." << endl;
     for (int i = 0; i < num; ++i)
     {
     cout << "Student" << i + 1 << ": ";
     cin >> *(ptr + i);
     }
     cout << "\nDisplaying GPA of students." << endl;
     for (int i = 0; i < num; ++i) {
     cout << "Student" << i + 1 << " :" << *(ptr + i) << endl;
     }
     delete [] ptr;
    return 0;
}

int main()
{
     int x = 10;
     // ref is a reference to x.
     int& ref = x;
     // Value of x is now changed to 20
     ref = 20;
     cout << "x = " << x << endl ;
     // Value of x is now changed to 30
     x = 30;
     cout << "ref = " << ref << endl ;

     students();

     func(10);

     return 0;
}
