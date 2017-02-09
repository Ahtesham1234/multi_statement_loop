//multi_loop.cpp
// lists cubes from 1 to 10

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int numb;     //define the variable
for(numb=1; numb<=10 ; numb++)
{
cout << setw(4) << numb;     //dispaly the first column
int cube = numb*numb*numb;               //calculate cube
cout << setw(6) << cube <<endl;    //displaysecond column
}
return 0;

}
