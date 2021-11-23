//137339 Peter Chemelil
//Pointers Exercise
/*Here I use pointers to check whether or not two memory addresses were the same. 
I also use an if statement at the end to do this.*/
#include <iostream>
using namespace std;

int main(){
double num1;
double num2;

num1=7.3;

double* pointer;

pointer= &num1;
cout<<"value of num1: ";
cout<< *pointer<<endl<<"\n";

num2 = *pointer;
cout<<"Address of variable num1 using &num1:\n";
cout<< &num1<<endl;
cout<<"Address that the pointer is pointing to:\n";
cout<< pointer<<endl<<"\n";

if (&num1==pointer){
		cout<< "Addresses are the same";
		
	} else 
		cout<<"Addresses are different";

return 0;

}
