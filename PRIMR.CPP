#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<process.h>

 class owner                   //to save the record of the owner of the business
 {

   public:

     //data member of class owner

     int c;
     float Tturnover;
     long int emergencyno;
     int d;
     int m;
     int y;
     char name[20];
     char fathername[20];
     char address[20];
     long int pincode;
     char contry[20];
     char email[20];
     char education[20];
     char extraqualification[20];
     char experience[20];
     char sex;

     //constructor of class owner

    owner();

    //destructor of class owner

   ~owner()
    {
     }

     //member functions of class owner

    void gtinfo();
    int modify();
    void dsp();

  };

  //defination of constuctor of class owner

 owner::owner()
  {
   pincode=201080;
   strcpy( contry,"india");
   strcpy( education,"mtect");
   strcpy(extraqualification,"btect");
   strcpy(experience,"2 years");
   }

   // fuction to take the input of owner record

  void owner::gtinfo()
  {
  cout<<"\n enter your date of birth please";
  cout<<"\n date:";
  cin>>d;
  cout<<"\t month:";
  cin>>m;
  cout<<"\t year:";
  cin>>y;
  int c=0;

  // to check wheather the entered date is valid or not

  switch(m)
  {

    case 1:

      if (d>0 && d<=31)
	{
	 cout<<"valid";
	 c=1;
	}
      else
      {
       cout <<" invalid ";
      }
     break;

    case 2:

     if(y%4==0 && y%100!=0||y%400==0)
     if(d>0 && d<=29)
     {
     cout<<" valid";
     c=1;
     }
    else
     if(d>0 && d<=28)
      {
       cout<<"valid"  ;
       c=1;
      }
    else
    {
     cout<<"invalid" ;
    }
   break;

   case 3:

     if (d>0 && d<=31)
      {
	cout<<"valid";
	c=1;
      }
    else
     {
      cout <<" invalid ";
     }
   break;

   case 4:

     if (d>0 && d<=30)
      {
      cout<<"valid";
      c=1;
      }
    else
    {
     cout <<" invalid ";
    }
   break;

   case 5:

     if (d>0 && d<=31)
      {
      cout<<"valid";
      c=1;
      }
     else
     {
       cout <<" invalid ";
     }
   break;

   case 6:

     if (d>0 && d<=30)
      {
      cout<<"valid";
      c=1;
      }
     else
      {
       cout <<" invalid ";
      }
   break;

   case 7:

     if (d>0 && d<=31)
      {
      cout<<"valid";
      c=1;
      }
    else
     {
      cout <<" invalid ";
      }
   break;

   case 8:

     if (d>0 && d<=31)
      {
      cout<<"valid";
      c=1;
      }
    else
    {
     cout <<" invalid ";
    }
  break;

  case 9:

    if (d>0 && d<=30)
     {
     cout<<"valid";
     c=1;
     }
    else
     {
       cout <<" invalid ";
     }
  break;

  case 10:

    if (d>0 && d<=31)
     {
       cout<<"valid";
       c=1;
     }
    else
    {
     cout <<" invalid ";
    }
  break;

  case 11:

    if (d>0 && d<=30)
     {
     cout<<"valid";
     c=1;
     }
    else
    {
    cout <<" invalid ";
    }
  break;

  case 12:

    if (d>0 && d<=31)
     {
     cout<<"valid";
     c=1;
     }
    else
    {
     cout <<" invalid ";
    }
   break;

   default :

     cout<<" invalid";
   break;
  }
  if(c==1)
  {
   if(d==1||d==21||d==31)
     {
     cout<<endl<<d<<" st";
     }
   else if(d==2||d==22)
    {
    cout<<endl<<d<<" nd";
    }
   else if(d==3||d==23)
   {
   cout<<endl<<d<<" rd";
   }
   else
   {
    cout<<endl<<d<<" th";
   }
  cout<<"-"<<m;
  cout<<"-"<<y;
 }
   cout<<"\n please enter your name:";
   gets(name);
   cout<<" \n enter your father name:";
   gets(fathername);
   cout<<" \n enter you sex(m/f/n):";
   cin>>sex;
   cout<<"\n enter your address:";
   gets(address);
   cout<<"\n enter phone number please";
   cin>>emergencyno;
   cout<<"\n enter total turn over of the employee";
   cin>>Tturnover;
   cout<<"\t pincode:";
   cin>> pincode;
   cout<<"\t country:";
   cin>>contry;
   cout<<"\n enter your email address please";
   cin>>email;
   cout<<" \n enter your qualification for the job";
   cin>>education;
   cout<<" \n enter your extra qualication ";
   cin>>extraqualification;
   cout<<"\n enter your experience";
   cin>>experience;
   }

   // to display owner record

   void owner::dsp()
   {
   cout<<"\n owners name:";
   cout<<name;
   cout<<" \n father name:";
   cout<<fathername;
   cout<<" \n sex :";
   cout<<sex;
   cout<<"\n phone number";
   cout<<emergencyno;
   cout<<"\n enter your date o birth please";
   cout<<d<<"-"<<m<<"-"<<y;
   cout<<"\n enter total turn over of the employee";
   cout<<Tturnover;
   cout<<"\n enter your address:";
   cout<<address;
   cout<<"\t pincode:";
   cout<<pincode;
   cout<<"\t country:";
   cout<<contry;
   cout<<"\n enter your email address please";
   cout<<email;
   cout<<" \n enter your qualification for the job";
   cout<<education;
   cout<<" \n enter your extra qualication ";
   cout<<extraqualification;
   cout<<"\n enter your experience";
   cout<<experience;
   }

   // to modify owner record

   int owner::modify()
   {
   int t;
   char qq;
   int tr;
   long int phn;
   int d4;
   int m4;
   int y4;
   char on[20];
   char of[20];
   char ad[20];
   long int pn;
   char cn[20];
   char em[20];
   char edu[20];
   char qedu[20];
   //char experience[20];
   char sex;
   do
   {
   clrscr();
   cout<<" you want to modify which detail of the owner:\n1. name\n2. father's name \n 3. address\n 4. pincode \n 5. country\n 6. date of birth \n 7. turnover \n 8. email\n 9. eduction and extraqualification \n 10.sex\n11. phone number\n12.exit";
   cout<<" \n\n please enter your choice";
   cin>>t;
   switch(t)
   {
   case 1:

   cout<<"Enter new name of the owner(if same please enter(.) )";
   gets(on);
     if(strcmp(on,".")!=0)
      {
       strcpy(name,on);
       cout<<" successfully modified the detail";
      }
   break;

   case 2:

   cout<<" Enter your father name(if same please enter (.))";
   gets(of);
    if(strcmp(of,".")!=0)
     {
      strcpy(fathername,of);
      cout<<" successfully modified the detail";
     }
   break;

   case 3:

   cout<<"Enter new address of the owner(if same please enter(.) )";
   gets(ad);
     if(strcmp(ad,".")!=0)
      {
       strcpy(address,ad);
       cout<<" successfully modified the detail";
      }
   break;

   case 4:

   cout<<"Enter new pincode of the owner(if same please enter(-1) )";
   cin>>pn;
     if(pn!=-1)
      {
       pincode=pn;
       cout<<" successfully modified the detail";
      }
   break;

   case 5:

   cout<<"Enter new contry of the owner(if same please enter(.) )";
   gets(cn);
      if(strcmp(cn,".")!=0)
       {
	strcpy(contry,cn);
	cout<<" successfully modified the detail";
       }
   break;

   case 6:

   cout<<"Enter new date,month & year of the owner(if same please enter(-1) )";
   cin>>d4;
   cin>>m4;
   cin>>y4;
      if(d4!=-1)
       {
	d=d4;
	cout<<" successfully modified the detail";
       }
      if(m4!=-1)
       {
	m=m4;
	cout<<" successfully modified the detail";
       }
      if(y4!=-1)
       {
	y=y4;
	cout<<" successfully modified the detail";
       }
    break;

    case 7:

     cout<<"Enter new turnover of your business(if same please enter(-1) )";
     cin>>tr;
      if(tr!=-1)
       {
	Tturnover=tr;
	cout<<" successfully modified the detail";
       }
    break;

    case 8:

     cout<<"Enter new email of the owner(if same please enter(.) )";
     gets(em);
     if(strcmp(em,".")!=0)
      {
       strcpy(email,em);
       cout<<" successfully modified the detail";
      }
    break;

    case 9:

      cout<<"Enter 1.education or 2.extra qualificatin of the owner(if same please enter(.) )";
      gets(edu);
      if(strcmp(edu,".")!=0)
       {
	 strcpy(education,edu);
	 cout<<" successfully modified the detail";
       }
      gets(qedu);
     if(strcmp(qedu,".")!=0)
      {
       strcpy( extraqualification,qedu);
       cout<<" successfully modified the detail";
      }
    break;

    case 10:

      cout<<" enter the new phone number of the owner(if same please enter (-1)";
      cin>>phn;
      if(phn!=-1)
       {
	 emergencyno=phn;
	 cout<<" successfully modified the detail";
       }
    break;

    case 11:

      return(0);

    default:

      cout<<" enter wrong choice";
    return(0);

    }
   cout<<" do you want anything more";
   cout<<"please enter ypur choice (y/n)";
   cin>>qq;
  }
   while(qq=='y'||qq=='Y');

 return(0);
 }

 // class info_emp to save the record of employees

 class info_emp
  {
   public:
     float salary;
     int empno;
     long int emergencyno;
     int d1;
     int m1;
     int y1;
     int wh;
     char name[20];
     char fathername[20];
     char address[20];
     long int pincode;
     char contry[20];
     char email[20];
     char education[20];
     char extraqualification[20];
     char experience[20];
     char desig[20];
     char sex;
     int y;

     void getinfo();
     void display();
     int getempno();
     int mdfy();

  };

  // to get the employee number

 int info_emp::getempno()
  {
   return empno;
  }

  //to modify record of any employee

 int info_emp::mdfy()
 {
   char w;
   float sal;
   int long ep;
   int no;
   int d5;
   int m5;
   int y5;
   char nm[20];
   char fnm[20];
   char ad[20];
   long int code;
   char ctry[20];
   char eml[20];
   char ed[20];
   char exq[20];
   char exp[20];
   char de[20];
   char s;
   int t;
   do
   {
   clrscr();
   cout<<" you want to modify which detail of the employee:\n1. name\n2. father's name \n 3. address\n 4. pincode \n 5. country\n 6. date of birth \n 7. turnover \n 8. email\n 9. eduction and extraqualification \n 10.sex\n11. phone number\n12.exit";
   cout<<" \n\n please enter your choice";
   cin>>t;
   switch(t)
    {
     case 1:

      cout<<"Enter new name of the employee(if same please enter(.) )";
      gets(nm);
      if(strcmp(nm,".")!=0)
       {
	strcpy(name,nm);
	cout<<" successfully modified the detail";
       }
     break;

     case 2:

       cout<<" Enter your father name(if same please enter (.))";
       gets(fnm);
       if(strcmp(fnm,".")!=0)
	{
	  strcpy(fathername,fnm);
	  cout<<" successfully modified the detail";
	 }
     break;

     case 3:

       cout<<"Enter new address of the employee(if same please enter(.) )";
       gets(ad);
       if(strcmp(ad,".")!=0)
	{
	  strcpy(address,ad);
	  cout<<" successfully modified the detail";
	 }
     break;

     case 4:

       cout<<"Enter new pincode of the employee(if same please enter(-1) )";
       cin>>code;
       if(code!=-1)
	{
	  pincode=code;
	  cout<<" successfully modified the detail";
	}
     break;

     case 5:

       cout<<"Enter new contry of the employee(if same please enter(.) )";
       gets(ctry);
       if(strcmp(ctry,".")!=0)
	{
	  strcpy(contry,ctry);
	  cout<<" successfully modified the detail";
	}
      break;

      case 6:

	cout<<"Enter new date,month & year of the employee(if same please enter(-1) )";
	cin>>d5;
	cin>>m5;
	cin>>y5;
       if(d5!=-1)
	{
	 d1=d5;
	 cout<<" successfully modified the detail";
	}
      if(m5!=-1)
       {
	 m1=m5;
	cout<<" successfully modified the detail";
	}
      if(y5!=-1)
	{
	  y1=y5;
	  cout<<" successfully modified the detail";
	}
     break;

     case 7:

	cout<<"Enter new email of the owner(if same please enter(.) )";
	gets(eml);
	if(strcmp(eml,".")!=0)
	 {
	   strcpy(email,eml);
	    cout<<" successfully modified the detail";
	  }
      break;

      case 8 :

	  cout<<"Enter 1.education or 2.extra qualificatin of the owner(if same please enter(.) )";
	  gets(ed);
	  if(strcmp(ed,".")!=0)
	    {
	      strcpy(education,ed);
	      cout<<" successfully modified the detail";
	     }
	   gets(exq);
	  if(strcmp(exq,".")!=0)
	     {
	       strcpy( extraqualification,exq);
	       cout<<" successfully modified the detail";
	     }
      break;

      case 9:

	cout<<" enter the new phone number of the owner(if same please enter (-1)";
	cin>>no;
	 if(no!=-1)
	   {
	      emergencyno=no;
	      cout<<" successfully modified the detail";
	    }
      break;

      case 10:

       return(0);

      default:

       cout<<" enter wrong choice";
     }
   cout<<" do you want anything more";
   cout<<"please enter ypur choice (y/n)";
   cin>>w;
  }
  while(w=='y'||w=='Y');
 return(0);
 }

 // to get the information about the employees

  void info_emp::getinfo()
   {
   cout<<"\n please enter employee name:";
   gets(name);
   cout<<" \n enter your father name:";
   gets(fathername);
   cout<<"\n enter employee no.";
   cin>>empno;
   cout<<" \n enter you sex(m/f/n):";
   cin>>sex;
   cout<<"\n enter phone number please";
   cin>>emergencyno;
   cout<<"\n enter your date of birth please";
   cout<<"\n date:";
   cin>>d1;
   cout<<"\t month:";
   cin>>m1;
   cout<<"\t year:";
   cin>>y1;
   int wh=0;
  switch(m1)
   {
    case 1:

     if (d1>0 && d1<=31)
       {
	 cout<<"valid";
	 wh=1;
       }
     else
     {
	cout <<" invalid ";
     }
   break;

   case 2:

     if(y1%4==0 && y1%100!=0||y1%400==0)
     {
      if(d1>0 && d1<=29)
	{
	  cout<<" valid";
	   wh=1;
	}
     }
     else
      if(d1>0 && d1<=28)
       {
	 cout<<"valid"  ;
	 wh=1;
       }
     else
     {
      cout<<"invalid" ;
     }
   break;

   case 3:

    if (d1>0 && d1<=31)
      {
      cout<<"valid";
      wh=1;
      }
    else
    {
     cout <<" invalid ";
    }
   break;

   case 4:

    if (d1>0 && d1<=30)
     {
     cout<<"valid";
     wh=1;
     }
    else
    {
     cout <<" invalid ";
     }
   break;

   case 5:

    if (d1>0 && d1<=31)
     {
      cout<<"valid";
      wh=1;
      }
    else
    {
      cout <<" invalid ";
    }
   break;

   case 6:

    if (d1>0 && d1<=30)
     {
     cout<<"valid";
     wh=1;
    }
    else
    {
     cout <<" invalid ";
    }
   break;

   case 7:

    if (d1>0 && d1<=31)
     {
     cout<<"valid";
     wh=1;
      }
    else
    {
     cout <<" invalid ";
     }
   break;

   case 8:

    if (d1>0 && d1<=31)
     {
     cout<<"valid";
     wh=1;
     }
   else
    {
      cout <<" invalid ";
    }
   break;

   case 9:

     if (d1>0 && d1<=30)
      {
      cout<<"valid";
      wh=1;
      }
     else
     {
      cout <<" invalid ";
      }
   break;

   case 10:

    if (d1>0 && d1<=31)
      {
       cout<<"valid";
       wh=1;
      }
    else
     {
       cout <<" invalid ";
     }
   break;

   case 11:

     if (d1>0 && d1<=30)
      {
      cout<<"valid";
      wh=1;
      }
     else
      {
      cout <<" invalid ";
      }
   break;

   case 12:

    if (d1>0 && d1<=31)
     {
     cout<<"valid";
     wh=1;
     }
    else
    {
     cout <<" invalid ";
     }
   break;

   default :

     cout<<" invalid";
   break;
  }
   if(wh==1)
    {
      if(d1==1||d1==21||d1==31)
       {
      cout<<endl<<d1<<" st";
       }
      else if(d1==2||d1==22)
       {
	cout<<endl<<d1<<" nd";
       }
     else if(d1==3||d1==23)
     {
       cout<<endl<<d1<<" rd";
     }
     else
     {
      cout<<endl<<d1<<" th";
     }
    cout<<"-"<<m1;
    cout<<"-"<<y1;
  }
   cout<<"\n enter salary of the employee";
   cin>>salary;
   cout<<"\n enter your address:";
   gets(address);
   cout<<"\t pincode:";
   cin>> pincode;
   cout<<"\t country:";
   cin>> contry;
   cout<<"\n enter your email address please";
   cin>>email;
   cout<<" \n enter your qualification for the job";
   cin>>education;
   cout<<" \n enter your extra qualication ";
   gets(extraqualification);
   cout<<"\n enter your experience";
   cin>>experience;
   cout<<" \ndesignation:";
   gets(desig);
  }

  // to display the information of any employee

 void info_emp::display()
  {
   cout<<"\n employee name:";
   cout<<name;
   cout<<" \n father name:";
   cout<<fathername;
   cout<<"\n employee no.";
   cout<<empno;
   cout<<" \n sex :";
   cout<<sex;
   cout<<"\n phone number";
   cout<<emergencyno;
   cout<<"\n enter your date o birth please";
   cout<<d1<<"-"<<m1<<"-"<<y1;
   cout<<"\n enter salary of the employee";
   cout<<salary;
   cout<<"\n enter your address:";
   cout<<address;
   cout<<"\t pincode:";
   cout<<pincode;
   cout<<"\t country:";
   cout<<contry;
   cout<<"\n enter your email address please";
   cout<<email;
   cout<<" \n enter your qualification for the job";
   cout<<education;
   cout<<" \n enter your extra qualication ";
   cout<<extraqualification;
   cout<<"\n enter your experience";
   cout<<experience;
   cout<<" \ndesignation:";
   cout<<desig;
  }

  //to save the record of any client

 class info_client
  {
  //data members of class info_client
   public:
   float sal;
   long int emergencyno;
   int cno;
   int acn;
   int d2;
   int m2;
   int y2;
   int h;
   char name[20];
   char fathername[12];
   char address[29];
   long int pincode;
   char contry[12];
   char email[20];
   char education[20];
   char job;
   char experience[20];
   char desig[20];
   char sex[12];

   // member function of class info_client

   int getcno();
   void displayinfo();
   void getinf();
   int mdf();
 };

 // to get the client number of specific client

 int info_client::getcno()
  {
   return cno;
  }

  // to save the record of clients

 void info_client::getinf()
  {
   cout<<"\n please enter user name:";
   gets(name);
   cout<<" \n enter your father name:";
   gets(fathername);
   cout<<"\n enter account no.";
   cin>>acn;
   cout<<" \n client number is";
   cin>>cno;
   cout<<" \n enter you sex(m/f/n):";
   cin>>sex;
   cout<<"\n enter phone number please";
   cin>>emergencyno;
   cout<<"\n enter your date o birth please";
   cin>>d2>>m2>>y2;
   int h=0;

   // to check wheather the date is valid or not

   switch(m2)
    {
     case 1:

       if (d2>0 && d2<=31)
	 {
	  cout<<"valid";
	  h=1;
	 }
       else
	{
	 cout <<" invalid ";
	}
     break;

     case 2:

      if(y2%4==0 && y2%100!=0||y2%400==0)
      {
       if(d2>0 && d2<=29)
       {
	cout<<" valid";
	h=1;
       }
      }
     else if(d2>0 && d2<=28)
       {
	 cout<<"valid"  ;
	 h=1;
       }
     else
     {
       cout<<"invalid" ;
     }
    break;

    case 3:

     if (d2>0 && d2<=31)
       {
       cout<<"valid";
       h=1;
       }
     else
     {
       cout <<" invalid ";
       }
    break;

    case 4:

       if (d2>0 && d2<=30)
	 {
	  cout<<"valid";
	  h=1;
	  }
       else
	{
	 cout <<" invalid ";
	}
   break;

   case 5:

      if (d2>0 && d2<=31)
       {
       cout<<"valid";
       h=1;
       }
      else
       {
	cout <<" invalid ";
       }
   break;

   case 6:

      if (d2>0 && d2<=30)
       {
       cout<<"valid";
       h=1;
       }
      else
       {
	cout <<" invalid ";
       }
   break;

   case 7:

     if (d2>0 && d2<=31)
      {
      cout<<"valid";
      h=1;
     }
    else
    {
     cout <<" invalid ";
    }
   break;

   case 8:

     if (d2>0 && d2<=31)
      {
      cout<<"valid";
      h=1;
      }
     else
      {
       cout <<" invalid ";
      }
   break;

   case 9:

      if (d2>0 && d2<=30)
       {
	cout<<"valid";
	h=1;
       }
      else
       {
	cout <<" invalid ";
       }
   break;

   case 10:

     if (d2>0 && d2<=31)
       {
	cout<<"valid";
	h=1;
       }
      else
       {
	 cout <<" invalid ";
       }
   break;

   case 11:

     if (d2>0 && d2<=30)
      {
       cout<<"valid";
       h=1;
      }
     else
       {
	cout <<" invalid ";
       }
   break;

   case 12:

     if (d2>0 && d2<=31)
      {
      cout<<"valid";
      h=1;
      }
     else
      {
       cout <<" invalid ";
      }
   break;

   default :

     cout<<" invalid";
   break;
  }
   if(h==1)
     {
      if(d2==1||d2==21||d2==31)
      {
	cout<<endl<<d2<<" st";
      }
     else if(d2==2||d2==22)
      {
	cout<<endl<<d2<<" nd";
      }
     else if(d2==3||d2==23)
      {
	cout<<endl<<d2<<" rd";
      }
     else
       {
	 cout<<endl<<d2<<" th";
       }
      cout<<"-"<<m2;
      cout<<"-"<<y2;
     }
   cout<<"\n enter salary of the employee";
   cin>>sal;
   cout<<"\n enter your address:";
   gets(address);
   cout<<"\t pincode:";
   cin>> pincode;
   cout<<"\t country:";
   cin>> contry;
   cout<<"\n enter your email address please";
   cin>>email;
   cout<<" \n enter your qualification for the job";
   cin>>education;
   cout<<"\n enter your experience";
   cin>>experience;
   cout<<" \ndesignation:";
   gets(desig);
   }

 int info_client::mdf()
 {
   char w;
   float sal;
   int long ep;
   int no;
   int d5;
   int m5;
   int y5;
   char nm[20];
   char fnm[20];
   char ad[20];
   long int code;
   char ctry[20];
   char eml[20];
   char ed[20];
   char exq[20];
   char exp[20];
   char de[20];
   char s;
   int t;
   do
   {
   clrscr();
   cout<<" you want to modify which detail of the employee:\n1. name\n2. father's name \n 3. address\n 4. pincode \n 5. country\n 6. date of birth \n 7. turnover \n 8. email\n 9. eduction and extraqualification \n 10.sex\n11. phone number\n12.exit";
   cout<<" \n\n please enter your choice";
   cin>>t;
   switch(t)
    {

     case 1:

      cout<<"Enter new name of the employee(if same please enter(.) )";
      gets(nm);
      if(strcmp(nm,".")!=0)
       {
	strcpy(name,nm);
	cout<<" successfully modified the detail";
       }
     break;

     case 2:

       cout<<" Enter your father name(if same please enter (.))";
       gets(fnm);
       if(strcmp(fnm,".")!=0)
	{
	  strcpy(fathername,fnm);
	  cout<<" successfully modified the detail";
	 }
     break;

     case 3:

       cout<<"Enter new address of the employee(if same please enter(.) )";
       gets(ad);
       if(strcmp(ad,".")!=0)
	{
	  strcpy(address,ad);
	  cout<<" successfully modified the detail";
	 }
     break;

     case 4:

       cout<<"Enter new pincode of the employee(if same please enter(-1) )";
       cin>>code;
       if(code!=-1)
	{
	  pincode=code;
	  cout<<" successfully modified the detail";
	}
     break;

     case 5:

       cout<<"Enter new contry of the employee(if same please enter(.) )";
       gets(ctry);
       if(strcmp(ctry,".")!=0)
	{
	  strcpy(contry,ctry);
	  cout<<" successfully modified the detail";
	}
      break;

      case 6:

	cout<<"Enter new date,month & year of the employee(if same please enter(-1) )";
	cin>>d5;
	cin>>m5;
	cin>>y5;
       if(d5!=-1)
	{
	 d2=d5;
	 cout<<" successfully modified the detail";
	}
      if(m5!=-1)
       {
	 m2=m5;
	cout<<" successfully modified the detail";
	}
      if(y5!=-1)
	{
	  y2=y5;
	  cout<<" successfully modified the detail";
	}
     break;

     case 7:

	cout<<"Enter new email of the owner(if same please enter(.) )";
	gets(eml);
	if(strcmp(eml,".")!=0)
	 {
	   strcpy(email,eml);
	    cout<<" successfully modified thedetail";
	  }
      break;

      case 8 :

	  cout<<"Enter 1.education or 2.extra qualificatin of the owner(if same please enter(.) )";
	  gets(ed);
	  if(strcmp(ed,".")!=0)
	    {
	      strcpy(education,ed);
	      cout<<" successfully modified the detail";
	     }

      break;

      case 9:

	cout<<" enter the new phone number of the owner(if same please enter (-1)";
	cin>>no;
	 if(no!=-1)
	   {
	      emergencyno=no;
	      cout<<" successfully modified the detail";
	    }
      break;

      case 10:

       return(0);

     default:

       cout<<" enter wrong choice";
     }
   cout<<" do you want anything more";
   cout<<"please enter ypur choice (y/n)";
   cin>>w;
  }
  while(w=='y'||w=='Y');
 return(0);
 }

   // to display the record of the client

  void info_client::displayinfo()
  {
   cout<<"\n user name:";
   cout<<name;
   cout<<" \n father name:";
   cout<<fathername;
   cout<<"\n accno no.";
   cout<<acn;
   cout<<" \n sex :";
   cout<<sex;
   cout<<"\n phone number";
   cout<<emergencyno;
   cout<<"\n enter your date o birth please";
   cout<<d2;
   cout<<m2;
   cout<<y2;
   cout<<"\n enter salary of the employee";
   cout<<sal;
   cout<<"\n enter your address:";
   cout<<address;
   cout<<"\t pincode:";
   cout<<pincode;
   cout<<"\t country:";
   cout<<contry;
   cout<<"\n enter your email address please";
   cout<<email;
   cout<<" \n enter your qualification for the job";
   cout<<education;
   cout<<"\n enter your experience";
   cout<<experience;
   cout<<" \ndesignation:";
   cout<<desig;
  }

 // to check the validity of the date

