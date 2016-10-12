#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
int a=0 ;         	//Global variables.
void mumbai();		//function declarations.
void delhi();
void jammu();
void kerala();
void andaman();
void singapore();
void hawaii();

void mumbai_general();
void mumbai_price();
void mumbai_sightseen();
void mumbai_tourprogram();
void mumbai_contact();

void delhi_general();
void delhi_price();
void delhi_sightseen();
void delhi_tourprogram();
void delhi_contact();

void kerala_general();
void kerala_price();
void kerala_sightseen();
void kerala_tourprogram();
void kerala_contact();

void jammu_general();
void jammu_price();
void jammu_sightseen();
void jammu_tourprogram();
void jammu_contact();

void andaman_general();
void andaman_price();
void andaman_sightseen();
void andaman_tourprogram();
void andaman_contact();

void singapore_general();
void singapore_price();
void singapore_sightseen();
void singapore_tourprogram();
void singapore_contact();

void hawaii_general();
void hawaii_price();
void hawaii_sightseen();
void hawaii_tourprogram();
void hawaii_contact();
void front_page();
/*struct date
	{
	int dd,mm,yy;
	};    */

void main()
{
clrscr();
front_page();
cleardevice();
setbkcolor(1);
char ch1;
//delay(1000);
xyz:
cout<<"\t\t*****************************************************\n";
cout<<"\t\t---------Welcome to Blue-Bird tourism company--------\n";
cout<<"\t\t*****************************************************\n";
//delay(1000);
cout<<"\nTour packages are : \n";
//delay(1000);
cout<<"\n\nNormal packages :- \n\t1.Mumbai - Goa package\n\t2.Delhi - Agra Package\n\t3.Kerala package\n\t4.Jammu & Kashmir package\n\t5.Andaman & Nicobar islands package";
//delay(1000);
cout<<"\n\nSpecial Packages :-\n\t6.Singapore package\n\t7.Hawii package\n";
//delay(1000);
cout<<"\nEnter your choice (0 to quit) : ";
abc:
cin>>ch1;
switch (ch1)
	{
	case '1':
	mumbai();
	if (a==1)
		goto xyz;
	break;
	case '2':
	delhi();
	if (a==1)
		goto xyz;
	break;
	case '3':
	kerala();
	if (a==1)
		goto xyz;
	break;
	case '4':
	jammu();
	if (a==1)
		goto xyz;
	break;
	case '5':
	andaman();
	if (a==1)
		goto xyz;
	break;
	/*case '6':
	singapore();
	break;
	case '7':
	hawaii();
	break;  */
	case '0':
	cout<<"\nProgram will quit now........";
	getch();
	exit(0);
	default:
	cout<<"\nWrong choice!!!!!!!!";
	cout<<"\nEnter the correct choice again:";
	goto abc;
	}
getch();
}


void front_page()
{
int gm,gd = DETECT,i,j,k,per=0,q=0;
initgraph( &gd , &gm , "c:/tc/bgi");
delay(2000);
	for(i=5;i<=630;i=i+20,q+=2)
		{
		for(j=0;j<=5;j=j+1)
			{
			setcolor(j);
			circle(i,460,j+15);
			circle(i,460,j+1);
			circle(i,20,j+15);
			circle(i,20,j+1);
			}
	       setcolor(q);
	       for(int p=103;p<193;p+=3)
			{
			delay(5);
			circle (330,235,p);
			settextstyle(GOTHIC_FONT, HORIZ_DIR, 0);
			outtextxy(235,205,"LOADING.....");
			for (int r=0;r<40;r++)																																													putpixel(rand()%800,rand()%500,rand());
			}
		  }
}

void mumbai ()                    //Mumbai package.
{
ghi:
clrscr();
setbkcolor(4);
char ch2;
cout<<"\t\t**********************************************\n";
cout<<"\t\t-----------MUMBAI - GOA TOUR PACKAGE----------\n";
cout<<"\t\t**********************************************\n";
cout<<"\n\n1.General information\n2.Price information\n3.Sightseen(Places to visit)\n4.Tour shedule\n5.Contact information\nPress m to go to main menu\n";
cout<<"\nEnter your choice : ";
def:
cin>>ch2;
if (ch2=='m')
	{
	a=1;
	clrscr();
	return;
	}
switch (ch2)
	{
	case '1':
	mumbai_general();
	goto ghi;
	case '2':
	mumbai_price();
	goto ghi;
	case '3':
	mumbai_sightseen();
	goto ghi;
	case '4':
	mumbai_tourprogram();
	goto ghi;
	case '5':
	mumbai_contact();
	goto ghi;
	default :
	cout<<"\nWrong choice!!!!!!!\nEnter the correct choice again : ";
	goto def;
	}
}

