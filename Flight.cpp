#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;



class Details{
	public:
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
	
	
	void information{
	cout<<"\nEnter the customer ID:";
	cin>>cId;
	cout<<"\nEnter the name: ";
	cin>>name;
	cout<<"\nEnter the age: ";
	cin>>age;
	cout<<"\n Address: ";
	cin>>add;
	cout<<"\n Gender: ";
	cin>>gender;
	cout<<"Your detailes are saved with us\n"<<endl;
	}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flightN[]={"Croatia", "Canada", "UK", "USA", "Spain", "Bosnia and Herzegovina"};
			for(int i=0; i<6; i++){
				cout<<(i+1)<<". flight to "<<flightN[i]<<endl;
			}
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"press the number of the country of which you want to book the flight: ";
			cin>>choice;
			
			switch(choice){
				case 1:{
					cout<<"_____________________Welcome to Croatian Airlines________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. CRO - 498"<<endl;
					cout<<"\t11-06-2022 8.00AM 10hrs Rs. 14000"<<endl;
					cout<<"1. CRO - 658"<<endl;
					cout<<"\t12-06-2022 4.00AM 12hrs Rs. 10000"<<endl;
					cout<<"1. CRO - 508"<<endl;
					cout<<"\t14-06-2022 11.00AM 11hrs Rs. 9000"<<endl;
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 14000;
						cout<<"\nYou have successfully booked the flight CRO . 498"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 2){
						charges = 10000;
						cout<<"\nYou have successfully booked the flight CRO . 658"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 3){
						charges = 9000;
						cout<<"\nYou have successfully booked the flight CRO . 508"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
				}
				case 2:{
						cout<<"_____________________Welcome to Canadian Airlines________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. CA - 198"<<endl;
					cout<<"\t09-01-2022 2.00PM 20hrs Rs. 34000"<<endl;
					cout<<"1. CA - 158"<<endl;
					cout<<"\t11-01-2022 6.00AM 23hrs Rs. 29000"<<endl;
					cout<<"1. CA - 208"<<endl;
					cout<<"\t14-01-2022 12.00AM 21hrs Rs. 40000"<<endl;
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 34000;
						cout<<"\nYou have successfully booked the flight CA . 198"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 2){
						charges = 29000;
						cout<<"\nYou have successfully booked the flight CA . 158"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 3){
						charges = 40000;
						cout<<"\nYou have successfully booked the flight CA . 208"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
				}
			case 3:{
			
			
					cout<<"_____________________Welcome to UK Airways________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. UK - 798"<<endl;
					cout<<"\t12-01-2022 10.00AM 14hrs Rs. 44000"<<endl;
					
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 44000;
						cout<<"\nYou have successfully booked the flight UK . 798"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
				}
			case 4:{
			    	cout<<"_____________________Welcome to US Airways________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. US - 567"<<endl;
					cout<<"\t10-01-2022 9.00AM 22hrs Rs. 37000"<<endl;
					cout<<"1. US - 258"<<endl;
					cout<<"\t09-01-2022 6.00AM 22hrs Rs. 39000"<<endl;
					cout<<"1. US - 108"<<endl;
					cout<<"\t12-01-2022 10.00AM 21hrs Rs. 42000"<<endl;
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 37000;
						cout<<"\nYou have successfully booked the flight US . 567"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 2){
						charges = 39000;
						cout<<"\nYou have successfully booked the flight US . 258"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 3){
						charges = 42000;
						cout<<"\nYou have successfully booked the flight US . 108"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
			}
		case 5:
			{
					cout<<"_____________________Welcome to Spanish Airlines________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. SP - 698"<<endl;
					cout<<"\t18-01-2022 p.00AM 20hrs SP. 44000"<<endl;
					cout<<"1. SP - 158"<<endl;
					cout<<"\t09-01-2022 4.00AM 22hrs SP. 34000"<<endl;
					cout<<"1. SP - 708"<<endl;
					cout<<"\t17-01-2022 10.00AM 21hrs SP. 42000"<<endl;
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 44000;
						cout<<"\nYou have successfully booked the flight SP . 698"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 2){
						charges = 34000;
						cout<<"\nYou have successfully booked the flight SP . 158"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 3){
						charges = 42000;
						cout<<"\nYou have successfully booked the flight SP . 708"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
			}
		case 6:
			{
					cout<<"_____________________Welcome to Bosnian-Herzegovinian Airlines________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1. BA - 898"<<endl;
					cout<<"\t02-01-2022 2.00AM 18hrs BA 36000"<<endl;
					cout<<"1. BA - 958"<<endl;
					cout<<"\t03-01-2022 6.00AM 19hrs BA 37000"<<endl;
					cout<<"1. BA - 608"<<endl;
					cout<<"\t12-01-2022 10.00AM 20hrs BA 31000"<<endl;
					
					cout<<"\nSelect the flight you want to book: ";
					cin>>choice1;
					
					if(choice1 == 1){
						charges = 14000;
						cout<<"\nYou have successfully booked the flight BA . 898"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 2){
						charges = 10000;
						cout<<"\nYou have successfully booked the flight BA . 958"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else if(choice1 == 3){
						charges = 9000;
						cout<<"\nYou have successfully booked the flight BA . 608"<<endl;
						cout<<"You can go back to menu and take the ticker "<<endl;
					}else{
						cout<<"\n Invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to the main menu: "<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}
					else{
						mainMenu();
				}
			}
			}
		}
};