int chk(int d,int m,int y)
{
int f=0;
switch(m)
{
case 1:
if (d>0 && d<=31)
{
cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 2:
 if(y%4==0 && y%100!=0||y%400==0)
 if(d>0 && d<=29)
 {cout<<" valid";
 f=1;
 }
 else
 if(d>0 && d<=28)
 {
 cout<<"valid"  ;
 f=1;
 }
 else
 cout<<"invalid" ;
 break;
 case 3:
if (d>0 && d<=31)
{cout<<"valid";
f=1;}
else
cout <<" invalid ";
break;
case 4:
if (d>0 && d<=30)
{cout<<"valid";
f=1;}
else
cout <<" invalid ";
break;
case 5:
if (d>0 && d<=31)
{cout<<"valid";
f=1;}
else
cout <<" invalid ";
break;
case 6:
if (d>0 && d<=30)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 7:
if (d>0 && d<=31)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 8:
if (d>0 && d<=31)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 9:
if (d>0 && d<=30)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 10:
if (d>0 && d<=31)
{
cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 11:
if (d>0 && d<=30)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
case 12:
if (d>0 && d<=31)
{cout<<"valid";
f=1;
}
else
cout <<" invalid ";
break;
default :
cout<<" invalid";
 }
return(f);
 }

  void main()
  {
  int q1,q2,q3;
   char ch='y';
   owner p;
   clrscr();

    owner o;

    // save the record of owner

    fstream fs;
    fs.open("owner.dat",ios::in|ios::out|ios::ate|ios::binary);

   strcpy(o.name,"sakshi");
   strcpy(o.fathername,"anil");
   strcpy(o.address,"shiv katra");
   o.pincode=201080;
   o.Tturnover=3.567;
   o.d=28;
   o.m=02;
   o.y=2001;
   strcpy(o.contry,"india");
   strcpy(o.email,"sakshiarora@gmail.com ");
   strcpy(o.education,"M.Tech");
   strcpy(o.extraqualification,"btech");
   strcpy(o.experience,"2");
   o.sex='f';
  fs.write((char*)&o,sizeof(o));
  if(!fs)
  {
  cout<<" cannot open ";
  getch();
 }

  info_emp e[5],em;
  info_client ic,cl;

  ifstream imf("empl.dat",ios::binary);
   if(!imf)
   {
   cout<<"!!!";
   getch();
   exit(0);
  }
  imf.close();
  int v;

 clrscr();

   cout<<"\n******************************************************************************" ;
   cout<<"\n******************************************************************************"  ;
   cout<<"\n******************************************************************************"  ;
   cout<<"\n\n##      ##   #######   ##       #######   #########   ##        ##  ######## ";
   cout<<"\n##      ##   ##        ##       ##        ##     ##   ## ##  ## ##  ##         ";
   cout<<"\n##  ##  ##   #####     ##       ##        ##     ##   ##   ##   ##  #####      ";
   cout<<"\n####  ####   ##        ##       ##        ##     ##   ##        ##  ##         ";
   cout<<"\n##      ##   #######   #######  #######   #########   ##        ##  ########   ";
   cout<<"\n\n******************************************************************************"  ;
   cout<<"\n******************************************************************************" ;
   cout<<"\n******************************************************************************";

    cout<<"\n\n\t\t NEW WORLD OF PRIMER_MANAGEMENT_OF_YOUR_BUSINESS.\n";
    cout<<"\n surely manage your business:\n";
    getch();
    clrscr();

    do
    {
    cout<<"\n\n\n\n you are the \n 1.owner \n 2. employee\n 3.client\n of your business ";
    cout<<"\n\nplease enter your choice";
    cin>>q1;
    switch(q1)
    {

     case 1:

      cout<<"\n1.display your details\n2. modify any detail";
      cout<<"\n 3. difference between two dates(after how many days you have to do payment next)";
      cout<<" \n4. employ record\n 5.client record";
      cout<<"\n 6. profit or loss face by your company";
      cout<<"\n 7. value of your money as per us dollars\n8. exit the programm";
      cin>>q2;
	switch(q2)
	 {
	   case 1:
	   o.dsp();
	   getch();
	  break;

	  case 2:
	    cout<<" you want modify the stored record";
	    o.modify();
	    fs.write((char*)&o, sizeof(o));
	    getch();
	  break;
	   case 3:

	  /* clrscr();
	    int d11,d22;
	    int m11,m22;
	    int y11,y22;
	    int yt=365,mt,dt;
	    int md,dd,yd;
	    int a=1,b=1;
	    const int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	    cout<<" enter the date ,month and year from which calcution start ";
	    cin>>d11;
	    cin>>m11;
	    cin>>y11;
	    a=chk(d11,m11,y11);
	    cout<<"enter the date ,month and year to which clculation end";
	    cin >>d22;
	    cin>>m22;
	    cin>>y22;
	    b=chk(d22,m22,y22);
	    if(a==1 && b==1)
	     {
	       if(y11==y22)
		{
		  yd=0;
		}
	       else
		{
		 if(y11%4==0 &&y11%100!=0 || y11%400==0)
		  {
		    if(y22%4==0 && y22%100!=0|| y22%400==0)
		    {
		      if(y11>y22)
		       {
			 yd=(y11-y22)*yt+2;
			}
		       else
			{
			  yd=(y22-y11)*yt+2;
			 }
		       if(m22>m11)
			{
			 if(m[m22-1]>m[m11-1])
			  {
			  --yd;
			  }
			 }
			}
		      else
		       {
			if(y11>y22)
			  {
			   yd=(y11-y22)*yt+1;
			  }
			else
			 {
			  yd=(y22-y11)*yt+1;
			 }
		       if (m11>m22)
			 {
			  if(m[m11-1]>m[m22-1])
			    {
			     --yd;
			    }
			 }
		      }
		   }
		 else
		   {
		     if(y11>y22)
		      {
			yd=(y11-y22)*yt;
		       }
		      else
		       {
			yd=(y22-y11)*yt;
		       }
		    }
		}
	       if(m11==m22)
		{
		 mt=0;
		}
	       else
		{
		  if(m11>m22)
		   {
		    for(int i =(m11-1);i>(m22-1);i--)
		     {
		      static int mtt=0;
		       mtt+=m[i];
		       mt=mtt;
		     }
		   }
		 else
		  {
		   for(int i =(m11-1);i<(m22-1);i++)
		    {
		     static int mtt=0;
		     mtt+=m[i];
		     mt=mtt;
		    }
		  }
		 }
	       if(d11==d22)
		 {
		  dd=0;
		  dt=(yd+mt)-dd;
		 }
	       else
		{
		  if (d11>d22)
		   {
		     dd=d11-d22;
		     dt=(yd+mt)-dd;
		   }
		 else
		  {
		   dd=d22-d11;
		   dt=(yd+mt)+dd;
		  }
		}
	       if( y11==y22)
		{
		 }
	       else
	       {
		 if(y11>y22)
		  {
		    for(int i=(y22+1) ;i<y11;i++)
		     {
		      if(i%4==0 &&i%100!=0 ||i%400==0)
			  {
			   cout<<endl;
			   cout<<i<<endl;
			   ++dt;
			  }
		      }
		   }
		 }

	     cout<<endl;
	     cout<<" total no. of days between";
	     cout<<dt;
	    }
	    */
	    break;
	    case 4:

	      cout<<"\n 1.insert new record of employee\n 2.display recorde saved in the file\n3. modify any entered record of the employee\n 4. delete any specific record of the entered employees \n5 . search and display record of any employee using name of the employee \n 6. search and display record for the given employee number of the employee \n7.sort the record in order of employee number\n 8. sort the record in alphabetic order of the name\n 9 sort the record in decending order of salary\n 10 exit ";
	      cout<<"\n\n please enter your choice";
	      cin>>q3;

	       switch(q3)
		{

		 case 1:

		  info_emp ep;
		  ifstream fi;
		  fi.open("empl.dat",ios::in|ios::binary);
		  ofstream fout;
		  fout.open("temp.dat",ios::out|ios::binary);
		  char l='y';
		   cout<<" enter the detail which has to be inserted";
		   ep.getinfo();
		   while(!fi.eof())
		    {
		      fi.read((char*)&em,sizeof(em));
		      if(ep.getempno()<=em.getempno())
		       {
			fout.write((char*)&ep,sizeof(ep));
			l='n';
			break;
		       }
		      else
		       {
			fout.write((char*)&em,sizeof(em));
		       }
		     }
		    if(l=='y')
		      {
			fout.write((char*)&ep,sizeof ep);
		      }
		    else if(!fi.eof())
		     {
		      while(!fi.eof())
		       {
			 fi.read((char*)&em,sizeof (em));
			 fout.write((char*)&em,sizeof(em));
		       }
		     }
		   fi.close();
		   fout.close();
		   remove("empl.dat");
		   rename("temp.dat","empl.dat");
	       break;

	       case 2:

		 int i=0;
		 info_emp eqq;
		 clrscr();
		 cout<<" file contain:";
		 fstream filee;
		 filee.open("empl.dat",ios::in|ios::binary);
		 while(!filee.eof())
		  {
		    filee.read((char*)&eqq,sizeof(info_emp));
		    if(filee.eof())
		     {
		      break;
		     }
		    eqq.display();
		    getch();
		    clrscr();
		   }
		 filee.close();
	       break;

	       case 3:

		int eno;
		long pos;
		char q='n';
		info_emp E;
		fstream fio("empl.dat",ios::in|ios::out|ios::binary);
		cout<<"please enter the employee number whose record has to be modify";
		cin>>eno;
		while(!fio.eof())
		  {
		   pos=fio.tellg();
		   fio.read((char*)&E,sizeof(E));
		   if(E.getempno()==eno)
		     {
		       E.mdfy();
		       fio.seekg(pos);
		       fio.write((char*)&E,sizeof E);
		       q='y';
		       break;
		      }
		    }
		if(q=='n')
		  {
		   cout<<" record not found";
		   }
		fio.seekg(0);
		cout<<" now file contains:";
		while(!fio.eof())
		  {
		    fio.read((char*)&E,sizeof E);
		    E.display();
		    getch();
		   }
		 fio.close();
	      break;

	      case 4:

		 int en;
		 long ps;
		 info_emp E1;
		 fstream f;
		 f.open("empl.dat",ios::in|ios::binary);
		 ofstream ft;
		 ft.open("temp.dat",ios::out|ios::binary);
		 char w='y';
		 char k='n';
		 cout<<" enter the employee number whose details has to be deleted";
		 cin>>en;
		  while(!f.eof())
		   {
		     f.read((char*)&E1,sizeof(E1));
		     if(E1.getempno()==en)
			{
			  E1.display();
			  w='n';
			  cout<<" are you sure ,you want to delete this record";
			  cout<<"\n(y/n)";
			  cin>>k;
			  if (k=='n')
			   {
			     ft.write((char*)&E1,sizeof E1);
			   }
			}
		      else
		       {
			 ft.write((char*)&E1,sizeof E1);
			}
		      }
		      if(w=='y')
		       {
			 cout<<"record not found";
		       }
		     f.close();
		     ft.close();
		     remove("empl.dat");
		     rename("temp.dat","empl.dat");
		     cout<<" now file contains:";
		     ifstream fo;
		     fo.open("empl.dat",ios::in|ios::binary);
		     while(!fo.eof())
		     {
		      fo.read((char*)&E,sizeof E);
		      E1.display();
		      getch();
		     }
		   fo.close();

	       break;

	       case 5:

		 cout<<"\n search and display record for a gien name of the employee";
		     char nh[20];
		     char r='n';
		     info_emp E2;
		     ifstream n;
		     n.open("empl.dat",ios::in|ios::binary);
		     cout<<" please enter the name whose details you want to see";
		     gets(nh);
		     while(!n.eof())
		      {
			n.read ((char*)&E2,sizeof E2);
			if(strcmp(E2.name,nh)==0)
			 {
			   E2.display();
			   r='y';
			   break;
			 }
		       if(r=='n')
			{
			  cout<<" record not found";
			}
		 }
	       n.close();

	     break;

	    case 6:

	      int enn;
	     char rh='n';
	     info_emp E03;
	     ifstream z;
	     z.open("empl.dat",ios::in|ios::binary);
	     cout<<" please enter the name whose details you want to see";
	     cin>>enn;
	     while(!z.eof())
	      {
		z.read ((char*)&E03,sizeof E03);
		if(E03.empno==enn)
		 {
		  E03.display();
		   rh='y';
		   break;
		 }
	       if(rh=='n')
		{
		  cout<<" record not found";
		}
	      }
	     z.close();
	     break;

	     case 7:

	     cout<<"\n to sort the record in order of employee number ";
	     fstream fnn;
	     fnn.open("empl.dat",ios::in|ios::binary);
	     info_emp a[100];
	     if(!fnn)
	     {
	     cout<<"\n file doesnot exist!!";
	     getch();
	     break;
	     }
	     int xy;
	     xy=0;
	     while(fnn.read((char*)&a[xy],sizeof a[xy]))
	      {
	       ++xy;
	      }
	     info_emp tmp;
	     int i1,j1;
	     for(i1=1;i1<xy;i1++)
	     {
	      for(j1=0;j1<xy-i1;j1++)
	      {
	       if(a[j1].empno<a[j1+1].empno)
	       {
	       tmp=a[j1];
	       a[j1]=a[j1+1];
	       a[j1+1]=tmp;
	       }
	      }
	     }
	     fnn.close();
	     fstream fll;
	     fll.open("empl.dat",ios::out|ios::binary);
	     i1=0;
	     while(i1<xy)
	      {
	      fll.write((char*)&a[i1],sizeof a[i1]);
	      ++i1;
	      }
	      fll.close();
	     cout<<"\n\nfile sorted";
	      break;

	      case 8:

	      cout<<"\n to sort the record in alphabetic order of employee name ";
	     fstream nf;
	     nf.open("empl.dat",ios::in|ios::binary);
	     info_emp k1[100];
	     if(!nf)
	     {
	     cout<<"\n file doesnot exist!!";
	     getch();
	     break;
	     }
	     int x1;
	     x1=0;
	     while(nf.read((char*)&k1[x1],sizeof k1[x1]))
	      {
	       ++x1;
	      }
	     info_emp tm;
	     int i2,j2;
	     for(i2=1;i2<x1;i2++)
	     {
	      for(j2=0;j2<x1-i2;j2++)
	      {
	       if(strcmp(k1[j2].name,k1[j2+1].name)>0)
	       {
	       tm=k1[j2];
	       k1[j2]=k1[j2+1];
	       k1[j2+1]=tm;
	       }
	      }
	     }
	     nf.close();
	     fstream fl;
	     fl.open("empl.dat",ios::out|ios::binary);
	     i2=0;
	     while(i2<x1)
	      {
	      fl.write((char*)&k1[i2],sizeof k1[i2]);
	      ++i2;
	      }
	      fl.close();
	     cout<<"\n\nfile sorted";
	      break;

	      case 9:

	      cout<<"\n to sort the record in decreasing order of salary ";
	     fstream bn;
	     bn.open("empl.dat",ios::in|ios::binary);
	     info_emp k2[100];
	     if(!bn)
	     {
	     cout<<"\n file doesnot exist!!";
	     getch();
	     break;
	     }
	     int zy;
	     zy=0;
	     while(bn.read((char*)&k2[zy],sizeof k2[zy]))
	      {
	       ++zy;
	      }
	     info_emp t;
	     int i3,j3;
	     for(i3=1;i3<zy;i3++)
	     {
	      for(j3=0;j3<zy-i3;j3++)
	      {
	       if(k2[j3].salary<k2[j3+1].salary);
	       {
	       t=k2[j3];
	       k2[j3]=k2[j3+1];
	       k2[j3+1]=t;
	       }
	      }
	     }
	     bn.close();
	     fstream ef;
	     ef.open("empl.dat",ios::out|ios::binary);
	     i3=0;
	     while(i3<zy)
	      {
	      ef.write((char*)&k2[i3],sizeof k2[i3]);
	      ++i3;
	      }
	      ef.close();
	     cout<<"\n\nfile sorted";
	      break;

	     case 10:

	     exit(0);

	     default:

	     cout<<" wrong choice";

	     }

	   break;

	   case 5 :

	      cout<<"\n 1.insert new record of client\n 2.display record saved in the file\n3. modify any entered record of the client\n 4. delete any specific record of the entered client\n5 . search and display record of a given name of the client\n 6.search and display record for a given client number \n7.sort the record in order of client number\n 8. sort te record in alphabetic order of client's name\n 9. exit";
	      cout<<" please enter your choice";
	      cin>>v;
	      switch(v)
	       {
	       case 1:

		  info_client cp,cm;
		  ifstream i;
		  i.open("clt.dat",ios::in|ios::binary);
		  ofstream out;
		  out.open("temp.dat",ios::out|ios::binary);
		  char ql='y';
		   cout<<" enter the detail which has to be inserted";
		   cp.getinf();
		   while(!i.eof())
		    {
		      i.read((char*)&cm,sizeof(cm));
		      if(cp.getcno()<=cm.getcno())
		       {
			out.write((char*)&cp,sizeof(cp));
			ql='n';
			break;
		       }
		      else
		       {
			out.write((char*)&cm,sizeof(cm));
		       }
		     }
		    if(ql=='y')
		      {
			out.write((char*)&cp,sizeof cp);
		      }
		    else if(!i.eof())
		     {
		      while(!i.eof())
		       {
			 i.read((char*)&cm,sizeof (cm));
			 out.write((char*)&cm,sizeof(cm));
		       }
		     }
		   i.close();
		   out.close();
		   remove("clt.dat");
		   rename("temp.dat","clt.dat");
	       break;

	case 2:

	  info_client ct;
	  clrscr();
	  cout<<" file contain:";
	  fstream in;
	  in.open("clt.dat",ios::in|ios::binary);
	  while(!in.eof())
	   {
	    in.read((char*)&ct,sizeof(info_client));
	    if(in.eof())
	     {
	      break;
	     }
	    ct.displayinfo();
	    getch();
	   }
	  in.close();
      break;

      case 3:

	int cn;
	int pos=0;
	int long sq;
	char eq='n';
	info_client C;
	fstream io;
	io.open("clt.dat",ios::in|ios::out|ios::binary);
	cout<<"please enter the employee number whose record has to be modify";
	cin>>cn;
	while(!io.eof())
	   {
	     pos=io.tellg();
	     io.read((char*)&C,sizeof(C));
	       if(C.getcno()==cn)
		 {
		   C.mdf();
		  io.seekg(sq);
		  io.write((char*)&C,sizeof C);
		  eq='y';
		  break;
		 }
	     }
	 if(eq=='n')
	   {
	     cout<<" record not found";
	   }
	 io.seekg(0);
	  cout<<" now file contains:";
	  while(!io.eof())
	     {
	      io.read((char*)&C,sizeof C);
	      C.displayinfo();
	      getch();
	     }
	 io.close();
	 break;

	 case 4:

	    int n;
	    long p;
	    info_client C1;
	    fstream ff;
	    ff.open("clt.dat",ios::in|ios::binary);
	    ofstream t;
	    t.open("temp.dat",ios::out|ios::binary);
	    char u='y';
	    char j='n';
	    cout<<" enter the client number whose details has to be deleted";
	    cin>>n;
	    while(!ff.eof())
	     {
	      ff.read((char*)&C1,sizeof(C1));
	      if(C1.cno==n)
		{
		  C1.displayinfo();
		  u='n';
		  cout<<" are you sure ,you want to delete this record";
		  cout<<"\n(y/n)";
		  cin>>j;
		  if (j=='n')
		   {
		     t.write((char*)&C1,sizeof C1);
		   }
		 }
	       else
		{
		 t.write((char*)&C1,sizeof C1);
		}
	       }
		if(u=='y')
		 {
		   cout<<"record not found";
		 }
		ff.close();
		t.close();
		remove("clt.dat");
		rename("temp.dat","clt.dat");
		cout<<" now file contains:";
		fstream fo;
		fo.open("clt.dat",ios::in|ios::binary);
		while(!fo.eof())
		 {
		   fo.read((char*)&C1,sizeof C1);
		   C1.displayinfo();
		   getch();
		 }
		fo.close();
		break;

		case 5:

		   cout<<" search and display record for a given name of the client ";

		     char h[20];
		    char z='n';
		    info_client C2;
		    ifstream fn;
		    fn.open("clt.dat",ios::in|ios::binary);
		    cout<<" please enter the name whose details you want to see";
		    gets(h);
		    while(!fn.eof())
		     {
		       fn.read ((char*)&C2,sizeof C2);
		       if(strcmp(C2.name,h)==0)
			 {
			   C2.displayinfo();
			   z='y';
			   break;
			  }
			 }
			if(z=='n')
			 {
			   cout<<" record not found";
			 }

			fn.close();
			break;

			  case 6:

			   int cnn;
			   char Q='n';
			  info_client C3;
			  ifstream file;
			  file.open("clt.dat",ios::in|ios::binary);
			  cout<<" please enter the employee number whose details you want to see";
			  cin>>cnn;
			  while(!file.eof())
			    {
			      file.read ((char*)&C3,sizeof C3);
			      if(C3.cno==cnn)
			       {
				C3.displayinfo();
				Q='y';
				break;
				}
			     }
			   if(Q=='n')
			    {
			     cout<<" record not found";
			    }
			  file.close();


		break;

		case 7:

		 cout<<"\n to sort the record in order of client number ";
		fstream fstr;
		fstr.open("clt.dat",ios::in|ios::binary);
		info_client cc[100];
		if(!fstr)
		 {
		  cout<<"\n file doesnot exist!!";
		  getch();
		  break;
		 }
	       int x4;
		x4=0;
	       while(fstr.read((char*)&cc[x4],sizeof cc[x4]))
		{
		 ++x4;
		}
	       info_client t1;
	       int i4,j4;
		for(i4=1;i4<x4;i4++)
		  {
		   for(j4=0;j4<x4-i4;j4++)
		     {
		      if(cc[j4].cno<cc[j4+1].cno)
		      {
			 t1=cc[j4];
			 cc[j4]=cc[j4+1];
			 cc[j4+1]=t1;
		      }
		     }
		    }
	     fstr.close();
	     fstream fst;
	     fst.open("clt.dat",ios::out|ios::binary);
	     i4=0;
	     while(i4<x4)
	      {
	      fst.write((char*)&cc[i4],sizeof cc[i4]);
	      ++i4;
	      }
	      fst.close();
	     cout<<"\n\nfile sorted";
	      break;

	      case 8:

	      cout<<"\n to sort the record in alphabetic order of client name ";
	     fstream fs;
	     fs.open("clt.dat",ios::in|ios::binary);
	     info_client k5[100];
	     if(!fs)
	     {
	     cout<<"\n file doesnot exist!!";
	     getch();
	     break;
	     }
	     int x5;
	     x5=0;
	     while(fs.read((char*)&k5[x5],sizeof k5[x5]))
	      {
	       ++x5;
	      }
	     info_client cnt;
	     int i5,j5;
	     for(i5=1;i5<x5;i5++)
	     {
	      for(j5=0;j5<x5-i5;j5++)
	      {
	       if(strcmp(k5[j5].name,k5[j5+1].name)>0)
	       {
	       cnt=k5[j5];
	       k5[j5]=k5[j5+1];
	       k5[j5+1]=cnt;
	       }
	      }
	     }
	     fs.close();
	     fstream sf;
	     sf.open("clt.dat",ios::out|ios::binary);
	     i5=0;
	     while(i5<x5)
	      {
	      sf.write((char*)&k5[i5],sizeof k5[i5]);
	      ++i5;
	      }
	      sf.close();
	     cout<<"\n\nfile sorted";
	      break;

	      case 9:

	      exit(0);

	      default :
	      cout<<" wrong choice";

	      }

		  break;

		  case 6:

		  clrscr();
		  getch();
		  float r;
		  int t1,t2;
		   cout<<" enter last turnover of the bussiness";
		   cin>>t1;
		   cout<<" enter the latest turnover of your business";
		   cin>>t2;
		   if(t1>t2)
		   {
		    cout<<"the decrese percentage";
		    r=((t1-t2)*100/t1);
		    cout<<r;

		    }
		  else
		   {
		    cout<<" the increased percentage";
		    r=((t2-t1)*100/t1);
		    cout<<r;
		    }
		 break;

		 case 7:

		 o.gtinfo();
		 fstream str;
		 str.open("owner.dat",ios::in|ios::out|ios::binary);
		 str.write((char*)&o,sizeof o);
		 break;

		 case 8:

		 exit(0);

		 default :
		  cout<<" wrong choice";
		}


	  break;

	case 2:


	int y;
	 cout<<"\n 1.wants to see your details \n 2. want to check offers for employees\n 3. rules for employees\n 4.requirement for being an employee of this business\n 5. exit the programm";
	 cout<<" please enter your choice";
	 cin>>y;
	 switch(y)
	  {
	   case 1:
	    int wht;
	     cout<<" search and display record of any employee either using \n(i)name of the employee \n (ii) employee number of the employee";
	     cout<<" please enter your choice";
	     cin>>wht;

	      switch(wht)
	       {
		 case 1:

		  char nh[20];
		  char r='n';
		  info_emp E2;
		  ifstream fin("empl.dat",ios::in);
		  cout<<" please enter the name whose details you want to see";
		  gets(nh);
		  while(!fin.eof())
		   {
		   fin.read ((char*)&E2,sizeof E2);
		   if(strcmp(E2.name,nh)==0)
		   {
		    E2.display();
		    r='y';
		    break;
		   }
		   }
		  if(r=='n')
		   {
		   cout<<" record not found";
		   }
		   fin.close();

		 break;

		 case 2:

		 int e;
		 char p='n';
		 info_emp E3;
		 ifstream fn("empl.dat",ios::in);
		 cout<<" please enter the employee number whose details you want to see";
		 cin>>e;
		 while(!fn.eof())
		  {
		    fn.read ((char*)&E3,sizeof E3);
		    if(E3.getempno()==e)
		    {
		    E3.display();
		    p='y';
		    break;
		  }
	       }
	  if(p=='n')
	   {
	     cout<<" record not found";
	   }
	   fn.close();
	   }

	break;

	case 2:

	   clrscr();
	   cout<<" Bonus for employee are as follows: ";
	   cout<<"Diwali Bonus 20 percent";
	   cout<<"Top Performer Bonus 25 percent";
	   cout<<"End of Year Bonus 10 percent";

	break;

	case 3:

	   clrscr();
	   cout<<"Rules for employee";
	   cout<<"Per year 20 leaves Policy";
	   cout<<"Employee should adhere to Timings as per their project";
	   cout<<"Employee salary appreciation based on their performance";
	   cout<<"Employee should follow proper dress code";
	   cout<<"Employee should respect their colleague";

	break;

	case 4:

	  clrscr();
	  cout<<"\n1.Minimum Requirement";
	  cout<<"\n 2.Candidate should be Graduate";
	  cout<<"\n 3.Candiate should have minimum 80 percent through out";
	  cout<<"\n 4Candidate should be good in communication";

	 break;

	case 5:

	 exit(0);

	 default:
	 cout<<"\n\n entered wrong choice";

	}
	break;

	case 3:

	  clrscr();
	  int jy;

	  cout<<"\n 1.wants to see your details \n 2. want to check offers for clients\n 3.requirement for being an client of this business\n 4. exit the programm";
	  cout<<" please enter your choice";
	  cin>>jy;

	 switch(jy)
	 {
	  case 1:
	   int wh;
	   cout<<" search and display record of any client either using \n(i)name of the employee \n (ii) employee number of the employee";
	   cout<<" please enter your choice";
	   cin>>wh;

	   switch(wh)
	   {
	    case 1:

	    char nh[20];
	    char r='n';
	    info_client C2;
	    ifstream fin;
	    fin.open("clt.dat",ios::in|ios::binary);
	    cout<<" please enter the name whose details you want to see";
	    gets(nh);
	    while(!fin.eof())
	    {
	    fin.read ((char*)&C2,sizeof C2);
	    if(strcmp(C2.name,nh)==0)
	     {
	      C2.displayinfo();
	      r='y';
	      break;
	     }
	     }
	   if(r=='n')
	     {
	      cout<<" record not found";
	     }
	 fin.close();

	 break;

	 case 2:

	   int e;
	   char p='n';
	   info_client C3;
	   ifstream fn;
	   fn.open("clt.dat",ios::in|ios::binary);
	   cout<<" please enter the client number whose details you want to see";
	   cin>>e;
	   while(!fn.eof())
	   {
	    fn.read ((char*)&C3,sizeof C3);
	    if(C3.cno==e)
	     {
	      C3.displayinfo();
	      p='y';
	      break;
	    }
	   }
	   if(p=='n')
	    {
	      cout<<"\n record not found";
	    }
	   fn.close();
	   }

     break;

     case 2:

      clrscr();
      cout<<endl<<endl;
      cout<<"1. offers for client are as follows: ";
      cout<<"\n 2. Diwali Bonus 20 percent";
      cout<<"\n 3. Top Performer Bonus 25 percent";
      cout<<"\n 4. End of Year Bonus 10 percent";

     break;

     case 3 :

      clrscr();
      cout<<endl<<endl;
      cout<<"1. Minimum Requirement";
      cout<<"\n2. Client should be an indian citizen";
      cout<<"\n3. Client should have pan card and adhar card";
      cout<<"\n4. Client company should be legally regestered";
      break;

     case 4:
      exit(0);

      default:
      cout<<"\n\nentered wrong choice ";
    }
      }
   cout<<"ch:";
   cin>>ch;
   }while(ch=='y'||ch=='Y');

   getch();

   clrscr();
  cout<<"\n******************************************************************************" ;
  cout<<"\n******************************************************************************"  ;
  cout<<"\n******************************************************************************"  ;
  cout<<"\t\t  This primer  manages your  business ";
  cout<<"\n\n******************************************************************************"  ;
  cout<<"\n******************************************************************************" ;
  cout<<"\n******************************************************************************";

 getch();
 exit(0);
 }