void mumbai_general()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t=======================================";
	cout<<"\n\t\tGeneral information on Mumbai - Goa tour";
	cout<<"\n\t\t========================================";
	cout<<"\n\nDuration       : 5 nights/6 days";
	cout<<"\n\nHotel          : Luxury hotels (upto 3 stars) with modern amenities";
	cout<<"\n\nMeals          : Breakfast, Lunch & dinner (Veg or Non-veg)";
	cout<<"\n\nTransportation : Train (AC coach) and Luxury buses";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void mumbai_sightseen()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t=========================";
	cout<<"\n\t\t\tSightseen in Mumbai - Goa";
	cout<<"\n\t\t\t=========================";
	cout<<"\n\nSightseen in Mumbai -  Taj hotel, Gateway of India, Historical monuments,                        Mahalaxmi temple, Juhu Beach, Nariman point etc..";
	cout<<"\n\nSightseen in Goa - Beaches, Churches, Old Goa, Panji, Shopping mall";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void mumbai_price()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t======================================";
	cout<<"\n\t\tPrice information on Mumbai - Goa tour";
	cout<<"\n\t\t======================================";
	cout<<"\n\n\tChildren (Below 8 years) 	        : Rs. 5999 per head";
	cout<<"\n\n\tTeens (8 - 15 years)     	        : Rs. 6999 per head";
	cout<<"\n\n\tYouth (16 - 59 years)    	        : Rs. 7999 per head";
	cout<<"\n\n\tSenior citizens (Above 60 years)        : Rs. 6999 per head";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void mumbai_tourprogram()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t============================";
	cout<<"\n\t\t\tShedule of Mumbai - Goa tour";
	cout<<"\n\t\t\t============================";
	cout<<"\nDay 1 :Arrival at Mumbai\nOn arrival at railway station, our representative will meet you to pick you up and transfer to your hotel. Rest of the day is at your leisure.Overnight Stay in hotel.";
	cout<<"\nDay 2 :Mumbai\nAfter breakfast, visit to other places of Mumbai- the city which never sleeps. Mumbai has a variety of tourist attraction like Beaches, historical monuments, Gateway of India, Mahalaxmi Temple etc. Overnight Stay in hotel.";
	cout<<"\nDay 3 :Mumbai Goa\nAfter Breakfast Transfer to Railway station, and evening Meet and assistance on arrival at Goa station and transfer to your hotel. Rest of the day at leisure. Overnight at beach resort.";
	cout<<"\nDay 4 :Goa\nFull day at leisure on the beach. Overnight at beach resort.";
	cout<<"\nDay 5 :Goa Panjim \nMorning visit of old Goa and Panjim market. Afternoon at leisure. Overnight at beach resort.";
	cout<<"\nDay 6 :Departure \nAfter breakfast, Railway station for your onward journey.";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}

void mumbai_contact()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t========================================";
	cout<<"\n\t\tContact information on Mumbai - Goa tour";
	cout<<"\n\t\t========================================";
	cout<<"\n\nPhone number   : 9999999999, 8888888888, 07422-222222 ";
	cout<<"\n\nE-Mail address : bb_touragency@gmail.com";
	cout<<"\n\nAddress        : Blue Bird tour agency, Manvanta nagar, Indore (M.P.)";
	cout<<"\n\nWebsite        : www.bbtouragency.com";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}


void delhi ()                    //Delhi package.
{
ghi:
clrscr();
setbkcolor(4);
char ch2;
cout<<"\t\t**********************************************\n";
cout<<"\t\t-----------DELHI - AGRA TOUR PACKAGE----------\n";
cout<<"\t\t**********************************************\n";
cout<<"\n\n1.General information\n2.Price information\n3.Sightseen(Places to visit)\n4.Tour shedule\n5.Contact information\nPress m to go to main menu\n";
cout<<"\nEnter your choice : ";
def:
cin>>ch2;
if (ch2=='m')
	{
	a=1;
	clrscr();
	return;
	}
switch (ch2)
	{
	case '1':
	delhi_general();
	goto ghi;
	case '2':
	delhi_price();
	goto ghi;
	case '3':
	delhi_sightseen();
	goto ghi;
	case '4':
	delhi_tourprogram();
	goto ghi;
	case '5':
	delhi_contact();
	goto ghi;
	default :
	cout<<"\nWrong choice!!!!!!!\nEnter the correct choice again : ";
	goto def;
	}
}

