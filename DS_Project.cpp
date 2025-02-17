
//Group member names:
//Name:Muhammad Taha Khan || ID:FA22-BSCS-0116
//Name:Muhammad Suhaib    || ID:FA22-BSCS-0114

#include<iostream>
#include<conio.h>
using namespace std;

double All_Intersection(double fb_users,double insta_users,double yt_users,double fai,double yai,double fay,double users);

double Facebook_DS(double allint,double fb,double fi,double ft);

double Instagram_DS(double allint,double insta,double fi,double yi);

double YouTube_DS(double allint,double yt,double yi, double fy);

void I_Title();

void D_Title();

main()
{
	double limit,greatest_yai,greatest_fay,greatest_fai;
	double users,fb_users,insta_users,yt_users,fai,yai,fay;
	
	Universe:
    I_Title();
	cout<<"Set a limit as Universal: ";
	cin>> limit;

	if(limit<0)
	{
		cout<<"Enter Limit greater than 0. "<<endl;
		getch();
		system("cls");
		goto Universe;	
	}
	
	cout<<endl<<endl;
	
	All:
	cout<<"Enter number of users across all platforms: ";
	cin>> users;

	if(users>limit || users<0)
	{
		cout<<"Error. Enter valid value again:  " <<endl;
		goto All;
	}
	cout<<endl<<endl;
    int none=limit-users;
	
	Facebook:
	cout<<"Number of Facebook Users: ";
	cin>> fb_users;

	if(fb_users>users || fb_users<0)
	{
		cout<<"Invalid value"<<endl;
		goto Facebook;
	}
	cout<<endl<<endl;
	
	Instagram:
	cout<<"Number of Instagram Users: ";
	cin>> insta_users;
	
	if(insta_users>users || insta_users<0)
	{
		cout<<"Invalid value"<<endl;
		goto Instagram;
	}
	cout<<endl<<endl;
	
	YouTube:
	cout<<"Number of YouTube Users: ";
	cin>> yt_users;

	if(yt_users>users || yt_users<0)
	{
		cout<<"Invalid value"<<endl;
		goto YouTube;
	}
	cout<<endl<<endl;
	
	FAI:
	cout<<"Provide number of users who use Facebook & Insta: ";
	cin>> fai;

	if(fb_users>insta_users)
	{
		greatest_fai=fb_users;
	}
	else
	{
		greatest_fai=insta_users;
	}
	
	if(fai<0 || fai>greatest_fai)
	{
		cout<<"\nEnter valid value for Facebook & Insta Users: ";
		goto FAI;
	}
	cout<<endl<<endl;
	
	FAY:
	cout<<"Provide number of users who use Facebook & YouTube: ";
	cin>> fay;
	
	if(fb_users>yt_users)
	{
		greatest_fay=fb_users;
	}
	else
	{
		greatest_fay=yt_users;
	}
	
	if(fay<0 || fay>greatest_fay)
	{
		cout<<"\nEnter valid value for Facebook & YouTube Users: ";
		goto FAY;
	}
	cout<<endl<<endl;
	
	YAI:
	cout<<"Provide number of users who use YouTube & Insta: ";
	cin>> yai;
	
	if(insta_users>yt_users)
	{
		greatest_yai=insta_users;
	}
	else
	{
		greatest_yai=yt_users;
	}
	if(yai<0 || yai>greatest_yai)
	{
		cout<<"\nEnter valid value for YouTube & Instagram Users: ";
		goto YAI;
	}
	cout<<endl<<endl;
	
	double ALLINT;
	ALLINT=All_Intersection(fb_users,insta_users,yt_users,fai,yai,fay,users);
	
double t_fai;
	t_fai=fai-ALLINT;
	
double t_yai;
	t_yai=yai-ALLINT;

double t_fay;
	t_fay=fay-ALLINT;
	
 double Fb_only;
 Fb_only=Facebook_DS(ALLINT,fb_users,t_fai,t_fay);
 
 cout<<endl<<endl;
 
 double Insta_only;
 Insta_only=Instagram_DS(ALLINT,insta_users,t_fai,t_yai);
 
 cout<<endl<<endl;
 
 double Yt_only;
 Yt_only=YouTube_DS(ALLINT,yt_users,t_yai,t_fay);

 D_Title();
  
    cout<<" --------------------------------------------------------------------------------------"<<endl;
    cout<<"|               --------------                                             U="<<limit<<"           |"<<endl;
    cout<<"|              |    F="<<Fb_only<<"      |                                                           |"<<endl;
    cout<<"|      --------|---           |                                                           |"<<endl;
    cout<<"|     |   Y="<<Yt_only<<"  |"<<t_fay<<" |          |                                                           |"<<endl;
    cout<<"|     |       -|---|-------   |                                                           |"<<endl;
    cout<<"|     |      | | "<<ALLINT<<" |  "<<t_fai<<"    |  |                                                           |"<<endl;
    cout<<"|     |      |  ---|-------|--                                                            |"<<endl;
    cout<<"|     |      |  "<<t_yai<<"  |       |                                                              |"<<endl;
    cout<<"|      ------|-----        |                                                              |"<<endl;
    cout<<"|            |    I="<<Insta_only<<"      |                                                              |"<<endl;
    cout<<"|             -------------                                                None="<<none<<"         |"<<endl;
    cout<<" --------------------------------------------------------------------------------------";


	cout<<"\nThank you!!!";
	getch();
}

double All_Intersection(double fb_users,double insta_users,double yt_users,double fai,double yai,double fay,double users)
{
	double Intersection=users-fb_users-insta_users-yt_users+fai+yai+fay;
	return Intersection;
}

double Facebook_DS(double allint,double fb,double fi,double ft)
{
	double facebookOnly=fb-(allint+fi+ft);
	return facebookOnly;
} 

double Instagram_DS(double allint,double insta,double fi,double yi)
{
	double instagramOnly=insta-(allint+fi+yi);
	return instagramOnly;
}

double YouTube_DS(double allint,double yt,double yi, double fy)
{
	double youtubeOnly=yt-(allint+yi+fy);
	return youtubeOnly;
}

void D_Title()
{
    cout<<("        ==========================================\n");
    cout<<("                       VEN DIAGRAM          \n");
    cout<<("        ==========================================\n\n");
}

void I_Title()
{
    cout<<("        ==========================================\n");
    cout<<("                        INPUT DATA          \n");
    cout<<("        ==========================================\n\n");
}