float registration::charges;
int registration::choice;
class ticket : public registration, Details{
	
	public:
		void Bill(){
			string destination=" ";
			ofstream outf("records.txt");
			{
				outf<<"_____________XYZ Airlines___________"<<endl;
				outf<<"______________Ticket_________________"<<endl;
				outf<<"Customer ID: "<<Details::cId<<endl;
				outf<<"Customer Name: "<<Details::name<<endl;
				outf<<"Customer Gender: "<<Details::name<<endl;
				outf<<"\tDescription "<<endl<<endl;
				if(registration::choice==1){
					destination="Croatia";
				}else if(registration::choice==2){
					destination="Canada";
				}else if(registration::choice==3){
					destination="UK";
				}else if(registration::choice==4){
					destination="USA";
				}else if(registration::choice==5){
					destination="Spain";
				}else if(registration::choice==6){
					destination="Europe";
				}
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost: \t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void dispBill(){
			ifstream ifs("records.txt");
		    {
		    	if(!ifs){
		    		cout<<"File error!"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
		}
	
};

void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               XYZ Airlines\n"<<endl;
	cout<<"\t_______________Main Menu_______________"<<endl;
	
	cout<<"\t___________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details      \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration          \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges           \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                          \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	cout<<"\t_______________________________________________________"<<endl;
	
	cout<<"Enter the choice: ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		case 1:{
			cout<<"___________Customers______________\n"<<endl;
			d.information();
			cout<<"Press any key to go back to Main menu ";
			cin>>back;
			
			if(back==1){
				mainMenu();
			}else{
				mainMenu();
			}
			break;
		}
		case 2:{
			cout<<"__________Book a flight using this system__________\n"<<endl;
			r.flights();
			break;
		}
		case 3:{
			cout<<"_____Get Your Ticker_____\n"<<endl;
			t.Bill();
			
			cout<<"Your ticket is printed, you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticker ";
			
			cin>>back;
			
			if(back==1){
				t.display();
				cout<<"Press any key to back to main menu: ";
				cin>>back;
				if(back==1){
					mainMenu();
				}else{
					mainMenu();
				}
			}else{
				mainMenu();
			}
			break;
		}
		case 4:{
			cout<<"\n\n\t__________Thank-you______"<<endl;
			break;
		}
		default:{
			cout<<"Invalid input, Please try again!\n"<<endl;
			mainMenu();
			break;
		}
			
	}
}

int main(){
	Menagement Mobj;
	
	return 0;
}
