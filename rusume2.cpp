#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	char a[50],ch;
	fstream bio;
	bio.open("filehandling",ios::in|ios::out);
	bio<<"                 BIO DATA "<<endl<<endl;
	cout<<"enter name : ";
	cin.getline(a,50);
	bio<<"Name            : "<<a<<endl;
	cout<<"enter father name : ";
	cin.getline(a,50);
	bio<<"Father Name     : "<<a<<endl;
	cout<<"enter mother name : ";
	cin.getline(a,50);
	bio<<"Mother Name     : "<<a<<endl;
	cout<<"enter date of birth: ";
	cin.getline(a,50);
	bio<<"Date Of Birth   : "<<a<<endl;
	cout<<"enter sex : ";
	cin.getline(a,50);
	bio<<"Sex             : "<<a<<endl;
	cout<<"enter Linkedin ID: : ";
	cin.getline(a,50);
	bio<<"Linkdin ID : "<<a<<endl;
	cout<<"enter GITHUB ID: ";
	cin.getline(a,50);
	bio<<"GITHUB ID    : "<<a<<endl;
	cout<<"enter HACKERRANK ID : ";
	cin.getline(a,50);
	bio<<"HACKERRANK ID        : "<<a<<endl;
	cout<<"enter CANVA ID : ";
	cin.getline(a,50);
	bio<<"CANVA ID        : "<<a<<endl;
	cout<<"enter language : ";
	cin.getline(a,50);
	bio<<"Language        : "<<a<<endl;
	bio.close();
	return 0;
}
