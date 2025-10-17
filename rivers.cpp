#include <iostream>
using namespace std;

void example1(){
string riverName = "Abay";
   	string lakeName = "Tana";
   	int surfaceArea = 3500;
   	int width = 66;
   	int length = 3500;
   	bool transBoundary = false;
  	cout<< "The largest lake in Ethiopia is " << lakeName << endl;
  	cout<< "It is the source of the river " << riverName << endl;
cout<< lakeName <<"covers an area of" <<surfaceArea << " square km"<<endl;
cout<< "It is  " << width<< " km wide and "<< length << "km long "<<endl;
cout<< "Is transboundary? " << transBoundary <<endl;
lakeName = "Nigat";
cout<< "The largest lake in Ethiopia is " << lakeName << endl;

}
int main() {
	example1();
    example1();
	return 0;
}
/*
Questions
1.	What is the output of the above code fragment??
The largest lake in Ethiopia is Tana
It is the source of the river Abay
Tanacovers an area of 3500 square km
It is 66 km wide and 3500 k long
Is transboundary? false - unexpested answer - it gave zero not false since false is not under quote.

2.	How can we change the largest Lake from “Tana” to “Nigat”?
lakename = "Nigat"
3.	What else should we change in the code fragment if we change “Tana” to “Nigat”? 
It is the source of the river - this should be changed to "It is not...
and its corresponding length width and transboundary state should be used.
*/