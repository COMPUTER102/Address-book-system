#include <iostream>
#include <string>
#include <vector>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
开始于26/07/22 13:11*/ 
/*
	Name: Address book system
	Copyright:None 
	Author: COMPUTER102
	Date: 26/07/22 13:11
	Description: this is an address book system.
*/



//vector<Person> people;

class Person
{
	public:
		//Required fields 
		string name;
		string phone_nomber;
		//int pid;
		//Optional
		string address = "Didn't set               ";
		void print_person_info(Person &p)
		{
			cout<<"▓▓▓▓██╔═════════════" <<"═════════════════╗   ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██║ Person information:"<<"          ║   ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██║ Name:"<<p.name<<"                  ║   ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██║ Phone number:"<<p.phone_nomber<<"     ║   ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██║ Address:"<<p.address<<"║   ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██╚══════════════" <<"════════════════╝   ██▓▓▓▓"<<endl;
		}
	private:
		int pid = 0;
			
};

vector<Person> people;

void process_cmd()
{
	cout<<"▓▓▓▓██ Please input command number       ██▓▓▓▓"<<endl; 
	cout<<"▓▓▓▓██      ┏┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┓     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 1.Show people list   ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 2.New person         ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 3.Edit peron         ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 4.Show person info   ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 5.Remove person      ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┃ 6.Exit               ┃     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██      ┗┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┛     ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██                                   ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██ :"<<flush;//为了适配更多编译器 
	
	string cmd = "";
	getline(cin, cmd);
	if (cmd == "1")
	{
		if (people.empty())
		{
			cout<<"▓▓▓▓██ You haven't added any person yet! ██▓▓▓▓"<<endl;
			cout<<"▓▓▓▓██-----------------------------------██▓▓▓▓"<<endl;
		}
	}else if(cmd == "6")
	{
		
	}else
	{
		cout<<"▓▓▓▓██ Please enter a valid command!     ██▓▓▓▓"<<endl;
		cout<<"▓▓▓▓██-----------------------------------██▓▓▓▓"<<endl;
	}
	process_cmd();
	 
}

//vector<Person> people;


int main() 
{
	//cout<<"Hello World!"<<endl;
	//cout<<endl;
	cout<<"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
	cout<<"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
	cout<<"▓▓▓▓███████████████████████████████████████▓▓▓▓"<<endl; 
	cout<<"▓▓▓▓██ Address book system | 通讯录系统  ██▓▓▓▓"<<endl;
	cout<<"▓▓▓▓██-----------------------------------██▓▓▓▓"<<endl;
	Person zhang;
	for (unsigned int i = 10; i >= 0; i--)
	{
		process_cmd();
	}
	//process_cmd();
	

	
	//} 
	
	
	return 0;
}
