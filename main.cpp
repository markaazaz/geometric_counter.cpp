#include <iostream>
using namespace std;

int main(){
    // circle,triangle,square,rectangle 
    // Area of circle = phi*r*r
    // Area of triangle = 1/2.base.height
    // Area of square = a*a
    // Area of rectangle = length*width

    // make some options
    // 1. Count Area of circle --> input phi*r*r
    // 2. Count Area of triangle --> input 1/2.base.height
    // 3. Count Area of square --> input a*a
    // 4. Count Area of rectangle --> input length*width
  
    int number; // declare a variable to let user input 1-5
    float r,total,base,height,area,length,width,ParaBase,ParaHeight; // declare some variables that can be used to calculate all geometric objects
    string user;
    do
    {          
    cout << "== Geometric Calculator =="<<endl;
    cout << "\n";
    cout << "1. Count Area of Circle \n";
    cout << "2. Count Area of Triangle \n";
    cout << "3. Count Area of Square \n";
    cout << "4. Count Area of Rectangle \n";
    cout << "5. Count Area of Parallelogram \n";
    cout << "\n";
    cout << "Select the number :"; // user have to input 1-5 
    cin  >> number; // input has been sent in this variable

    switch (number){
    case 1:
        cout << "Input the r : ";
        cin  >> r;
        total = 3.14*r*r;
        cout << "Area of Circle is " << total << "cm2" << endl;
        break;

    case 2:
        cout<< "Input the base : ";
        cin>> base;
        cout << "Input the height : ";
        cin >> height;
        total = 0.5*(base*height);
        cout << "Area of Triangle is " << total <<"cm2" << endl;
        break;

    case 3:
        cout << "Input the area : ";
        cin >> area;
        total = area*area;
        cout << "Area of Square is " << total << "cm2" << endl;
        break;

    case 4:
        cout << "Input the length : ";
        cin >> length;
        cout << "Input the width : ";
        cin >> width;
        total = length*width;
        cout << "Area of Rectangle is " << total <<"cm2" << endl;
        break;

    case 5:
        cout << "Input the base : ";
        cin >> ParaBase;
        cout << "Input the height : ";
        cin >> ParaHeight;
        total = ParaBase*ParaHeight;
        cout << "Area of Parallelogram is " << total <<"cm2" << endl;
        break;

        default:
        cout << "Oh No!You're Lost" << endl; // if user input in outside 1-5, then program will say like this
    } 
    cout << "Do you want to continue? (Y/N): "; // tell user if they want to continue or not?
    cin  >> user;
    } while ((user == "Y") || (user == "y")); // make some conditions, if user doesnt want to continue then program will execute "goodbye!" as the end result program
    cout << "goodbye!";
}                       
