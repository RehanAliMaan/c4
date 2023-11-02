#include<iostream>
#include<iomanip>
using namespace std;
void karachi(){
	cout << "I am in Karachi" << endl;
	
}
void lahore(){
	cout << "I am in lahore" << endl;
karachi();
cout << "I am back in lahore" << endl;

}
int main(){
	cout << "I am in main" << endl;
	lahore();
cout << "I am back in main" << endl;
	return 0;
}