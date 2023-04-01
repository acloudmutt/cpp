#include<iostream>
#include "func.h"
#include "utility_functions.h"

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

void displaymenu()
{
     cout << endl;
     cout<<"===================================================== \n";
     cout<<" \t\tMENU \t \n ";
     cout<<"===================================================== \n";
     cout<<" 1.students\n";
     cout<<" 2.func\n";
     cout<<" 3.reverse string\n";
     cout << endl;
}


int main()
{
     string st[20];
     int itemcount = 0;
 
     //function to display Menu
 
     displaymenu(); 
     int yourchoice;
     string confirm;
     do
     {          
          cout<<"Enter your choice(1-2):";
          cin>>yourchoice;
          switch (yourchoice)
          {
               case 1:
                    students();                    
                    break;
               case 2:
                    func(10);                    
                    break;
               case 3:
                    reverse_str();                    
                    break;

               default:
                    cout<<endl << "invalid" << endl;                                       
                    break;
          }
          cout<<"Press y or Y to continue:";
          cin>>confirm;

          if(confirm == "y" || confirm == "Y")
               displaymenu();

     } while (confirm == "y" || confirm == "Y");
     
     cout << endl;

     int x = 10;
     // ref is a reference to x.
     int& ref = x;
     // Value of x is now changed to 20
     ref = 20;
     cout << "x = " << x << endl ;
     // Value of x is now changed to 30
     x = 30;
     cout << "ref = " << ref << endl ;

     //students();

     //func(10);

     return 0;
}
