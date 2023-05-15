//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-2
//Assignment-5
#include<iostream>
using namespace std;

//function prototype
bool isHappyNumber(int num);

int main(){      
	//declaration of variables
	int number,result;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter a number : ";
	cin>>number;
	
	//calling function to main
     	result=isHappyNumber(number);
    	
    	//if condition to print correct output
    	if(result==true){
    	cout<<number<<" is a happy number."<<endl;
    	}
    	else{
    	cout<<number<<" is a sad number."<<endl;
    	}
      	cout<<endl;
      	
      	return 0;
      	}
      	
      	
      	
//function definition	
bool isHappyNumber(int num){      	
	
	//declaration of local variables 
	int digit=num,last_digit,sum=0,square=0;
	
	//using nested for loop to check happy number
	for(int i=0;i<100;i++){ 
   		for(digit ; digit>=1 ; digit=digit/10){
             	last_digit=digit%10;
             	square=last_digit*last_digit;
              	sum=sum+square;
              	}
              	if(sum==1){
            	break;
           	}
             	else{
             	digit=sum;
             	sum=0;
              	}
  	}
  	
  	//returning sum to the main
  	return sum;
     	}
     
     
     
     
    
