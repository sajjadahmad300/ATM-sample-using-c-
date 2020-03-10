#include<iostream.h>//headers files
#include<conio.h>
int w,deps,x,y,bal=10000;//integer declaration and balance initaliaztion
char s;
int deposit()
{
	cout<<"enter amount to deposit"<<endl;
		cin>>deps;
		y=bal+deps;
		cout<<"you have deposit amount = "<<deps<<endl;
		cout<<"your new balance is     = "<<y<<endl;
return 0;
}
int withdraw()
{
	cout<<"enter amount to withdrawl"<<endl;
		cin>>w;
		y=bal-w;
		cout<<" you have withdrawl amount = "<<w<<endl;
		cout<<" your remaining balance is = "<<y<<endl;
	return 0;
}
int balance()
{
cout<<"your current balance is = "<<bal<<endl;
return 0;

}
int menu()
{

		cout<<" select option to perform "<<endl;//option for different function
		cout<<"a... for a for withdrawl "<<endl;
		cout<<"b... for deposit"<<endl;
		cout<<"c... for check balance"<<endl;
		cout<<"---------------------------------------"<<endl;
		char s;
		cin>>s;
switch(s)
{
case 'a':

withdraw();
break;
case b:
deposit();
break;
case'c':
balance();
break;
default:
cout<<" wrong entry"<<endl;
break;
return 0;
} 
}
void main()
{
int w,deps,x,y,bal=10000;//integer declaration and balance initaliaztion
	
	int q=0;
 while(q<=10)//using while loop to terminate programe or statement
     {
	clrscr();
		cout<<"account		pin "<<endl;//accounts details
		cout<<"Ali		123 "<<endl;
		cout<<"Ahmad		124 "<<endl;
		cout<<"Asad		125 "<<endl;
		cout<<"Ahsan		126 "<<endl;
	       cout<<"-------------------------------------"<<endl;
		int w,deps,x,y,bal=10000;//integer declaration and balance initaliaztion
		char s,t,u,v;
	cout<<"enter your secret pin ";	
	int pin;
	cin>>pin;//asking for pin
	switch(pin)//using switch for multiple accounts
   {
	case 123:// 1st account
	cout<<"*****welcome to ATM service***** "<<endl; 
			cout<<" "<<endl;
			cout<<" Mr Ali account "<<endl;//user name
		menu();
		break;
case 124://2nd acount using main switch
	cout<<"*****welcome to ATM service***** "<<endl;
			cout<<" Mr Ahmad account "<<endl;//user name 
			menu();
break;
case 125:
	cout<<"*****welcome to ATM service***** "<<endl;
			cout<<" Mr Asad account "<<endl;//user name
cout<<" select option to perform "<<endl;//option for different function
		menu();
break();

case 126:
	cout<<"*****welcome to ATM service***** "<<endl;
			cout<<" "<<endl;
			cout<<" Mr Ahsan account "<<endl;//user name
cout<<" select option to perform "<<endl;//option for different function
		menu();
break();
default:
cout<<" sorry pin try again "<<endl;
break;

}
	cout<<"********* Thank you for using ATM *****"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"enter 1 to quit or any number to continue"<<endl;//asking for 1 to end programme
 cin>>q;
 if (q==1)
 {
 break;
 }
 q++;

 }
 
}
