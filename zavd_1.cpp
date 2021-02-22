#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Person {
	private:
    string name; 
    int age;
	char sex;
	string number; 
public:
 
 Person(string namep, int agep, char sexp, string numberp)
 {
 	name=namep;
 	age=agep;
 	sex=sexp;
 	number=numberp;
 }
int Change(int a)
{
	age=a;
}
void Change(string na, char se)
{
	name=na;
	sex=se;
}
void Change(string nu)
{
	number=nu;
}

void Print()
{
	cout<<"Name:"<<name<<"\tAge: "<<age<<"\tSex: "<<sex<<"\tNumber: "<<number<<endl;
}
};
void print_menu() {
    system("cls");  
    cout<<("What do you want to do?\n");
    cout<<("1. Change Name\n");
    cout<<("2. Change Age\n");
    cout<<("3. Change Phone Number\n");
    cout<<("4. Print Persons\n");
    cout<<("5. Exit\n");
    cout<<">>";
}
int get_variant(int count) 
{
    int variant;
    char s[100]; 
    scanf("%s", s); 


    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Incorrect input. Try again: "); 
        scanf("%s", s); 
    }

    return variant;
}
int main() {
	

	int variant, n, ag;
	string num;
  Person first("Andriy", 15, 'm', "0685534670");
  
  Person second("Yuriy", 32, 'm', "0673544650");
  
  Person third("Victor", 54, 'm', "0685534676");
  
  Person fourth("Diana", 26, 'w', "0628552324");
  
  Person fifth("Angelina", 24, 'w', "0282533673");
  string nam;
  do {
        print_menu(); 
        cin>>variant;
    

        switch (variant) {
           case 1:
           	cout<<"Enter Person to edit "<<endl;
           	cin>>n;
            	cout<<"Enter new Name"<<endl;
            	cin>>nam;
            	cout<<"Enter new Sex"<<endl;
            	char sexx;
            	cin>>sexx;
            	if(n==1){ first.Change(nam, sexx);}
            	if(n==2){second.Change(nam, sexx);}
            	if(n==3){third.Change(nam, sexx);}
            	if(n==4){fourth.Change(nam, sexx);}
            	if(n==5){fifth.Change(nam, sexx);}
                break;
            case 2:
            	cout<<"Enter Person to edit "<<endl;
           	    cin>>n;
           	    cout<<"Enter new Age "<<endl;
           	    cin>>ag;
            	if(n==1){ first.Change(ag);}
            	if(n==2){second.Change(ag);}
            	if(n==3){third.Change(ag);}
            	if(n==4){fourth.Change(ag);}
            	if(n==5){fifth.Change(ag);}
                break;
            case 3:
            	cout<<"Enter Person to edit "<<endl;
           	    cin>>n;
           	    cout<<"Enter new Phone number "<<endl;
           	    cin>>num;
            	if(n==1){ first.Change(num);}
            	if(n==2){second.Change(num);}
            	if(n==3){third.Change(num);}
            	if(n==4){fourth.Change(num);}
            	if(n==5){fifth.Change(num);}
                break;
           case 4:
           	    first.Print();
            	second.Print();
            	third.Print();
            	fourth.Print();
            	fifth.Print();
                break;
        }

        if (variant != 5)
            system("pause"); 
    } while (variant != 5);
    return 0;
}