void delhi_general()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t=======================================";
	cout<<"\n\t\tGeneral information on Delhi - Agra tour";
	cout<<"\n\t\t========================================";
	cout<<"\n\nDuration       : 3 nights/4 days";
	cout<<"\n\nHotel          : Luxury hotels (upto 3 stars) with modern amenities";
	cout<<"\n\nMeals          : Breakfast, Lunch & dinner (Veg or Non-veg)";
	cout<<"\n\nTransportation : Train (AC coach) and Luxury buses";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void delhi_sightseen()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t=========================";
	cout<<"\n\t\t\tSightseen in Delhi - Agra";
	cout<<"\n\t\t\t=========================";
	cout<<"\n\nSightseen in Delhi - Akshardham, India gate, Qutubminar, Lotus temple,                               Birla temple, Metro visit, shopping at chandni chowk ";
	cout<<"\n\nSightseen in Agra - Taj Mahal, Agra fort, Swami bagh, Fatehpur sikri,                                Bharatpur bird santuary";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void delhi_price()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t======================================";
	cout<<"\n\t\tPrice information on Delhi - Agra tour";
	cout<<"\n\t\t======================================";
	cout<<"\n\n\tChildren (Below 8 years) 	        : Rs. 3501 per head";
	cout<<"\n\n\tTeens (8 - 15 years)     	        : Rs. 4001 per head";
	cout<<"\n\n\tYouth (16 - 59 years)    	        : Rs. 4401 per head";
	cout<<"\n\n\tSenior citizens (Above 60 years)        : Rs. 3700 per head";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void delhi_tourprogram()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t============================";
	cout<<"\n\t\t\tShedule of Delhi - Agra tour";
	cout<<"\n\t\t\t============================";
	cout<<"\nDay 1 : Train from shamgarh at 8.30 Am with packed dinner. Overnight journey in train.";
	cout<<"\nDay 2 : Mathura arrival at 3 Am and then proceed Agra from bus, Hotel check in and freshup & visit to bharatpur bird santuary then evening visit Agra. Marketing & night halt at Agra";
	cout<<"\nDay 3 : Today proceed to visit remaining sightseeing of Agra. Then after lunch proceed to Akshardham & evening hotel check in & dinner. Night stay at New Delhi.";
	cout<<"\nDay 4 : Today after breakfast proceed to visit Delhi local sightseeing & then evening pick up intercity express at 9.30 pm. Overnight journey in Train.";
	cout<<"\nDay 5 : Shamgarh arrival at 6.30 Am. Tour concludes with sweet memories of Agra - Delhi.2";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}

void delhi_contact()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t========================================";
	cout<<"\n\t\tContact information on Delhi - Agra tour";
	cout<<"\n\t\t========================================";
	cout<<"\n\nPhone number   : 9876543210, 8123446789, 0734-3050001";
	cout<<"\n\nE-Mail address : bb_touragency@gmail.com";
	cout<<"\n\nAddress        : Blue Bird tour agency, Manvanta nagar, Indore (M.P.)";
	cout<<"\n\nWebsite        : www.bbtouragency.com";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}


void kerala ()                    //Kerala package.
{
ghi:
clrscr();
setbkcolor(4);
char ch2;
cout<<"\t\t****************************************\n";
cout<<"\t\t-----------KERALA TOUR PACKAGE----------\n";
cout<<"\t\t****************************************\n";
cout<<"\n\n1.General information\n2.Price information\n3.Sightseen(Places to visit)\n4.Tour shedule\n5.Contact information\nPress m to go to main menu\n";
cout<<"\nEnter your choice : ";
def:
cin>>ch2;
if (ch2=='m')
	{
	a=1;
	clrscr();
	return;
	}
switch (ch2)
	{
	case '1':
	kerala_general();
	goto ghi;
	case '2':
	kerala_price();
	goto ghi;
	case '3':
	kerala_sightseen();
	goto ghi;
	case '4':
	kerala_tourprogram();
	goto ghi;
	case '5':
	kerala_contact();
	goto ghi;
	default :
	cout<<"\nWrong choice!!!!!!!\nEnter the correct choice again : ";
	goto def;
	}
}

