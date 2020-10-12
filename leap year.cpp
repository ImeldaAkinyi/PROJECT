/*135179 Akinyi Christine Imelda
127333 Rael Juma Ndege
117666 Cecilia Tengo
118468 Madlean Matsotso
120085 Patricia Nganga
Pauline Kamore*/

/* PSEUDOCODE
program will determine whether a year is a leap year or not
prompt the user to enter  a year
input year

if year is divisible by 4 without a  remainder
output"year is a leap year"
else
otuput"year is NOT a leap year"
*/

//Program that determines whether a given year is a leap year or not
#include<iostream>
using namespace std;

int main(){
	int year;
	cout<<"please enter year"<<endl;
	cin>>year;
	
	bool prime_status=true;
	if(year%4==0){
		prime_status=true;
	}
	if(prime_status==true){
		cout<<year<<" is a leap year"<<endl;
	}
		else{
			cout<<year<<" is NOT a leap year"<<endl;
		}
	return 0;
}
