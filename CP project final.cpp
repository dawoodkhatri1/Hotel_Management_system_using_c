#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	system("COLOR f3");
	system("cls");
	int room_no;
    char name[30];
    char address[50];
    char phone[15];
    long days;
    long cost;
    char rtype[30];
    long pay;
	int choice,breakfast,lunch,dinner,modify_name,modify_address,modify_phone,modify_days,date,time;
	while(choice!=6)
	{
		system("cls");
		cout<<"\n\t\t\t\t *************";
		cout<<"\n\t\t\t\t **THE HOTEL**";
		cout<<"\n\t\t\t\t *************";
		cout<<"\n\t\t\t\t * MAIN MENU *";
		cout<<"\n\t\t\t\t *************";
		cout<<"\n\n\n\t\t\t\t1. Book A Room";
		cout<<"\n\t\t\t\t2. Customer Information";
		cout<<"\n\t\t\t\t3. Rooms Allotted";
		cout<<"\n\t\t\t\t4. Edit Customer Details";
		cout<<"\n\t\t\t\t5. Order Food from Restaurant";
		cout<<"\n\t\t\t\t6. Exit";
		cout<<"\n\n\t\t\t\tEnter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
		    case 1:
		        {
	            system("cls");
	            int r,flag;
	            cout<<"\n\t\t\t +-----------------------+";
	            cout<<"\n\t\t\t | Rooms  |   Room Type  |";
	            cout<<"\n\t\t\t +-----------------------+";
	            cout<<"\n\t\t\t |   1-50 |    Deluxe    |";
	            cout<<"\n\t\t\t |  51-80 |   Executive  |";
            	cout<<"\n\t\t\t | 81-100 | Presidential |";
            	cout<<"\n\t\t\t +-----------------------+";
            	cout<<"\n\n ENTER CUSTOMER DETAILS";
            	cout<<"\n ----------------------";
             	cout<<"\n\n Room Number: ";
	            cin>>r;
	            if(flag==1)
                {
                    cout<<"\n Sorry, Room is already booked.\n";
                    system("PAUSE");
                }
	            else
	            {
	                if(flag==2)
                    {
	                    cout<<"\n Sorry, Room does not exist.\n";
	                    system("PAUSE");
                    }
	                else
	                {
	                    room_no=r;
		                cout<<" Name: ";
		                cin>>name;
		                cout<<" Address: ";
		                cin>>address;
		                cout<<" Phone Number: ";
		                cin>>phone;
		                cout<<" Number of Days: ";
		                cin >> days;
		                cout<<" Date: ";
		                cin>>date;
		                cout<<" Time: ";
		                cin>>time;
		                if(room_no>=1&&room_no<=50)
		                {
		                    cout << "Deluxe" << endl;
                            cost=days*10000;
		                }
		                else
		                {
		                    if(room_no>=51&&room_no<=80)
                            {
                                cout << "Executive" << endl;
			                    cost=days*12500;
                            }
		                    else
		                    {
		                        if(room_no>=81&&room_no<=100)
			                    {
			                        cout << "Presidential" << endl;
			                        cost=days*15000;
			                    }
		                    }
		                }
		                cout<<"\n Room has been booked.\n";
	                }
	            }
	            system("PAUSE");
	            cout<<"\n Press any key to continue.";
		        }
	            break;
			case 2:
			    {
	            system("cls");
	            int r,flag=0;
	            fstream fin;
                fin.open("Record2.TXT",ios::ate);
                fin.open("Record.TXT",ios::app);
	            cout<<"\n Enter Room Number: ";
	            cin>>r;
	                if(room_no==r)
                    {
                        system("PAUSE");
			            cout<<"\n Customer Details";
			            fin<<"\n Customer Details";
			            cout<<"\n ----------------";
			            fin<<"\n ----------------";
			            cout<<"\n\n Room Number: "<<room_no;
			            fin<<"\n\n Room Number: "<<room_no;
			            cout<<"\n Name: "<<name;
			            fin<<"\n Name: "<<name;
                        cout<<"\n Address: "<<address;
                        fin<<"\n Address: "<<address;
		        	    fin<<"\n Phone Number: "<<phone;
		        	    cout<<"\n Phone Number: "<<phone;
          			    fin<<"\n Staying for "<<days<<" days.";
          			    cout<<"\n Staying for "<<days<<" days.";
        			    fin<<"\n Booking Date is: "<<date;
        			    cout<<"\n Booking Date is: "<<date;
        			    fin<<"\n Booking Time is: "<<time;
                        cout<<"\n Booking Time is: "<<time;
                        fin<<"\n Total cost of stay: "<<cost<<"\n";
		        	    cout<<"\n Total cost of stay: "<<cost<<"\n";
		        	    system("PAUSE");
			            flag=1;
			            break;
                    }
	                getchar();
	                getchar();
	                fin.close();
	                if(flag==0)
                    {
                        cout<<"\n Room is Vacant.\n";
                        cout<<"\n Press any key to continue.";
                        system("PAUSE");
                    }
			    }
                break;
			case 3:
	            {
	            fstream fin;
	            fin.open("Record.TXT",ios::ate);
	            fin.open("Record.TXT",ios::app);
	            cout << "\n\t\t\t    LIST OF ROOMS ALLOTED";
                fin << "\n\t\t\t    LIST OF ROOMS ALLOTED";
	            cout<<"\n\t\t\t   -----------------------";
	            fin<<"\n\t\t\t   -----------------------";
                cout<<"\n\n +---------+------------------+----------------+------------+------------+--------------+";
	            fin<<"\n\n +---------+------------------+----------------+------------+------------+--------------+";
	            cout<<"\n | Room No.|    Guest Name    |      Address    |   Date     |     Time   | Contact No. |";
	            fin<<"\n | Room No.|    Guest Name    |      Address    |   Date     |     Time   | Contact No. |";
	            cout<<"\n +---------+------------------+-----------------+------------+------------+--------------+";
                fin<<"\n +---------+------------------+-----------------+------------+------------+--------------+";
                for (int i=0;i<2;i+=2)
	            {
                    cout<<"\n |"<<room_no<<" |"<<"\t\t"<<name<<" |"<<"\t"<<address<<" |"<<"\t"<<date<<" |"<<"\t"<<time<<" |"<<"\t"<<phone<<" |";
                    fin<<"\n |"<<room_no<<" |"<<"\t\t"<<name<<" |"<<"\t"<<address<<" |"<<"\t"<<date<<" |"<<"\t"<<time<<" |"<<"\t"<<phone<<" |";
                    cout<<"\n +---------+----------------+--------------+--------------+--------------+--------------+\n";
                    fin<<"\n +---------+----------------+--------------+--------------+--------------+--------------+\n";
                    system("PAUSE");
                }
                getchar();
            	getchar();
	            fin.close();
	            }
                break;

			case 4:
			    {
	            system("cls");
	            int choice;
	            cout<<"\n EDIT MENU";
	            cout<<"\n ---------";
	            cout<<"\n\n 1. Modify Customer Information.";
	            cout<<"\n Enter your choice: ";
	            cin>>choice;
	            if (choice==1)
                {
                    system("cls");
                    int ch,r;
                    cout<<"\n MODIFY MENU";
                    cout<<"\n -----------";
                    cout<<"\n\n\n 1. Modify Name";
                    cout<<"\n 2. Modify Address";
                    cout<<"\n 3. Modify Phone Number";
                    cout<<"\n 4. Modify Number of Days of Stay";
                    cout<<"\n Enter Your Choice: ";
                    cin>>ch;
                    system("cls");
                    cout<<"\n Enter Room Number: ";
                    cin>>r;
                    if (ch==1)
                    {
                    long pos,flag;
                    if(room_no==r)
                        {
                            cout<<"\n Enter New Name: ";
                            cin>>name;
                            cout<<"\n Customer Name has been modified.";
                            flag=1;
                            break;
                            }
                    if(flag==0)
                        cout<<"\n Sorry, Room is vacant.";
                    }
                        break;
                    if (ch==2)
                    {
                        long pos,flag=0;
                        if(room_no==r)
		                    {
		                        cout<<"\n Enter New Address: ";
		                    	cin>>address;
		                		cout<<"\n Customer Address has been modified.";
		                    	flag=1;
		                        }
		                    if(flag==0)
	                       	   cout<<"\n Sorry, Room is vacant.";

                    }
                        break;
                    if (ch==3)
                    {
                        long pos,flag=0;
	                        if(room_no==r)
		                    {
		                        cout<<"\n Enter New Phone Number: ";
                                cin>>phone;
			            		cout<<"\n Customer Phone Number has been modified.";
	                    		flag=1;
                                break;
		                        }
	                    if(flag==0)
		                   cout<<"\n Sorry, Room is vacant.";
                    }
                        break;
                    if (ch==4)
                    {
                        long pos,flag=0;
                            if(room_no==r)
		                    {
		                        cout<<" Enter New Number of Days of Stay: ";
                                cin>>days;
                                if(room_no>=1&&room_no<=50)
			                    {
			                        cout << "Deluxe" << endl;
                                    cost=days*10000;
			                    }
			                    else
			                    {
                                    if(room_no>=51&&room_no<=80)
                                    {
				                        cout << "Executive" << endl;
				                        cost=days*12500;
                                    }
                                    else
				                    {
					                    if(room_no>=81&&room_no<=100)
					                    {
					                         cout << "Presidential" << endl;
					                         cost=days*15000;
					                    }
				                    }
			                    }
			                    cout<<"\n Customer information is modified.";
			                    flag=1;
			                    break;
		                    }
	                    if(flag==0)
                    		cout<<"\n Sorry, Room is Vacant.";
	                }
                }
			    }
                        break;
                case 5:
                    {
	                system("cls");
	                int ch,r;
	                int num;
	                cout<<"\n RESTAURANT MENU:";
                    cout<<"\n --------------- ";
                	cout<<"\n\n 1. Order Breakfast\n 2. Order Lunch\n 3. Order Dinner";
                	cout<<"\n\n Enter your choice: ";
                	cin>>ch;
	                cout<<" Enter Room Number: ";
	                cin>>r;
	                if (ch==1)
	                {
	                    int num,flag=0;
                     	cout<<" Enter number of people: ";
	                    cin>>num;
                        if(room_no==r)
                        {
                            pay=500*num;
                            cost=cost+pay;
                            cout<<"\n Amount added to the bill: Rs. "<<pay;
                            system("PAUSE");
                            flag=1;
                        }
                            break;
	                    if(flag==0)
                            cout<<"\n Sorry, Room is Vacant.";
                        break;
	                }
                    if (ch==2)
                    {
                        int num,flag=0;
                        cout<<" Enter number of people: ";
	                    cin>>num;
                        if(room_no==r)
                        {
                            pay=1000*num;
                            cost=cost+pay;
                            cout<<"\n Amount added to the bill: Rs. "<<pay;
                            system("PAUSE");
                            flag=1;
                        }
                            break;
	                    if(flag==0)
	                      	cout<<"\n Sorry, Room is vacant.";
                        break;
                    }
                    if (ch==3)
                    {
                        int num,flag=0;
	                    cout<<" Enter number of people: ";
                      	cin>>num;
                        if(room_no==r)
                        {
                            pay=1200*num;
                            cost=cost+pay;
                            cout<<"\n Amount added to the bill: Rs. "<<pay;
                            system("PAUSE");
                            flag=1;
                        }
                            break;
                        if(flag==0)
		                    cout<<"\n Sorry, Room is Vacant.";
		                    break;
                    }
                    }
	                    break;

                case 6:
                    {
                    cout<<"Thank you for using the software!"<<endl;
                    cout<<"The Group members of this project are: "<<endl;
                    cout<<"DAWOOD,EHSAAN,MOIZ,ZAINAB"<<endl;
                    system("PAUSE");
                    break;
                    }
			    default:
				{
					system("PAUSE");
					cout<<"\n\n\t\t\tWrong choice.";
					cout<<"\n\t\t\tPress any key to continue.";
					break;
				}
	}
	}
	return 0;
}