void kerala_general()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t==================================";
	cout<<"\n\t\tGeneral information on Kerala tour";
	cout<<"\n\t\t==================================";
	cout<<"\n\nDuration       : 5 nights/6 days";
	cout<<"\n\nHotel          : Luxury hotels (upto 3 stars) with modern amenities";
	cout<<"\n\nMeals          : Breakfast, Lunch & dinner (Veg or Non-veg)";
	cout<<"\n\nTransportation : Train (AC coach) and Luxury buses";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void kerala_sightseen()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t===================";
	cout<<"\n\t\t\tSightseen in Kerala";
	cout<<"\n\t\t\t===================";
	cout<<"\n\nSightseen in Cochin - St Francis Church, Portuguese Houses, Chinese fishing nets, Synagogue, Jew Town, Mattancherry Palace";
	cout<<"\n\nSightseen in Munnar - Raja Malai, Neel Thar, Tea Museum, Mattupetty Dam, Eco-Point, boating in the Lake";
	cout<<"\n\nSightseen in Thekkady - cardamom hills, spice plantation like cardamom, Pepper, Coffee, and tea estate";
	cout<<"\n\nSightseen in Kumarakom - backwater stretches, lush paddy fields, highlands, houseboat - Deluxe A/c";

	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void kerala_price()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t================================";
	cout<<"\n\t\tPrice information on Kerala tour";
	cout<<"\n\t\t================================";
	cout<<"\n\n\tChildren (Below 8 years) 	        : Rs. 6001 per head";
	cout<<"\n\n\tTeens (8 - 15 years)     	        : Rs. 6501 per head";
	cout<<"\n\n\tYouth (16 - 59 years)    	        : Rs. 7001 per head";
	cout<<"\n\n\tSenior citizens (Above 60 years)        : Rs. 6701 per head";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void kerala_tourprogram()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t======================";
	cout<<"\n\t\t\tShedule of Kerala tour";
	cout<<"\n\t\t\t======================";
	cout<<"\nDay 1 : Cochin\nYou are greeted on arrival at Kochi Railway station by The Travel Planners representative and thereafter transfer to Hotel. Afternoon you can go for the sightseeing of Cochin.Evening go for shopping. Overnight at Hotel.";
	cout<<"\nDay 2 : Cochin - Munnar\nMorning drive to Munnar covering a distance of 130 kms // 4 hrs enroute visit Cheyyappara Waterfalls. On the way to Munnar you can see tea gardens spread like a green carpet over hundreds of kilometers, lush green hillsOn arrival check into the hotel. Overnight at Hotel";
	cout<<"\nDay 3 : In Munnar\nMorning sightseeing in Munnar.Overnight stay at Hotel.";
	cout<<"\nDay 4 : Munnar - Thekkady\nMorning drive to Thekkady covering a distance of 110 kms // 3.5 hrs through cardamom hills. Check into the Resort. After lunch visit spice plantation. Overnight at Hotel.";
	cout<<"\nDay 5 : Houseboat\nMorning proceed to Kumarakom (125 kms / 04 hrs).On arrival check into a Traditional Houseboat of Kerala Style. Stay overnight in Houseboat - Deluxe A/c";
	cout<<"\nDay 6 : Departure\nMorning after breakfast transfer to Railway Station for the onward Journey. ";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}

void kerala_contact()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t==================================";
	cout<<"\n\t\tContact information on Kerala tour";
	cout<<"\n\t\t==================================";
	cout<<"\n\nPhone number   : 9876543210, 8123446789, 0734-3050001 ";
	cout<<"\n\nE-Mail address : bb_touragency@gmail.com";
	cout<<"\n\nAddress        : Blue bird tour agency, Manvanta nagar, Indore (M.P.)";
	cout<<"\n\nWebsite        : www.bbtouragency.com";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}


void jammu()                    //J&K package.
{
ghi:
clrscr();
setbkcolor(4);
char ch2;
cout<<"\t\t********************************************\n";
cout<<"\t\t-----------JAMMU & KASHMIR PACKAGE----------\n";
cout<<"\t\t********************************************\n";
cout<<"\n\n1.General information\n2.Price information\n3.Sightseen(Places to visit)\n4.Tour shedule\n5.Contact information\nPress m to go to main menu\n";
cout<<"\nEnter your choice : ";
def:
cin>>ch2;
if (ch2=='m')
	{
	a=1;
	clrscr();
	return;
	}
switch (ch2)
	{
	case '1':
	jammu_general();
	goto ghi;
	case '2':
	jammu_price();
	goto ghi;
	case '3':
	jammu_sightseen();
	goto ghi;
	case '4':
	jammu_tourprogram();
	goto ghi;
	case '5':
	jammu_contact();
	goto ghi;
	default :
	cout<<"\nWrong choice!!!!!!!\nEnter the correct choice again : ";
	goto def;
	}
}

