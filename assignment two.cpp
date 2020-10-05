//program to illustrate if staatement
#include<iostream>
using namespace std;

int main(){
	char grade;
	int aCount=0,bCount=0,cCount=0,dCount=0,fCount=0;
	cout<<"enter grade the letter grades"<<endl<<"enter the EOF character to end input"<<endl;
	cin>>grade;
	if(grade!=EOF)
	
	if(grade=='a'){
		++aCount;
			}
	else if(grade=='b'){
		++bCount;
	}
	else if(grade=='c'){
		++cCount;
	}
	else if(grade=='d'){
		++dCount;
	}
	else if(grade=='f'){
		++fCount;
	}
	else{
		cout<<"incorrect letter grade entered"<<endl<<"enter a new letter grade"<<endl;
	}
	cout<<"totals for each grade entered are:"<<"\nA:"<<aCount<<"\nB:"<<bCount<<"\nC:"<<cCount<<"\nD:"<<dCount<<"\nF:"<<fCount<<endl;
	return 0;
}
