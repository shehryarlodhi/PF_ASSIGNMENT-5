//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question1
//Assignment-5
#include<iostream>

//function prototype
double evaluatePolynomial();

using namespace std;
int main(){
	
	//calling function to main
	double output = evaluatePolynomial();	
	//displaying output
	cout<<"Answer is : "<<output<<endl;
	cout<<endl;
	
	return 0;
	}	


//function definition
double evaluatePolynomial(){
	double x,power,coeff,product,n=1,sum=0,add=0,p,display;
	
	do{
	//asking user for input
	cout<<endl;
	cout<<"Enter the value of x     : ";
	cin>>x;
	cout<<"Enter the value of power : ";
	cin>>power;
	if(power<0){
	cout<<"Error..! (Power must be >=0) "<<endl;
	}
	else{
	break;
	}
	
	}while(power>0);
	
	p = power;
	display=p+1;
	cout<<"Enter "<<display<<" coefficiants in descending order of power : ";
	int i=1 ;
	
	//using for loop to calculate polynomial expression
	for(  ; p>=0 ; p--){
	cin>>coeff;	
	sum=0;
	n=1;
		for(i=0;i<p;i++){
		n*=x;
	 	}
	sum = sum + n;
	sum*=coeff;
	add+=sum;
	}
	
	return add;
}