void jammu_general()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t===========================================";
	cout<<"\n\t\tGeneral information on Jammu & Kashmir tour";
	cout<<"\n\t\t===========================================";
	cout<<"\n\nDuration       : 7 nights/8 days";
	cout<<"\n\nHotel          : Houseboat and Luxury Hotel (upto 3 stars) with modern amenities";
	cout<<"\n\nMeals          : Breakfast, Lunch & dinner (Veg or Non-veg)";
	cout<<"\n\nTransportation : Train (AC coach) and Luxury buses";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void jammu_sightseen()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t============================";
	cout<<"\n\t\t\tSightseen in Jammu & Kashmir";
	cout<<"\n\t\t\t============================";
	cout<<"\n\nSightseen in Srinagar - Chashmi Shahi, Shalimar Bagh, Nishat Bagh,                                       Shikara ride on the Dal Lake, Sonmarg";
	cout<<"\n\nSightseen in Pahalgam - Pony rides and more beautiful spots";
	cout<<"\n\nSightseen in Gulmarg - Khilanmarg and more beautiful spots";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void jammu_price()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t=========================================";
	cout<<"\n\t\tPrice information on Jammu & Kashmir tour";
	cout<<"\n\t\t=========================================";
	cout<<"\n\n\tChildren (Below 8 years) 	        : Rs. 9001 per head";
	cout<<"\n\n\tTeens (8 - 15 years)     	        : Rs. 9501 per head";
	cout<<"\n\n\tYouth (16 - 59 years)    	        : Rs. 10101 per head";
	cout<<"\n\n\tSenior citizens (Above 60 years)        : Rs. 9501 per head";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void jammu_tourprogram()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t===============================";
	cout<<"\n\t\t\tShedule of Jammu & Kashmir tour";
	cout<<"\n\t\t\t===============================";
	cout<<"\nDay 1 : Arrive Srinagar\nTransfer by car to your House Boat. Check-in.";
	cout<<"\nDay 2 : Srinagar\nIn the morning, visit the Mughal Gardens. In the afternoon enjoy a Shikara ride on the Dal Lake.";
	cout<<"\nDay 3 : Srinagar\nBreakfast, then a full day tour of Sonmarg. Return houseboat in evening.";
	cout<<"\nDay 4 : Srinagar - Gulmarg\nDrive to Gulmarg (2 hours). Check-in. Rest of the day free at leisure.Visit Khilanmarg by pony. Stay at Hotel Hill Top for 1 night.";
	cout<<"\nDay 5 : Gulmarg - Pahalgam\nDrive to Pahalgam (5 hours drive).Check-in. Rest of the day free at leisure. Stay at Hotel Mount View for 2 nights.";
	cout<<"\nDay 6 : Pahalgam\nFull day at leisure to explore the natural beauty of Pahalgam. ";
	cout<<"\nDay 7 : Pahalgam - Srinagar\nDrive to Srinagar. Welcome drink on arrival and check-in. Stay at House Boat for 1 night. Afternoon free for shopping. ";
	cout<<"\nDay 8 : Departure\nAfter breakfast, transfer to the railway station for your train.";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}

void jammu_contact()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t===========================================";
	cout<<"\n\t\tContact information on Jammu & Kashmir tour";
	cout<<"\n\t\t===========================================";
	cout<<"\n\nPhone number   : 9876543210, 8123446789, 0734-3050001 ";
	cout<<"\n\nE-Mail address : bb_touragency@gmail.com";
	cout<<"\n\nAddress        : Blue bird tour agency, Manvanta nagar, Indore (M.P.)";
	cout<<"\n\nWebsite        : www.bbtouragency.com";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}


