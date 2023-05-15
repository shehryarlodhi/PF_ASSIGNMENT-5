//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-4
//Assignment-5
#include<iostream>
#include<iomanip>
using namespace std;

//function prototype
void barChart(int N1, int N2, int N3, int N4, int N5);

int main(){

	//declaring and initializing variables
	int a,b,c,d,e;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Enter third number  : ";
	cin>>c;
	cout<<"Enter fourth number : ";
	cin>>d;
	cout<<"Enter fifth number  : ";
	cin>>e;
	cout<<endl;
	cout<<endl;
	
	//calling function to main
	barChart(a,b,c,d,e);
	
	cout<<endl;
	return 0;
	}
	
	
//function definition
void barChart(int N1, int N2, int N3, int N4, int N5){
	
	//declaring variable
	int max;
	
	//using if condition to check largest number
	if(N1>=N2&&N1>=N3&&N1>=N4&&N1>=N5){
	max=N1;
	}
	if(N2>=N1&&N2>=N3&&N2>=N4&&N2>=N5){
	max=N2;
	}
	if(N3>=N2&&N3>=N1&&N3>=N4&&N3>=N5){
	max=N3;
	}
	if(N4>=N2&&N4>=N3&&N4>=N1&&N4>=N5){
	max=N4;
	}
	if(N5>=N2&&N5>=N3&&N5>=N4&&N5>=N1){
	max=N5;
	}
	
	//using for loop and if statement to print bar chart	
	for(int i=max;i>=1;i--){
	cout<<"   "<<setw(3)<<i<<" ";
		if(N1>=i){
		cout<<setw(3)<<" * ";
		}
		else{
		cout<<"   ";
		}
		if(N2>=i){
		cout<<setw(3)<<" * ";
		}
		else{
		cout<<"   ";
		}
		if(N3>=i){
		cout<<setw(3)<<" * ";
		}
		else{
		cout<<"   ";
		}
		if(N4>=i){
		cout<<setw(3)<<" * ";
		}
		else{
		cout<<"   ";
		}
		if(N5>=i){
		cout<<setw(3)<<" * ";
		}
		else{
		cout<<"   ";
		}
		cout<<endl;
	}
	
	cout<<"   "<<setw(5)<<" "<<"1  2  3  4  5"<<endl;
	}
	
	
	
	
