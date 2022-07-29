#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a;
int b;
int reminder(int a, int b){
	int c=a%b;

	return c;
}

int main(int argc, char** argv) {
		
	cout<<"type 2 numbers \n";
	
	cin>>a>>b;
	cout<<("the reminder is: ");
	cout<<reminder(a,b);
	
	return 0;
}
