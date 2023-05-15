//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-5
//Assignment-5
#include<iostream>

//function prptotype
int digit(int n,int k);

using namespace std;
int main(){
	//declairation and initialization
	int num,k_dig;
	
	//asking user for the input
	cout<<endl;
	cout<<"Enter a positive integer : ";
	cin>>num;
	cout<<"Enter kth degit to find  : ";
	cin>>k_dig;
	cout<<endl;
	
	//function calling
	int output = digit(num,k_dig);
	cout<<"Kth digit is : "<<output<<endl;
	cout<<endl;
	
	return 0;
	}
	

//Function definition
int digit(int n,int k){
	int i=1,x=0,num=0,rev_num=0,rem;
	
	//using for loop to first reverse the number
	for(int num=n ; num!=0 ; num=num/10){
	int remainder = num%10;
	rev_num = rev_num*10 + remainder;
	i++;
	}
	
	//using for loop to find kth digit
	for(rev_num ; rev_num>0 ; rev_num=rev_num/10){
	rem = rev_num%10;
	x++;
	if(x == k+1){
	break;
	}
	}
	
	if(k>i-2){
	return -1;
	}
	
	return rem;
	}
	

	