void andaman()                    //A & D package.
{
ghi:
clrscr();
setbkcolor(4);
char ch2;
cout<<"\t\t**********************************************\n";
cout<<"\t\t-----------ANDAMAN & NICOBAR PACKAGE----------\n";
cout<<"\t\t**********************************************\n";
cout<<"\n\n1.General information\n2.Price information\n3.Sightseen(Places to visit)\n4.Tour shedule\n5.Contact information\nPress m to go to main menu\n";
cout<<"\nEnter your choice : ";
def:
cin>>ch2;
if (ch2=='m')
	{
	a=1;
	clrscr();
	return;
	}
switch (ch2)
	{
	case '1':
	andaman_general();
	goto ghi;
	case '2':
	andaman_price();
	goto ghi;
	case '3':
	andaman_sightseen();
	goto ghi;
	case '4':
	andaman_tourprogram();
	goto ghi;
	case '5':
	andaman_contact();
	goto ghi;
	default :
	cout<<"\nWrong choice!!!!!!!\nEnter the correct choice again : ";
	goto def;
	}
}

void andaman_general()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t=============================================";
	cout<<"\n\t\tGeneral information on Andaman & Nicobar tour";
	cout<<"\n\t\t=============================================";
	cout<<"\n\nDuration       : 4 nights/5 days";
	cout<<"\n\nHotel          : Luxury Hotel (upto 3 stars) with modern amenities";
	cout<<"\n\nMeals          : Breakfast, Lunch & dinner (Veg or Non-veg)";
	cout<<"\n\nTransportation : Flight and Luxury buses";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void andaman_sightseen()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t==============================";
	cout<<"\n\t\t\tSightseen in Andaman & Nicobar";
	cout<<"\n\t\t\t==============================";
	cout<<"\n\nSightseen in Port Blair - Water Sports Complex, Corbyn’s Cove beach,                                     Chidya Tapu, Saw Mill, Forest Museum, Anthropological 				 Museum, Fisheries Museum, Naval Marine Museum and the                           Cottage Industries Emporium - for shopping & souvenirs.";
	cout<<"\n\nSightseen around Ross & Viper island - Chief Commissioner House,                                                      Government House, Church, Bakery, Press,                                       Swimming Pool, Cemetery, a Harbour Cruise";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void andaman_price()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t===========================================";
	cout<<"\n\t\tPrice information on Andaman & Nicobar tour";
	cout<<"\n\t\t===========================================";
	cout<<"\n\n\tChildren (Below 8 years) 	        : Rs. 10000 per head";
	cout<<"\n\n\tTeens (8 - 15 years)     	        : Rs. 10400 per head";
	cout<<"\n\n\tYouth (16 - 59 years)    	        : Rs. 11100 per head";
	cout<<"\n\n\tSenior citizens (Above 60 years)        : Rs.10300 per head";
	cout<<"\n\n\nPress enter key to go to previous menu..........";
	getch();
	}

void andaman_tourprogram()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t\t=================================";
	cout<<"\n\t\t\tShedule of Andaman & Nicobar tour";
	cout<<"\n\t\t\t=================================";
	cout<<"\nDay 1 : Arrive Andaman\nArrival at Port Blair in the morning by flight and transfer to hotel. After lunch proceed to the Water Sports Complex. Then proceed to show you Corbyn’s Cove beach. In the evening proceed to attend the enthralling Sound and Light Show at Cellular Jail.";
	cout<<"\nDay 2 : Port Blair - City Tour and Chidya Tapu\nAfter breakfast, start for a tour of places in & around Port Blair (City Tour) ";
	cout<<"\nDay 3 : Port Blair - North Bay /Ross Island & Viper Island\n under water marine life and varieties of corals by glass bottom boat and snorkeling in North Bay,After North Bay, proceed to Ross Island, the erstwhile capital of Port Blair during the British regime";
	cout<<"\nDay 4 : Port Blair - Wandoor & Red Skin or Jolly Buoy\nPrepare to explore the stunning underwater life of Andaman Islands and get lost in the magical underwater life with variety of fishes and corals";
	cout<<"\nDay 5 : Departure\n Depart Port Blair with Fond memories of these mesmerising Islands.";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}

void andaman_contact()
	{
	clrscr();
	setbkcolor(4);
	cout<<"\t\t=============================================";
	cout<<"\n\t\tContact information on Andaman & Nicobar tour";
	cout<<"\n\t\t=============================================";
	cout<<"\n\nPhone number   : 9876543210, 8123446789, 0734-3050001 ";
	cout<<"\n\nE-Mail address : bb_touragency@gmail.com";
	cout<<"\n\nAddress        : Blue bird tour agency, Manvanta nagar, Indore (M.P.)";
	cout<<"\n\nWebsite        : www.bbtouragency.com";
	cout<<"\n\nPress enter key to go to previous menu..........";
	getch();
	}



































