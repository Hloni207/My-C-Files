/*
This is a dummy bank account program
this program has 4 parts named "CODE"
1. main screen 
2. Accessing bank Account 
3. Creating bank account 
4. Exiting the program
Please enjoy my hand brain written program :) 
No AI.
*/
#include <iostream>
using namespace std;

int input, account, pin, age, balance;
string name, surname, gender;

int main(){
	Home:
	cout<<"----------Welcome to Cpp Banking System----------";
	cout<<"\n1. Access Account";
	cout<<"\n2. Create Account";
	cout<<"\n3. Close the System";
	cout<<"\nEnter your choice (1-3): ";
	cin>>input;
	
	//Access Account
	if (input==1){
		cout<<"\nPlease enter your account number: ";
		cin>>input;
		if(input==account){
			cout<<"Please enter your pin: ";
			cin>>input;
			if (input==pin){
				//Access Account
				Welcome:
				cout<<"\n----------Welcome back "<<gender<<" "<<name<<"----------";
				cout<<"\n1. Deposit Money";
				cout<<"\n2. Withdraw Money";
				cout<<"\n3. View Balance";
				cout<<"\n4. Exit";
				cout<<"\nPlease enter your choice (1-4): ";
				cin>>input;
				
				//Deposit Money
				if(input==1){
					cout<<"\nPlease enter the ammount you want to deposit: ";
					cin>>input;
					balance += input;
					cout<<"You have successfully deposited R"<<input<<" into your bank account\n";
					goto Welcome;
				}
				
				//Withdraw Money
				if(input==2){
					cout<<"Please enter the ammount you want to withdraw: R";
					cin>>input;
					if(input<balance){
						balance-=input;
						cout<<"\nYou have successfully withdrawed R"<<input<<" from your account";
						cout<<"\nRemaining R"<<balance<<"\n\n";
						goto Welcome;
					}
					if(input>balance){
						cout<<"\nError occured";
						cout<<"\nInsufficient Ammount\n";
						goto Welcome;
					}
				}
				
				//View Balance
				if(input==3){
					cout<<"\nYour banalce is: R"<<balance<<"\n\n";
					goto Welcome;
				}
				//Exit
				if(input==4){
					cout<<"\nExiting the system......\n\n";
					goto Home;
				}
					
			}//Account Pin Incorrect
			if(input != pin){
				cout<<"Incorrect pin has been entered";
				goto Home;
			}
		}
		//Account Number incorrect
		if(input != account){
			cout<<"Account has not been found\n\n";
			goto Home;
		}
	}
	
	//Create Account
	if(input==2){
		cout<<"\n\n----------Welcome to Cpp Account Creation Center----------";
		cout<<"\nEnter your age: ";
		cin>>age;
		if(age>17){
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your surname: ";
			cin>>surname;
			cout<<"Enter your gender (male or female): ";
			cin>>gender;
			if(gender=="male" or gender =="Male"){
				gender="Mr";
				goto Foward;
			}
			if(gender=="female" or gender =="Female"){
				gender="Mrs";
				goto Foward;
			}
			Foward:
			cout<<"Please create your new account number: ";
			cin>>account;
			cout<<"Please create your strong Pin: ";
			cin>>pin;
			cout<<"Your account has been successfully created :)";
			cout<<"\nYou can now access your account\n\n";
			goto Home;	
		}
		if(age<18){
			cout<<"\nYou are still young for creating a bank account";
			cout<<"\nGood-bye\n\n";
			goto Home;
		}
	}
	
	//Close the system
	if(input==3){
		cout<<"\n\nClosing the system.....";
		cout<<"Good-bye\n\n";
		return 0;
	}
}

//program written by Hloni207
//program written in 2026/10/03