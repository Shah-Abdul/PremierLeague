//PROJECT DONE BY SHAH AND PRATEEK
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<fstream.h>
class quest
{
	public:
	char q[100];
	char opt[80];
	char ans;
}obj[25];
void teamlist();
void fixturelist(int);
void monthlist();
void iniques();
int quiz();
void statlist(int);
char tempq[60],tempo[80],tempq17[60],tempq9[60];
void main()
{
clrscr();
textcolor(RED);

randomize();
int gd =DETECT,gm,p[20];
initgraph(&gd,&gm,"d:\\turbo\\tc\\bgi");
char n,team[3],month[3],stats[3],c[3]; //think only strings can be atoi-d
int tn,mn,sn;
	setfillstyle(0,WHITE);
	for(int x=1,y=((x*x+150*x))/(100);y>=0;x++)
	   {
		y=((x*x+150*x))/(100);
		p[20]=(x-(320-320),y-(240-215),x-(320-345),y-(240-230),x-(320-340),y-(240-255),x-(320-315),y-(240-260),x-(320-298),y-(240-236));
		delay(20);
		cleardevice();
		for(int i=50;i<52;i++)
		  circle(x,y,i);
		fillpoly(5,p);
		line(x-(320-298),y-(240-236),x-(320-272),y-(240-236));   //cos tried with centre =320,240
		line(x-(320-305),y-(240-289),x-(320-315),y-(240-260));
		line(x-(320-358),y-(240-272),x-(320-340),y-(240-255));
		line(x-(320-366),y-(240-219),x-(320-345),y-(240-230));
		line(x-(320-316),y-(240-190),x-(320-320),y-(240-215));
		line(x-(320-298),y-(240-236),x-(320-315),y-(240-260));
		line(x-(320-315),y-(240-260),x-(320-340),y-(240-255));
		line(x-(320-340),y-(240-255),x-(320-345),y-(240-230));
		line(x-(320-345),y-(240-230),x-(320-320),y-(240-215));
		line(x-(320-320),y-(240-215),x-(320-298),y-(240-236));
	   }
	for(int i=0;i<=10;++i)
		{
			settextstyle(1,0,4);
			setcolor(RED);
			outtextxy(100,100,"WELCOME TO THE WORLD OF");
			settextstyle(3,0,6);
			setcolor(YELLOW);
			outtextxy(16,200,"EnGLisH PrEmIeR LeAgUe");
			settextstyle(0,0,2);
			if(i%2==0)
				setcolor(GREEN);
			else
				setcolor(BLACK);
			      for(int x=0;x<=640;x+=78)

					  {

							outtextxy(x,0,"*");
							outtextxy(x,463,"*");

					  }




			delay(450);

		}									 //n for choosing 1/2/3 in main menu, team[30] for entering name of team
	cleardevice();
	settextstyle(2,0,20);
	setcolor(WHITE);
	outtextxy(185,10,"INTRODUCTION");
	//brief intro of epl
	settextstyle(12,0,20);
	outtextxy(50,80,"The Premier League is Britain's primary football competition. It is");
	outtextxy(30,100," a corporation in which the 20 member clubs act as shareholders. Seasons");
	outtextxy(25,120," run from August to May, with teams playing 38 matches each, totalling 380");
	outtextxy(40,140," matches in the season. It is currently sponsored by Barclays Bank and");
	outtextxy(80,160," thus officially known as the Barclays Premier League. ");
	outtextxy(70,180,"Outside of Great Britain it is commonly referred to as the");
	outtextxy(220,200," English Premier League.");
	settextstyle(1,0,3);
	setcolor(RED);
	outtextxy(20,420,"PRESS ANY KEY TO CONTINUE");
	getch();
	mainmenu:
	cleardevice();
	settextstyle(10,0,4);
	setcolor(BLUE);
	outtextxy(30,20,"Press-");
	settextstyle(5,0,3);
	setcolor(WHITE);
	outtextxy(70,100,"'1' for viewing details of teams");
	outtextxy(70,130,"'2' for fixture list of a month");
	outtextxy(70,160,"'3' for Stats of English Premier league");
	outtextxy(70,190,"'4' for quiz");
	outtextxy(70,220,"'5' to exit\n");
	n=getch();
		while(!(n=='1'||n=='2'||n=='3'||n=='4'||n=='5'))
		    {    setcolor(RED);
			 settextstyle(0,0,1);
			 outtextxy(70,300,"Invalid value entered!! Press again:");
			do
			 {
			    n=getch();
			 }while(!(n=='1'||n=='2'||n=='3'||n=='4'||n=='5'));
			 setcolor(YELLOW);
			switch(n)
			  {case '1':outtextxy(70,310,"1");
					break;
			   case '2':outtextxy(70,310,"2");
					break;
			   case '3':outtextxy(70,310,"3");
					break;
			   case '4':outtextxy(70,310,"4");
					break;
			   case '5':outtextxy(70,310,"5");
					break;
			  }
			delay(500);
		     }
	cleardevice();
	switch(n)
		{case '1':               fix:
					 cleardevice();
					 teamlist();
					 if(team[0]=getch())
					   {cleardevice();
					    setcolor(WHITE);
					    settextstyle(10,0,4);
					    c[0]=team[0];
					    outtextxy(20,20,c);
					    for(int i=1;int(team[i-1])!=13;i++)
						{
						  team[i]=getch();
						  c[0]=team[i];
						  outtextxy(20+i*25,20,c);
						}
					   }
					 cleardevice();
					 if(team[0]=='\r')
					   tn=0;
					 else
					   tn=atoi(team);
					 while(!(tn==1||tn==2||tn==3||tn==4||tn==5||tn==6||tn==7||tn==8||tn==9||tn==10||tn==11||tn==12||tn==13||tn==14||tn==15||tn==16||tn==17||tn==18||tn==19||tn==20))
						{
							do
							 {      setcolor(RED);
								settextstyle(0,0,1);
								outtextxy(480,190,"Invalid value");
								outtextxy(480,210," entered !!");
								outtextxy(480,230," Enter again:");
									  teamlist();
									  if(team[0]=getch())
										{
										 cleardevice();
										 setcolor(WHITE);
										    settextstyle(10,0,4);
										    c[0]=team[0];
											    outtextxy(20,20,c);
											    for(int i=1;int(team[i-1])!=13;i++)
											{
											  team[i]=getch();
											  c[0]=team[i];
											  outtextxy(20+i*25,20,c);
											}
										   }
									  if(team[0]=='\r')
									   tn=0;
									  else
									   tn=atoi(team);
									  cleardevice();

							 }while(!(tn==1||tn==2||tn==3||tn==4||tn==5||tn==6||tn==7||tn==8||tn==9||tn==10||tn==11||tn==12||tn==13||tn==14||tn==15||tn==16||tn==17||tn==18||tn==19||tn==20));
						}
					 cleardevice();
					 ifstream fin;
					 switch(tn)
					  {
					  case 1:fin.open("1.txt");
						 break;
					  case 2:fin.open("2.txt");
						 break;
					  case 3:fin.open("3.txt");
						 break;
					  case 4:fin.open("4.txt");
						 break;
					  case 5:fin.open("5.txt");
						 break;
					  case 6:fin.open("6.txt");
						 break;
					  case 7:fin.open("7.txt");
						 break;
					  case 8:fin.open("8.txt");
						 break;
					  case 9:fin.open("9.txt");
						 break;
					  case 10:fin.open("10.txt");
						  break;
					  case 11:fin.open("11.txt");
						  break;
					  case 12:fin.open("12.txt");
						  break;
					  case 13:fin.open("13.txt");
						  break;
					  case 14:fin.open("14.txt");
						  break;
					  case 15:fin.open("15.txt");
						  break;
					  case 16:fin.open("16.txt");
						  break;
					  case 17:fin.open("17.txt");
						  break;
					  case 18:fin.open("18.txt");
						  break;
					  case 19:fin.open("19.txt");
						  break;
					  case 20:fin.open("20.txt");
						  break;
					  }
					  char str[80];
					  char ch;
					  for(int j=0;j<60;j++)
					  {
						if(!(j%2==0))
						   delay(1000);
						fin.getline(str,80,'\n');
						puts(str);
					  }
					  fin.close();
					  cout<<"\n Press any key";
					  getch();
					  clrscr();
					  cleardevice();
						settextstyle(8,0,2);
						setcolor(YELLOW);
						outtextxy(10,100,"Press '0' for details of another team");
						outtextxy(10,150,"Press any key for Main Menu");
						char w=getch();
						if(w=='0')
						  goto fix;
						else
						  goto mainmenu;
												  //calling files
					 break;
		 case '2':
						mth:
						cleardevice();
						monthlist();
						if(month[0]=getch())
						   {cleardevice();
						    setcolor(WHITE);
						    settextstyle(10,0,4);
							c[0]=month[0];
							outtextxy(20,20,c);
						 for(int i=1;int(month[i-1])!=13;i++)
							{
							  month[i]=getch();
							  c[0]=month[i];
							  outtextxy(20+i*25,20,c);
							}
						}
						cleardevice();
						if(month[0]=='\r')
						  mn=0;
						else
						  mn=atoi(month);
						while(!(mn==1||mn==2||mn==3||mn==4||mn==5||mn==6||mn==7||mn==8||mn==9||mn==10))
						{
							do
							 {      setcolor(RED);
								settextstyle(0,0,1);
								outtextxy(10,300,"Invalid value entered !! Enter again:");
									  monthlist();
									  if(month[0]=getch())
										{cleardevice();
										 setcolor(WHITE);
										    settextstyle(10,0,4);
										    c[0]=month[0];
											    outtextxy(20,20,c);
											    for(int i=1;int(month[i-1])!=13;i++)
											{
											  month[i]=getch();
											  c[0]=month[i];
											  outtextxy(20+i*25,20,c);
											}
										   }
									  if(month[0]=='\r')
									    mn=0;
									  else
									    mn=atoi(month);
									  cleardevice();


							 }while(!(mn==1||mn==2||mn==3||mn==4||mn==5||mn==6||mn==7||mn==8||mn==9||mn==10));
							cleardevice();
						delay(500);
						}
						fixturelist(mn);
						settextstyle(8,0,2);
						setcolor(YELLOW);
						outtextxy(10,440,"Press '0' for fixtures of another month");
						outtextxy(10,420,"Press any key for Main Menu");
						char k=getch();
						if(k=='0')
						  goto mth;
						else
						  goto mainmenu;

		 case '3':
					statsmenu:
					cleardevice();
					settextstyle(6,0,5);
					setcolor(YELLOW);
					 outtextxy(10,10,"Press :");
					 setcolor(GREEN);
					 settextstyle(3,0,3);
					 outtextxy(20,80," 1. for Financial stats");
					 outtextxy(20,120," 2. for Individual stats");
					 outtextxy(20,160," 3. for Managerial stats");
					 outtextxy(20,200," 4. for Miscellaneous stats");
					 outtextxy(20,240," 5. for Main Menu");
					stats[0]=getch();
					while(!(stats[0]=='1'||stats[0]=='2'||stats[0]=='3'||stats[0]=='4'||stats[0]=='5'))
						{    setcolor(RED);
							settextstyle(0,0,1);
							outtextxy(70,300,"Invalid value entered!! Enter again:");
							do
							{
							stats[0]=getch();
							}while(!(stats[0]=='1'||stats[0]=='2'||stats[0]=='3'||stats[0]=='4'||stats[0]=='5'));
							setcolor(YELLOW);
							switch(stats[0])
							  {case '1':outtextxy(70,310,"1");
									break;
							   case '2':outtextxy(70,310,"2");
									break;
							   case '3':outtextxy(70,310,"3");
									break;
							   case '4':outtextxy(70,310,"4");
									break;
							   case '5':outtextxy(70,310,"5");
									break;
							  }
							delay(500);
					       }
					sn=atoi(stats);
					if(sn==5)
						goto mainmenu;
					statlist(sn);
					goto statsmenu;
					goto mainmenu;
					 break;
		 case '4':      quiz();
			   setcolor(RED);
			   settextstyle(2,0,10);
			   outtextxy(20,400,"Press any key");
			   getch();
			   goto mainmenu;
			   break;
		 case '5': exit(0);
			   break;
		 }
	getch();

	}


	void teamlist()
	 {      settextstyle(6,0,4);
		setcolor(YELLOW);
		outtextxy(10,5,"LIST OF TEAMS -");
		settextstyle(11,0,2);
		setcolor(GREEN);
					 outtextxy(30,50,"Arsenal...............................................1");
					 outtextxy(30,70,"Aston Villa...........................................2");
					 outtextxy(30,90,"Cardiff City..........................................3");
					 outtextxy(30,110,"Chelsea...............................................4");
					 outtextxy(30,130,"Crystal Palace........................................5");
					 outtextxy(30,150,"Everton...............................................6");
					 outtextxy(30,170,"Fulham................................................7");
					 outtextxy(30,190,"Hull City.............................................8");
					 outtextxy(30,210,"Liverpool.............................................9");
					 outtextxy(30,230,"Manchester City.......................................10");
					 outtextxy(30,250,"Manchester United.....................................11");
					 outtextxy(30,270,"Newcastle United......................................12");
					 outtextxy(30,290,"Norwich City..........................................13");
					 outtextxy(30,310,"Southampton...........................................14");
					 outtextxy(30,330,"Stoke City............................................15");
					 outtextxy(30,350,"Sunderland............................................16");
					 outtextxy(30,370,"Swansea City..........................................17");
					 outtextxy(30,390,"Tottenham Hotspur.....................................18");
					 outtextxy(30,410,"West Bromwich Albion..................................19");
					 outtextxy(30,430,"West Ham United.......................................20");
					 settextstyle(4,0,5);
					 setcolor(RED);
					 outtextxy(20,430,"Enter team number-");


	 }


	void monthlist()
	 {
		settextstyle(6,0,4);
		setcolor(YELLOW);
		outtextxy(10,5,"LIST OF MONTHS -");
		settextstyle(11,0,2);
		setcolor(GREEN);
		 outtextxy(30,70,"August.................................................1");
		 outtextxy(30,90,"September..............................................2");
		 outtextxy(30,110,"October................................................3");
		 outtextxy(30,130,"November...............................................4");
		 outtextxy(30,150,"December...............................................5");
		 outtextxy(30,170,"January................................................6");
		 outtextxy(30,190,"February...............................................7");
		 outtextxy(30,210,"March..................................................8");
		 outtextxy(30,230,"April..................................................9");
		 outtextxy(30,250,"May....................................................10");
		settextstyle(4,0,5);
		setcolor(RED);
		outtextxy(20,430,"Enter month number-");

	 }

	 void iniques()

	 {
		strcpy(obj[0].q,"Which is the Home Ground of Sunderland?");
		strcpy(obj[0].opt,"a) Britannia Stadium  b) Goodison Park  c) Stadium of Light  d) Craven Cottage");
		obj[0].ans='c';
		strcpy(obj[1].q,"Which is the Home Stadium of West Ham United?");
		strcpy(obj[1].opt,"a) Upton Park  b) Liberty Stadium  c) Stamford Bridge  d) Loftus Road  ");
		obj[1].ans='a';
		strcpy(obj[2].q,"Which Premier league club's fans form 'The Kop'?");
		strcpy(obj[2].opt,"a) West Ham  b) West Brom  c) Chelsea  d) Liverpool  ");
		obj[2].ans='d';
		strcpy(obj[3].q,"Among the following, the match between which 2 teams");
		strcpy(tempq,"is called the 'Merseyside Derby'?");
		strcpy(obj[3].opt,"a) Manchester United vs Man City  b) Everton vs Liverpool");
		strcpy(tempo,"c) West Ham vs West Brom     	d) Crystal Palace vs Tottenham Hotspurs");
		obj[3].ans='b';
		strcpy(obj[4].q,"Which is the Home Stadium of Hull City?");
		strcpy(obj[4].opt,"a) Salt Lake Stadium  b) Donbass Arena  c) Boleyn Ground  d) KC Stadium  ");
		obj[4].ans='d';
		strcpy(obj[5].q,"Which is the Home Stadium of Stoke City?");
		strcpy(obj[5].opt,"a) Britannia Stadium  b) Upton Park  c) Old Trafford  d) Villa Park  ");
		obj[5].ans='a';
		strcpy(obj[6].q,"Which is the Home Stadium of West Brom?");
		strcpy(obj[6].opt,"a) Carrow Road  b) The Hawthorns  c) Etihad stadium  d) DW Stadium  ");
		obj[6].ans='b';
		strcpy(obj[7].q,"Which team is also called 'The Toffees'?");
		strcpy(obj[7].opt,"a) Norwich city  b) Everton  c) Fulham  d) Liverpool  ");
		obj[7].ans='b';
		strcpy(obj[8].q,"'Boleyn Ground' is the other name of which Premier league stadium?");
		strcpy(obj[8].opt,"a) Britannia Stadium  b) KC Stadium  c) Stadium of Light  d) Upton Park  ");
		obj[8].ans='d';
		strcpy(obj[9].q,"Which manager,of the following, has an unbeaten home");
		strcpy(tempq9,"record in the league of more than 60 matches?");
		strcpy(obj[9].opt,"a) Sir Alex Ferguson  b) Arsene Wenger  c) Rafa Benitez  d) Jose Mourinho  ");
		obj[9].ans='d';
		strcpy(obj[10].q,"Cobham is the world class training ground of which football club?");
		strcpy(obj[10].opt,"a) Manchester United  b) Arsenal  c) Chelsea  d) Manchester City  ");
		obj[10].ans='c';
		strcpy(obj[11].q,"Who was the last English Player to have won the Ballon d'or?");
		strcpy(obj[11].opt,"a) Frank Lampard  b) Wayne Rooney  c) Michael Owen  d) Steven Gerrard  ");
		obj[11].ans='c';
		strcpy(obj[12].q,"Who is the only player to have scored in four FA cup finals?");
		strcpy(obj[12].opt,"a) Cristiano Ronaldo  b) Didier Drogba  c) Thierry Henry  d) Eric Cantona  ");
		obj[12].ans='b';
		strcpy(obj[13].q,"Which team in the Premier League has the highest no. of Brazilians in their squad?");
		strcpy(obj[13].opt,"a) Fulham  b) Chelsea  c) Man City  d) Liverpool  ");
		obj[13].ans='b';
		strcpy(obj[14].q,"Outside which Premier League Stadium was a statue of Michael Jackson installed?");
		strcpy(obj[14].opt,"a) Etihad Stadium  b) Goodison Park  c) Loftus Road  d) Craven Cottage  ");
		obj[14].ans='d';
		strcpy(obj[15].q,"Edwin Van Der Sar, the Man. Utd. Goalkeeping legend was bought from which club?");
		strcpy(obj[15].opt,"a) Fulham  b) Juventus  c) Ajax  d) Sunderland  ");
		obj[15].ans='a';
		strcpy(obj[16].q,"Who is the youngest Premier league player to score 20 goals in a season?");
		strcpy(obj[16].opt,"a) Romelu Lukaku  b) Michael Owen  c) Wayne Rooney  d) Jack Wilshere  ");
		obj[16].ans='b';
		strcpy(obj[17].q,"In 1985, due to which of the following clubs were");
		strcpy(tempq17,"English clubs banned from European competition for 5 yrs?");
		strcpy(obj[17].opt,"a) Manchester United  b) Liverpool  c) Leeds United  d) Nottingham Forest ");
		obj[17].ans='b';
		strcpy(obj[18].q,"Which English club has Baichung Bhutia played for?");
		strcpy(obj[18].opt,"a) Nottingham Forest  b) Blackburn Rovers  c) Bury FC  d) Derby County  ");
		obj[18].ans='c';
		strcpy(obj[19].q,"Stan Kroenke is the major shareholder of which Premier League club?");
		strcpy(obj[19].opt,"a) Fulham  b) Tottenham  c) West Ham  d) Arsenal  ");
		obj[19].ans='d';
		strcpy(obj[20].q,"Which famous Premier league club when founded, was called 'Dial Square'?");
		strcpy(obj[20].opt,"a) Everton  b) Arsenal  c) Tottenham hotspurs  d) Swansea City  ");
		obj[20].ans='b';
		strcpy(obj[21].q,"Which famous Premier league club when founded, was called 'Newton Heath LYR F.C.'?");
		strcpy(obj[21].opt,"a) Manchester United  b) Newcastle United   c) Arsenal  d) West Ham  ");
		obj[21].ans='a';
		strcpy(obj[22].q,"Fans of which Premier league club are referred to as the 'Geordies'?");
		strcpy(obj[22].opt,"a) Crystal palace  b) Hull city  c) Newcastle United  d) Southampton  ");
		obj[22].ans='c';
		strcpy(obj[23].q,"Which club changed their colour from Blue to Red at the demand of their new owner?");
		strcpy(obj[23].opt,"a) Southampton  b) Cardiff City  c) Sunderland  d) Stoke City  ");
		obj[23].ans='b';
		strcpy(obj[24].q,"'The Glaziers' is the nickname of which team?");
		strcpy(obj[24].opt,"a) Crystal Palace  b) Manchester United  c) West Brom  d) Stoke City  ");
		obj[24].ans='a';
	}

	int quiz()
	   {
		int rep[15],flag,score=0;
		char asr,name[20],fil[20],rdy,t[2];
		int qno,i,j;
		cleardevice();
		settextstyle(7,0,6);
		setcolor(CYAN);
		outtextxy(110,170,"FOOTBALL QUIZ");
		for(int x=0,y=45,a=90,b=135,g=180,h=225,k=270,l=315;x<=45;x++,y++,a++,b++,g++,h++,k++,l++)
			{
			delay(75);
			setcolor(BLACK);
			arc(320,240,0,360,240);
			setcolor(random(15));
			arc(320,240,x,y,240);
			arc(320,240,a,b,240);
			arc(320,240,g,h,240);
			arc(320,240,k,l,240);
			}
		cleardevice();
		settextstyle(9,0,5);
		setcolor(YELLOW);
		outtextxy(20,20,"INSTRUCTIONS");
		setcolor(WHITE);
		settextstyle(6,0,2);
		outtextxy(20,150,"=> You have 15 questions to answer");
		outtextxy(20,180,"=> The only help you have, is your knowledge");
		outtextxy(20,210,"=> To answer, press a/b/c/d according to your answer");
		settextstyle(0,0,2);
		setcolor(RED);
		outtextxy(20,280,"So, are you ready? (Y/N)");
		rdy=getch();
		while(!(rdy=='y'||rdy=='Y'||rdy=='n'||rdy=='N'))
		       {
			  setcolor(RED);
			  settextstyle(8,0,3);
			  outtextxy(20,340,"Invalid Character !! Press again .");
			  rdy=getch();
		       }
		if(rdy=='n'||rdy=='N')
				return 0 ;
		else
				{setcolor(GREEN);
				settextstyle(3,0,5);
				outtextxy(20,380,"All the Best!");
				delay(1000);
				}

		iniques();
		for(i=0;i<15;i++)
			{
			 cleardevice();

			 do
			 {flag=0;
			  qno=random(25);
			  for(int chk=0;chk<=i;++chk)
			    if(rep[chk]==qno)
			       {flag=1;
				break;
			       }

			 }while(flag);
			  rep[i]=qno;
			  setcolor(WHITE);
			  settextstyle(10,0,2);
			  itoa(i+1,t,10);
			  strcat(t,".");
			  outtextxy(5,20,t);
			  setcolor(LIGHTBLUE);                    //3,9,17
			  settextstyle(2,0,5);
			  if(qno==3)
			    {

			      outtextxy(5,80,obj[qno].q);
			      outtextxy(5,100,tempq);
			      outtextxy(5,130,obj[qno].opt);
			      outtextxy(5,150,tempo);
			    }
			  else if(qno==17)
			    {
			      outtextxy(5,80,(obj[qno].q));
			      outtextxy(5,100,(tempq17));
			      outtextxy(5,150,obj[qno].opt);
			    }
			  else if(qno==9)
			    {
			      outtextxy(5,80,obj[qno].q);
			      outtextxy(5,100,tempq9);
			      outtextxy(5,130,obj[qno].opt);
			    }
			  else
			  {
			   outtextxy(5,80,(obj[qno].q));
			   outtextxy(5,110,(obj[qno].opt));
			  }
			  setcolor(YELLOW);
			 asr=getch();
				 while(!(asr=='a'||asr=='b'||asr=='c'||asr=='d'))
					{    setcolor(RED);
						settextstyle(0,0,1);
						outtextxy(70,300,"Invalid value entered!! Press again:");
						do
						{
						asr=getch();
						}while(!(asr=='a'||asr=='b'||asr=='c'||asr=='d'));
						setcolor(YELLOW);
						switch(asr)
							{case 'a':outtextxy(70,310,"a");
									break;
							   case 'b':outtextxy(70,310,"b");
									break;
							   case 'c':outtextxy(70,310,"c");
									break;
							   case 'd':outtextxy(70,310,"d");
									break;
							  }
						delay(500);
					 }
			 settextstyle(8,0,3);
			 if(asr==obj[qno].ans)
			    {   outtextxy(40,200,"CORRECT !!");
				++score;
			    }
			 else
			    outtextxy(40,200,"WRONG :(");

			 delay(1000);
			}
	     /*	cout<<"Enter your name please\n";
		gets(name);*/
		settextstyle(1,0,5);
		setcolor(DARKGRAY);
		outtextxy(30,325,"Your score is ");
		char score1[3];
		itoa(score,score1,10);
		outtextxy(350,325,score1);
		outtextxy(390,325," / 15");
	      /*	ifstream file("scores.txt",ios::in);
		file.seekg(0);
		cout<<"Prev. scores -\n";
		while(!file.eof())
		 {
		  file.getline(fil,20,'\n');
		  cout.write(fil,20);
		  cout<<endl;
		 }
		 file.close();
		 int s=strlen(name);
		 ofstream f("scores.txt",ios::app);
		 f.write(name,s);
		 f<<score<<"/15\n";
		 f.close();                  //some error here */
		 return 0;
	   }

	  void statlist(int sn)
		{char ch1,ch2,ch3,ch4;
		 cleardevice();
		 switch(sn)
		  {case 1:setcolor(YELLOW);
			  settextstyle(1,0,5);
			  outtextxy(10,10,"Press- ");
					setcolor(BLUE);
					settextstyle(8,0,3);
					outtextxy(20,70,"1. For Most money spent by a team.");
					outtextxy(20,100,"2. For Highest transfer fee.");
					outtextxy(20,130,"3. For Highest wage earned by a player.");
					outtextxy(20,160,"4. For Highest Kit Sponsorship.");
					outtextxy(20,190,"5. For most money paid to agents.");
					ch1=getch();
					while(!(ch1=='1'||ch1=='2'||ch1=='3'||ch1=='4'||ch1=='5'))
					   {    setcolor(RED);
						settextstyle(0,0,1);
						 outtextxy(70,300,"Invalid value entered!! Enter again:");
						do
						 {
						    ch1=getch();
						 }while(!(ch1=='1'||ch1=='2'||ch1=='3'||ch1=='4'||ch1=='5'));
						 setcolor(YELLOW);
						switch(ch1)
						  {case '1':outtextxy(70,310,"1");
								break;
						   case '2':outtextxy(70,310,"2");
								break;
						   case '3':outtextxy(70,310,"3");
								break;
						   case '4':outtextxy(70,310,"4");
								break;
						   case '5':outtextxy(70,310,"5");
								break;
						  }
						delay(500);
					     }
					cleardevice();
					setcolor(WHITE);
					settextstyle(12,0,5);
					switch(ch1)
						{case '1'  :  outtextxy(0,0,"Every Team buys players in the transfer window;and some spend more than the rest.");
							      outtextxy(0,20,"Below is a list of the teams that spent the most: (in pounds)");
							      outtextxy(20,60,"1.Tottenham Hotspur-       107m");
							      outtextxy(20,80,"2.Manchester city-         102m");
							      outtextxy(20,100,"3.Chelsea FC-             69m");
							      outtextxy(20,120,"4.Liverpool FC-           51m");
							      outtextxy(20,140,"5.Arsenal FC-             45m");
							      getch();
							      break;

						 case '2':   outtextxy(0,0,"Every Transfer window brings with it lots of suspense about which player");
							     outtextxy(0,20," will move to which club. This season, the biggest transfers were:");
							     outtextxy(20,60,"1.Mesut Ozil-     Real Madrid to Arsenal FC-                  44.3m");
							     outtextxy(20,80,"2.Fernandinho-	Shakhtar Donetsk to Manchester city-        35.2m");
							     outtextxy(20,100,"3.Willian-       Anzhi Makhachkala to Chelsea FC-            33.4m");
							     outtextxy(20,120,"4.Fellaini-      Everton FC to Manchester United-            28.5m");
							     outtextxy(20,140,"5.Soldado-       Valencia CF to Tottenham Hotspur-           26.4m");
							     getch();
							     break;

						 case '3':outtextxy(0,0,"Football clubs are known for paying exorbitant wages to their star players.");
							outtextxy(0,20,"Footballers get paid on a weekly basis, whether they play or not.");
							outtextxy(0,40,"The highest earning players in the Premier League are:(in pounds)");
							outtextxy(20,80,"1.Eden Hazard: 185,000 (Per Week)");
							outtextxy(20,100,"2.Wayne Rooney  180k");
							outtextxy(20,120,"3.Robin van Persie  180k");
							outtextxy(20,140,"4.Yaya Toure  180k");
							outtextxy(20,160,"5.Mesut Ozil  180k");
							outtextxy(20,180,"6.Fernando Torres  175k");
							outtextxy(20,200,"7.John Terry  175k");
							outtextxy(20,220,"8.David Silva  160k");
							outtextxy(20,240,"9.Samir Nasri  140k");
							outtextxy(20,260,"10.Frank Lampard  140k");
							getch();
							break;

						 case '4':outtextxy(0,0,"Sponsorships constitute an integral part of a team's revenue.");
							outtextxy(0,20,"The best sponsors are: ");
							outtextxy(20,60,"1.Fly Emirates 	   -  Arsenal      -  30m/yr");
							outtextxy(20,80,"2.AON                     -  Man United   -  20m/yr");
							outtextxy(20,100,"3.Standard Chartered     -  Liverpool    -  20m/yr");
							outtextxy(20,120,"4.Etihad                 -  Man City     -  20m/yr");
							outtextxy(20,140,"5.Aurasma                -  Tottenham    -  19m/yr");
							getch();
								break;

						 case '5':   outtextxy(0,0,"It's not easy to convince a player to sign for your club.");
							outtextxy(0,20,"Clubs hence pay their agents more so that they can convince");
							outtextxy(0,40,"their clients. Clubs having spent the most on agents are : ");
							outtextxy(20,80,"1. Chelsea: 13,721,721 pounds");
							outtextxy(20,100,"2. Manchester City: 11,179,817 pounds");
							outtextxy(20,120,"3. Tottenham: 9,787,676 pounds");
							outtextxy(20,140,"4. Liverpool: 9,400,973 pounds");
							outtextxy(20,160,"5. Newcastle: 7,294,018 pounds");
							getch();
								break;
						}
					break;

			case 2:setcolor(YELLOW);
				settextstyle(1,0,5);
				outtextxy(10,10,"Press- ");
					setcolor(BLUE);
					settextstyle(2,0,3);
					 outtextxy(20,60,"1. For Highest no. of fouls committed");
					 outtextxy(20,80,"2. For Highest no. of cards awarded");
					 outtextxy(20,100,"3. For Highest no. of goals scored");
					 outtextxy(20,120,"4. For Highest no. of assists given");
					 outtextxy(20,140,"5. For Highest pass completion rate ");
					ch2=getch();
					while(!(ch2=='1'||ch2=='2'||ch2=='3'||ch2=='4'||ch2=='5'))
					   {    setcolor(RED);
						settextstyle(0,0,1);
						 outtextxy(70,300,"Invalid value entered!! Enter again:");
						do
						 {
						    ch2=getch();
						 }while(!(ch2=='1'||ch2=='2'||ch2=='3'||ch2=='4'||ch2=='5'));
						 setcolor(YELLOW);
						switch(ch2)
						  {case '1':outtextxy(70,310,"1");
								break;
						   case '2':outtextxy(70,310,"2");
								break;
						   case '3':outtextxy(70,310,"3");
								break;
						   case '4':outtextxy(70,310,"4");
								break;
						   case '5':outtextxy(70,310,"5");
								break;
						  }
						delay(500);
					     }
					switch(ch2)
						{case '1':   outtextxy(0,0,"Football is called the beautiful game, but it has a dirty side as well.");
							outtextxy(0,20,"Fouling is a necessary evil in the game. the dirtiest players are: ");
							 outtextxy(20,60,"1. Ricky Van Wolfswinkel - 2.8  fouls a game -   Norwich City");
							 outtextxy(20,80,"2.Victor Wanyama	   - 2.6  per game      -   Southampton");
							 outtextxy(20,100,"3.Karim El Ahmadi	   - 2.4 per game	-  Aston Villa ");
							 outtextxy(20,120,"4.Pajtim Kasami              - 2.4 per game 	-  Fulham");
							 outtextxy(20,140,"5.	Fernandinho	   - 2.3  per game	-  Manchester City");
							 getch();
							break;

						 case '2' :  outtextxy(0,0," When players resort to illegal tricks during a match, they are penalized ");
							outtextxy(0,20," and cards are awarded to them. The no. of cards indicates the ");
							outtextxy(0,40," agressiveness of the player. Players with most cards are: ");
							 outtextxy(20,80,"AS OF 15/12/13:");
							outtextxy(20,100,"Chico		Swansea City	5");
							outtextxy(20,120,"Lucas		Liverpool	                5");
							outtextxy(20,140,"Youssuf Mulumbu	West Brom	5");
							outtextxy(20,160,"Mathieu Debuchy	Newcastle United	5");
							outtextxy(20,180,"Jonas Olsson		West Brom               5");
							getch();
								break;

						case '3':    outtextxy(0,0," Goals win games. And goal scorers are matchwinners.");
							outtextxy(0,20,"The highest no. of goals scored are: ");
							outtextxy(20,60,"AS OF 15/12/13:");
							outtextxy(20,80,"1.	Luis Suarez	Liverpool	      	15");
							outtextxy(20,100,"2.	Sergio Aguero	Manchester City	12");
							outtextxy(20,120,"3.	Daniel Sturridge	Liverpool		9");
							outtextxy(20,140,"4.	Wayne Rooney	Manchester United	8");
							outtextxy(20,160,"5.  Loïc Remy	Newcastle United	8");
							getch();
							break;

						case '4':    	outtextxy(0,0," An Assist is football is the act of creating the goalscoring chance.");
							outtextxy(0,20,"Hence the goal scored is due to the assist maker, making him ");
							outtextxy(0,40,"very important. The best assistmakers are:");
							outtextxy(20,80,"AS OF 15/12/13:");
							outtextxy(20,100,"1. Steven Gerrard	Liverpool	6");
							outtextxy(20,120,"2. Mesut Özil	 	Arsenal	6");
							outtextxy(20,140,"3. Wayne Rooney	Manchester United	5");
							outtextxy(20,160,"4. Aaron Ramsey	Arsenal	5");
							outtextxy(20,180,"5. Kevin Mirallas	Everton	5");
							getch();
							break;

						case '5':    outtextxy(0,0,"  Pass completion rate shows the player's accuracy and intelligence.");
							outtextxy(0,20," Many passes to one's teammates are attempted, but many are intercepted.");
							outtextxy(0,40,"The most succesful passers are: ");
							outtextxy(20,80,"1.  Mathieu Flamini            Arsenal       93.17%");
							outtextxy(20,100,"2.  Laurent Koscielny	 Arsenal	 92.45%");
							outtextxy(20,120,"3.  Per Mertesacker	 Arsenal	 92.38%");
							outtextxy(20,140,"4.  Mousa Dembele	Tottenham	 91.60%");
							outtextxy(20,160,"5.  John Terry	                 Chelsea	 91.57%");
							getch();
							break;
						}
						break;

			case 3:setcolor(YELLOW);
				settextstyle(1,0,5);
			  outtextxy(10,10,"Press- ");
					setcolor(BLUE);
					settextstyle(2,0,3);
					outtextxy(20,60,"1. For Highest no. of Premier Leagues won by a Manager");
					outtextxy(20,80,"2. For Highest no. of FA Cups won by a Manager");
					ch3=getch();
					while(!(ch3=='1'||ch3=='2'))
					   {    setcolor(RED);
						settextstyle(0,0,1);
						 outtextxy(70,300,"Invalid value entered!! Enter again:");
						do
						 {
						    ch3=getch();
						 }while(!(ch3=='1'||ch3=='2'));
						 setcolor(YELLOW);
						switch(ch3)
						  {case '1':outtextxy(70,310,"1");
								break;
						   case '2':outtextxy(70,310,"2");
								break;

						  }
						delay(500);
					     }
					switch(ch3)
						{case '1':  outtextxy(0,0," The Premier League is considered one of the most toughest ");
							outtextxy(0,20,"and prestigious football leagues in the world. A manager ");
							outtextxy(0,40," is considered succesful if he wins it. ");
							outtextxy(20,80,"1. Sir Alex Ferguson    Manchester United F.C.   13 times ");
							outtextxy(20,100,"2. Arsene Wenger       Arsenal 		     3 times ");
							outtextxy(20,120,"3. Jose Mourinho        Chelsea FC                       2 times ");
							getch();
								break;

						 case '2':   outtextxy(0,0," The FA Cup is THE WORLD'S OLDEST cup competition.");
							outtextxy(0,20," The FA (Football Association) is English football's governing");
							outtextxy(0,40," body. The Cup is considered very prestigious.");
							outtextxy(20,80,"1. George Ramsay  -  Aston Villa - 6");
							outtextxy(20,100,"2.  Thomas Mitchell -  Blackburn  - 5");
							outtextxy(20,120,"3.  Sir Alex Ferguson- Man united - 5");
							outtextxy(20,140,"4.  John Nicholson   - Sheffield     - 4");
							outtextxy(20,160,"5. Arsene Wenger   -  Arsenal      - 4");
							getch();
								break;
						}
					break;

			case 4: setcolor(YELLOW);
				settextstyle(1,0,5);
				  outtextxy(10,10,"Press- ");
					setcolor(BLUE);
					settextstyle(2,0,3);
					outtextxy(20,60,"1. For Highest attendance recorded by a stadium");
					outtextxy(20,80,"2. For Biggest wins");
					outtextxy(20,100,"3. For Highest number of points scored in a league season");
					ch4=getch();
					while(!(ch4=='1'||ch4=='2'||ch4=='3'))
					   {    setcolor(RED);
						settextstyle(0,0,1);
						 outtextxy(70,300,"Invalid value entered!! Enter again:");
						do
						 {
						    ch4=getch();
						 }while(!(ch4=='1'||ch4=='2'||ch4=='3'));
						 setcolor(YELLOW);
						switch(ch4)
						  {case '1':outtextxy(70,310,"1");
								break;
						   case '2':outtextxy(70,310,"2");
								break;
						   case '3':outtextxy(70,310,"3");
								break;
						  }
						delay(500);
					     }
					switch(ch4)
						{case '1':outtextxy(0,0," Ticket sales contribute an important part of revenue.");
						outtextxy(0,20," The clubs having the highest attendance at stadiums are: ");
						outtextxy(20,60,"1.  Manchester United	75,164");
						outtextxy(20,80,"2	Arsenal		60,019");
						outtextxy(20,100,"3	Newcastle United	50,089");
						outtextxy(20,120,"4	Manchester City	47,031");
						outtextxy(20,140,"5	Liverpool		44,693");
						getch();
						break;

						case '2':    outtextxy(0,0," There is nothing more embarassing than to lose by a huge margin.");
							outtextxy(0,20," The biggest wins recorded in the history of the Premier league are:");
								outtextxy(20,60,"1. Manchester United 9 Ipswich Town 0          - March 1995");
							outtextxy(20,80,"2. Tottenham Hotspur 9 Wigan Athletic 1         - November 2009");
							outtextxy(20,100,"3. Chelsea 8 Wigan Athletic 0                         - May 2010");
							outtextxy(20,120,"4. Newcastle United 8 Sheffield Wednesday 0 - September 1999");
							outtextxy(20,140,"5. Nottingham Forest 1 Manchester United 8   - February 1999");
							getch();
						break;

						case '3':    outtextxy(0,0," 3 Points are awarded for a win, 1 for a draw and none for a loss.");
							outtextxy(0,20," The team who has won the most points in a season is : ");
							outtextxy(20,60," Chelsea FC - 2004-05- 95 points");
							getch();
							break;
						}
					break;

		  }
		}

	void fixturelist(int mn)
	{       cleardevice();
		setcolor(RED);
		settextstyle(0,0,1);
		switch(mn)
		{
		 case 1: 			settextstyle(15,0,1);
							outtextxy(10,10,"17 August 2013");

							outtextxy(10,40,"Arsenal v Aston Villa");
							outtextxy(10,50,"Chelsea v Hull City");
							outtextxy(10,60,"Crystal Palace v Tottenham Hotspur");
							outtextxy(10,70,"Liverpool v Stoke City");
							outtextxy(10,80,"Manchester City v Newcastle United");
							outtextxy(10,90,"Norwich City v Everton");
							outtextxy(10,100,"Sunderland v Fulham");
							outtextxy(10,110,"Swansea City v Manchester United");
							outtextxy(10,120,"West Bromwich Albion v Southampton");
							outtextxy(10,130,"West Ham United v Cardiff City");

							outtextxy(340,10,"24 August 2013");

							outtextxy(340,40,"Aston Villa v Liverpool");
							outtextxy(340,50,"Cardiff City v Manchester City");
							outtextxy(340,60,"Everton v West Bromwich Albion");
							outtextxy(340,70,"Fulham v Arsenal");
							outtextxy(340,80,"Hull City v Norwich City");
							outtextxy(340,90,"Manchester United v Chelsea");
							outtextxy(340,100,"Newcastle United v West Ham United");
							outtextxy(340,110,"Southampton v Sunderland");
							outtextxy(340,120,"Stoke City v Crystal Palace");
							outtextxy(340,130,"Tottenham Hotspur v Swansea City");

							outtextxy(10,160,"31 August 2013");

							outtextxy(10,180,"Arsenal v Tottenham Hotspur");
							outtextxy(10,190,"Cardiff City v Everton");
							outtextxy(10,200,"Chelsea v Aston Villa");
							outtextxy(10,210,"Crystal Palace v Sunderland");
							outtextxy(10,220,"Liverpool v Manchester United");
							outtextxy(10,230,"Manchester City v Hull City");
							outtextxy(10,240,"Newcastle United v Fulham");
							outtextxy(10,250,"Norwich City v Southampton");
							outtextxy(10,260,"West Bromwich Albion v Swansea City");
							outtextxy(10,270,"West Ham United v Stoke City");
							break;

		case 2:	    settextstyle(15,0,1);
					outtextxy(10,10,"14 September 2013");

					outtextxy(10,40,"Aston Villa v Newcastle United");
					outtextxy(10,50,"Everton v Chelsea");
					outtextxy(10,60,"Fulham v West Bromwich Albion");
					outtextxy(10,70,"Hull City v Cardiff City");
					outtextxy(10,80,"Manchester United v Crystal Palace");
					outtextxy(10,90,"Southampton v West Ham United");
					outtextxy(10,100,"Stoke City v Manchester City");
					outtextxy(10,110,"Sunderland v Arsenal");
					outtextxy(10,120,"Swansea City v Liverpool");
					outtextxy(10,130,"Tottenham Hotspur v Norwich City");

					outtextxy(340,10,"21 September 2013");

					outtextxy(340,40,"Arsenal v Stoke City");
					outtextxy(340,50,"Cardiff City v Tottenham Hotspur");
					outtextxy(340,60,"Chelsea v Fulham");
					outtextxy(340,70,"Crystal Palace v Swansea City");
					outtextxy(340,80,"Liverpool v Southampton");
					outtextxy(340,90,"Manchester City v Manchester United");
					outtextxy(340,100,"Newcastle United v Hull City");
					outtextxy(340,110,"Norwich City v Aston Villa");
					outtextxy(340,120,"West Bromwich Albion v Sunderland");
					outtextxy(340,130,"West Ham United v Everton");

					outtextxy(10,160,"28 September 2013");

					outtextxy(10,180,"Aston Villa v Manchester City");
					outtextxy(10,190,"Everton v Newcastle United");
					outtextxy(10,200,"Fulham v Cardiff City");
					outtextxy(10,210,"Hull City v West Ham United");
					outtextxy(10,220,"Manchester United v West Bromwich Albion");
					outtextxy(10,230,"Southampton v Crystal Palace");
					outtextxy(10,240,"Stoke City v Norwich City");
					outtextxy(10,250,"Sunderland v Liverpool");
					outtextxy(10,260,"Swansea City v Arsenal");
					outtextxy(10,270,"Tottenham Hotspur v Chelsea");
			break;

		case 3:	    settextstyle(15,0,1);
					outtextxy(10,10,"5 October 2013");

					outtextxy(10,40,"Cardiff City v Newcastle United");
					outtextxy(10,50,"Fulham v Stoke City");
					outtextxy(10,60,"Hull City v Aston Villa");
					outtextxy(10,70,"Liverpool v Crystal Palace");
					outtextxy(10,80,"Manchester City v Everton");
					outtextxy(10,90,"Norwich City v Chelsea");
					outtextxy(10,100,"Southampton v Swansea City");
					outtextxy(10,110,"Sunderland v Manchester United");
					outtextxy(10,120,"Tottenham Hotspur v West Ham United");
					outtextxy(10,130,"West Bromwich Albion v Arsenal");

					outtextxy(340,10,"19 October 2013");

					outtextxy(340,40,"Arsenal v Norwich City");
					outtextxy(340,50,"Aston Villa v Tottenham Hotspur");
					outtextxy(340,60,"Chelsea v Cardiff City");
					outtextxy(340,70,"Crystal Palace v Fulham");
					outtextxy(340,80,"Everton v Hull City");
					outtextxy(340,90,"Manchester United v Southampton");
					outtextxy(340,100,"Newcastle United v Liverpool");
					outtextxy(340,110,"Stoke City v West Bromwich Albion");
					outtextxy(340,120,"Swansea City v Sunderland");
					outtextxy(340,130,"West Ham United v Manchester City");

					outtextxy(10,160,"26 October 2013");

					outtextxy(10,180,"Aston Villa v Everton");
					outtextxy(10,190,"Chelsea v Manchester City");
					outtextxy(10,200,"Crystal Palace v Arsenal");
					outtextxy(10,210,"Liverpool v West Bromwich Albion");
					outtextxy(10,220,"Manchester United v Stoke City");
					outtextxy(10,230,"Norwich City v Cardiff City");
					outtextxy(10,240,"Southampton v Fulham");
					outtextxy(10,250,"Sunderland v Newcastle United");
					outtextxy(10,260,"Swansea City v West Ham United");
					outtextxy(10,270,"Tottenham Hotspur v Hull City");
			   break;

		case 4: 	   settextstyle(15,0,1);

					outtextxy(10,10,"2 November 2013");

					outtextxy(10,40,"Arsenal v Liverpool");
					outtextxy(10,50,"Cardiff City v Swansea City");
					outtextxy(10,60,"Everton v Tottenham Hotspur");
					outtextxy(10,70,"Fulham v Manchester United");
					outtextxy(10,80,"Hull City v Sunderland");
					outtextxy(10,90,"Manchester City v Norwich City");
					outtextxy(10,100,"Newcastle United v Chelsea");
					outtextxy(10,110,"Stoke City v Southampton");
					outtextxy(10,120,"West Bromwich Albion v Crystal Palace");
					outtextxy(10,130,"West Ham United v Aston Villa");

					outtextxy(340,10,"9 November 2013");

					outtextxy(340,40,"Aston Villa v Cardiff City");
					outtextxy(340,50,"Chelsea v West Bromwich Albion");
					outtextxy(340,60,"Crystal Palace v Everton");
					outtextxy(340,70,"Liverpool v Fulham");
					outtextxy(340,80,"Manchester United v Arsenal");
					outtextxy(340,90,"Norwich City v West Ham United");
					outtextxy(340,100,"Southampton v Hull City");
					outtextxy(340,110,"Sunderland v Manchester City");
					outtextxy(340,120,"Swansea City v Stoke City");
					outtextxy(340,130,"Tottenham Hotspur v Newcastle United");

					outtextxy(10,160,"23 November 2013");

					outtextxy(10,180,"Arsenal v Southampton");
					outtextxy(10,190,"Cardiff City v Manchester United");
					outtextxy(10,200,"Everton v Liverpool");
					outtextxy(10,210,"Fulham v Swansea City");
					outtextxy(10,220,"Hull City v Crystal Palace");
					outtextxy(10,230,"Manchester City v Tottenham Hotspur");
					outtextxy(10,240,"Newcastle United v Norwich City");
					outtextxy(10,250,"Stoke City v Sunderland");
					outtextxy(10,260,"West Bromwich Albion v Aston Villa");
					outtextxy(10,270,"West Ham United v Chelsea");

					outtextxy(340,160,"30 November 2013");

					outtextxy(340,180,"Aston Villa v Sunderland");
					outtextxy(340,190,"Cardiff City v Arsenal");
					outtextxy(340,200,"Chelsea v Southampton");
					outtextxy(340,210,"Everton v Stoke City");
					outtextxy(340,220,"Hull City v Liverpool");
					outtextxy(340,230,"Manchester City v Swansea City");
					outtextxy(340,240,"Newcastle United v West Bromwich Albion");
					outtextxy(340,250,"Norwich City v Crystal Palace");
					outtextxy(340,260,"Tottenham Hotspur v Manchester United");
					outtextxy(340,270,"West Ham United v Fulham");
					break;

		case 5:	   settextstyle(15,0,1);

					outtextxy(10,10,"3 December 2013");

					outtextxy(10,40,"Arsenal v Hull City");
					outtextxy(10,50,"Crystal Palace v West Ham United");
					outtextxy(10,60,"Liverpool v Norwich City");
					outtextxy(10,70,"Manchester United v Everton");
					outtextxy(10,80,"Southampton v Aston Villa");
					outtextxy(10,90,"Stoke City v Cardiff City");
					outtextxy(10,100,"Sunderland v Chelsea");
					outtextxy(10,110,"Swansea City v Newcastle United");
					outtextxy(10,120,"West Bromwich Albion v Manchester City");

					outtextxy(340,10,"7 December 2013");

					outtextxy(340,40,"Arsenal v Everton");
					outtextxy(340,50,"Crystal Palace v Cardiff City");
					outtextxy(340,60,"Fulham v Aston Villa");
					outtextxy(340,70,"Liverpool v West Ham United");
					outtextxy(340,80,"Manchester United v Newcastle United");
					outtextxy(340,90,"Southampton v Manchester City");
					outtextxy(340,100,"Stoke City v Chelsea");
					outtextxy(340,110,"Sunderland v Tottenham Hotspur");
					outtextxy(340,120,"Swansea City v Hull City");
					outtextxy(340,130,"West Bromwich Albion v Norwich City");

					outtextxy(10,160,"14 December 2013");

					outtextxy(10,180,"Aston Villa v Manchester United");
					outtextxy(10,190,"Cardiff City v West Bromwich Albion");
					outtextxy(10,200,"Chelsea v Crystal Palace");
					outtextxy(10,210,"Everton v Fulham");
					outtextxy(10,220,"Hull City v Stoke City");
					outtextxy(10,230,"Manchester City v Arsenal");
					outtextxy(10,240,"Newcastle United v Southampton");
					outtextxy(10,250,"Norwich City v Swansea City");
					outtextxy(10,260,"Tottenham Hotspur v Liverpool");
					outtextxy(10,270,"West Ham United v Sunderland");

					outtextxy(340,160,"21 December 2013");

					outtextxy(340,180,"Arsenal v Chelsea");
					outtextxy(340,190,"Crystal Palace v Newcastle United");
					outtextxy(340,200,"Fulham v Manchester City");
					outtextxy(340,210,"Liverpool v Cardiff City");
					outtextxy(340,220,"Manchester United v West Ham United");
					outtextxy(340,230,"Southampton v Tottenham Hotspur");
					outtextxy(340,240,"Stoke City v Aston Villa");
					outtextxy(340,250,"Sunderland v Norwich City");
					outtextxy(340,260,"Swansea City v Everton");
					outtextxy(340,270,"West Bromwich Albion v Hull City");

					outtextxy(10,300,"26 December 2013");

					outtextxy(10,320,"Aston Villa v Crystal Palace");
					outtextxy(10,330,"Cardiff City v Southampton");
					outtextxy(10,340,"Chelsea v Swansea City");
					outtextxy(10,350,"Everton v Sunderland");
					outtextxy(10,360,"Hull City v Manchester United");
					outtextxy(10,370,"Manchester City v Liverpool");
					outtextxy(10,380,"Newcastle United v Stoke City");
					outtextxy(10,390,"Norwich City v Fulham");
					outtextxy(10,400,"Tottenham Hotspur v West Bromwich Albion");
					outtextxy(10,410,"West Ham United v Arsenal");


				break;

		case 6:         settextstyle(15,0,1);
				outtextxy(10,10,"1 January 2014");

				outtextxy(10,40,"Arsenal v Cardiff City");
				outtextxy(10,50,"Crystal Palace v Norwich City");
				outtextxy(10,60,"Fulham v West Ham United");
				outtextxy(10,70,"Liverpool v Hull City");
				outtextxy(10,80,"Manchester United v Tottenham Hotspur");
				outtextxy(10,90,"Southampton v Chelsea");
				outtextxy(10,100,"Stoke City v Everton");
				outtextxy(10,110,"Sunderland v Aston Villa");
				outtextxy(10,120,"Swansea City v Manchester City");
				outtextxy(10,130,"West Bromwich Albion v Newcastle United");

				outtextxy(340,10,"11 January 2014");

				outtextxy(340,40,"Aston Villa v Arsenal");
				outtextxy(340,50,"Cardiff City v West Ham United");
				outtextxy(340,60,"Everton v Norwich City");
				outtextxy(340,70,"Fulham v Sunderland");
				outtextxy(340,80,"Hull City v Chelsea");
				outtextxy(340,90,"Manchester United v Swansea City");
				outtextxy(340,100,"Newcastle United v Manchester City");
				outtextxy(340,110,"Southampton v West Bromwich Albion");
				outtextxy(340,120,"Stoke City v Liverpool");
				outtextxy(340,130,"Tottenham Hotspur v Crystal Palace");

				outtextxy(10,160,"18 January 2014");

				outtextxy(10,180,"Arsenal v Fulham");
				outtextxy(10,190,"Chelsea v Manchester United");
				outtextxy(10,200,"Crystal Palace v Stoke City");
				outtextxy(10,210,"Liverpool v Aston Villa");
				outtextxy(10,220,"Manchester City v Cardiff City");
				outtextxy(10,230,"Norwich City v Hull City");
				outtextxy(10,240,"Sunderland v Southampton");
				outtextxy(10,250,"Swansea City v Tottenham Hotspur");
				outtextxy(10,260,"West Bromwich Albion v Everton");
				outtextxy(10,270,"West Ham United v Newcastle United");

				outtextxy(340,160,"28 January 2014");

				outtextxy(340,180,"Aston Villa v West Bromwich Albion");
				outtextxy(340,190,"Crystal Palace v Hull City,");
				outtextxy(340,200,"Liverpool v Everton,");
				outtextxy(340,210,"Manchester United v Cardiff City,");
				outtextxy(340,220,"Norwich City v Newcastle United,");
				outtextxy(340,230,"Southampton v Arsenal,");
				outtextxy(340,240,"Sunderland v Stoke City,");
				outtextxy(340,250,"Swansea City v Fulham");

				outtextxy(10,300,"29 January 2014");

				outtextxy(10,320,"Chelsea v West Ham United");
				outtextxy(10,330,"Tottenham Hotspur v Manchester City");
				 break;

		case 7:		settextstyle(15,0,1);

				outtextxy(10,10,"1 February 2014");

				outtextxy(10,40,"Arsenal v Crystal Palace");
				outtextxy(10,50,"Cardiff City v Norwich City");
				outtextxy(10,60,"Everton v Aston Villa");
				outtextxy(10,70,"Fulham v Southampton");
				outtextxy(10,80,"Hull City v Tottenham Hotspur");
				outtextxy(10,90,"Manchester City v Chelsea");
				outtextxy(10,100,"Newcastle United v Sunderland");
				outtextxy(10,110,"Stoke City v Manchester United");
				outtextxy(10,120,"West Bromwich Albion v Liverpool");
				outtextxy(10,130,"West Ham United v Swansea City");

				outtextxy(340,10,"8 February 2014");

				outtextxy(340,40,"Aston Villa v West Ham United");
				outtextxy(340,50,"Chelsea v Newcastle United");
				outtextxy(340,60,"Crystal Palace v West Bromwich Albion");
				outtextxy(340,70,"Liverpool v Arsenal");
				outtextxy(340,80,"Manchester United v Fulham");
				outtextxy(340,90,"Norwich City v Manchester City");
				outtextxy(340,100,"Southampton v Stoke City");
				outtextxy(340,110,"Sunderland v Hull City");
				outtextxy(340,120,"Swansea City v Cardiff City");
				outtextxy(340,130,"Tottenham Hotspur v Everton");

				outtextxy(10,150,"11 February 2014");

				outtextxy(10,180,"Arsenal v Manchester United,");
				outtextxy(10,190,"Cardiff City v Aston Villa,");
				outtextxy(10,200,"Hull City v Southampton,");
				outtextxy(10,210,"Stoke City v Swansea City,");
				outtextxy(10,220,"West Bromwich Albion v Chelsea,");
				outtextxy(10,230,"West Ham United v Norwich City,");

				outtextxy(340,150,"12 February 2014");

				outtextxy(340,180,"Everton v Crystal Palace,");
				outtextxy(340,190,"Fulham v Liverpool,");
				outtextxy(340,200,"Manchester City v Sunderland,");
				outtextxy(340,210,"Newcastle United v Tottenham Hotspur,");

				outtextxy(10,250,"22 February 2014");

				outtextxy(10,280,"Arsenal v Sunderland");
				outtextxy(10,290,"Cardiff City v Hull City");
				outtextxy(10,300,"Chelsea v Everton");
				outtextxy(10,310,"Crystal Palace v Manchester United");
				outtextxy(10,320,"Liverpool v Swansea City");
				outtextxy(10,330,"Manchester City v Stoke City");
				outtextxy(10,340,"Newcastle United v Aston Villa");
				outtextxy(10,350,"Norwich City v Tottenham Hotspur");
				outtextxy(10,360,"West Bromwich Albion v Fulham");
				outtextxy(10,370,"West Ham United v Southampton");
				break;

		case 8:		settextstyle(15,0,1);

				outtextxy(10,10,"1 March 2014");

				outtextxy(10,40,"Aston Villa v Norwich City");
				outtextxy(10,50,"Everton v West Ham United");
				outtextxy(10,60,"Fulham v Chelsea");
				outtextxy(10,70,"Hull City v Newcastle United");
				outtextxy(10,80,"Manchester United v Manchester City");
				outtextxy(10,90,"Southampton v Liverpool");
				outtextxy(10,100,"Stoke City v Arsenal");
				outtextxy(10,110,"Sunderland v West Bromwich Albion");
				outtextxy(10,120,"Swansea City v Crystal Palace");
				outtextxy(10,130,"Tottenham Hotspur v Cardiff City");

				outtextxy(310,10,"8 March 2014");

				outtextxy(310,40,"Arsenal v Swansea City");
				outtextxy(310,50,"Cardiff City v Fulham");
				outtextxy(310,60,"Chelsea v Tottenham Hotspur");
				outtextxy(310,70,"Crystal Palace v Southampton");
				outtextxy(310,80,"Liverpool v Sunderland");
				outtextxy(310,90,"Manchester City v Aston Villa");
				outtextxy(310,100,"Newcastle United v Everton");
				outtextxy(310,110,"Norwich City v Stoke City");
				outtextxy(310,120,"West Bromwich Albion v Manchester United");
				outtextxy(310,130,"West Ham United v Hull City");

				outtextxy(10,150,"15 March 2014");

				outtextxy(10,180,"Aston Villa v Chelsea");
				outtextxy(10,190,"Everton v Cardiff City");
				outtextxy(10,200,"Fulham v Newcastle United");
				outtextxy(10,210,"Hull City v Manchester City");
				outtextxy(10,220,"Manchester United v Liverpool");
				outtextxy(10,230,"Southampton v Norwich City");
				outtextxy(10,240,"Stoke City v West Ham United");
				outtextxy(10,250,"Sunderland v Crystal Palace");
				outtextxy(10,260,"Swansea City v West Bromwich Albion");
				outtextxy(10,270,"Tottenham Hotspur v Arsenal");

				outtextxy(310,150,"22 March 2014");

				outtextxy(310,180,"Aston Villa v Stoke City");
				outtextxy(310,190,"Cardiff City v Liverpool");
				outtextxy(310,200,"Chelsea v Arsenal");
				outtextxy(310,210,"Everton v Swansea City");
				outtextxy(310,220,"Hull City v West Bromwich Albion");
				outtextxy(310,230,"Manchester City v Fulham");
				outtextxy(310,240,"Newcastle United v Crystal Palace");
				outtextxy(310,250,"Norwich City v Sunderland");
				outtextxy(310,260,"Tottenham Hotspur v Southampton");
				outtextxy(310,270,"West Ham United v Manchester United");

				outtextxy(10,290,"29 March 2014");

				outtextxy(10,320,"Arsenal v Manchester City");
				outtextxy(10,330,"Crystal Palace v Chelsea");
				outtextxy(10,340,"Fulham v Everton");
				outtextxy(10,350,"Liverpool v Tottenham Hotspur");
				outtextxy(10,360,"Manchester United v Aston Villa");
				outtextxy(10,370,"Southampton v Newcastle United");
				outtextxy(10,380,"Stoke City v Hull City");
				outtextxy(10,390,"Sunderland v West Ham United");
				outtextxy(10,400,"Swansea City v Norwich City");
				outtextxy(10,410,"West Bromwich Albion v Cardiff City");
				 break;

		case 9:		settextstyle(15,0,1);

				outtextxy(10,10,"5 April 2014");

				outtextxy(10,40,"Aston Villa v Fulham");
				outtextxy(10,50,"Cardiff City v Crystal Palace");
				outtextxy(10,60,"Chelsea v Stoke City");
				outtextxy(10,70,"Everton v Arsenal");
				outtextxy(10,80,"Hull City v Swansea City");
				outtextxy(10,90,"Manchester City v Southampton");
				outtextxy(10,100,"Newcastle United v Manchester United");
				outtextxy(10,110,"Norwich City v West Bromwich Albion");
				outtextxy(10,120,"Tottenham Hotspur v Sunderland");
				outtextxy(10,130,"West Ham United v Liverpool");

				outtextxy(320,10,"12 April 2014");

				outtextxy(320,40,"Arsenal v West Ham United");
				outtextxy(320,50,"Crystal Palace v Aston Villa");
				outtextxy(320,60,"Fulham v Norwich City");
				outtextxy(320,70,"Liverpool v Manchester City");
				outtextxy(320,80,"Manchester United v Hull City");
				outtextxy(320,90,"Southampton v Cardiff City");
				outtextxy(320,100,"Stoke City v Newcastle United");
				outtextxy(320,110,"Sunderland v Everton");
				outtextxy(320,120,"Swansea City v Chelsea");
				outtextxy(320,130,"West Bromwich Albion v Tottenham Hotspur");

				outtextxy(10,150,"19 April 2014");

				outtextxy(10,180,"Aston Villa v Southampton");
				outtextxy(10,190,"Cardiff City v Stoke City");
				outtextxy(10,200,"Chelsea v Sunderland");
				outtextxy(10,210,"Everton v Manchester United");
				outtextxy(10,220,"Hull City v Arsenal");
				outtextxy(10,230,"Manchester City v West Bromwich Albion");
				outtextxy(10,240,"Newcastle United v Swansea City");
				outtextxy(10,250,"Norwich City v Liverpool");
				outtextxy(10,260,"Tottenham Hotspur v Fulham");
				outtextxy(10,270,"West Ham United v Crystal Palace");

				outtextxy(320,150,"26 April 2014");

				outtextxy(320,180,"Arsenal v Newcastle United");
				outtextxy(320,190,"Crystal Palace v Manchester City");
				outtextxy(320,200,"Fulham v Hull City");
				outtextxy(320,210,"Liverpool v Chelsea");
				outtextxy(320,220,"Manchester United v Norwich City");
				outtextxy(320,230,"Southampton v Everton");
				outtextxy(320,240,"Stoke City v Tottenham Hotspur");
				outtextxy(320,250,"Sunderland v Cardiff City");
				outtextxy(320,260,"Swansea City v Aston Villa");
				outtextxy(320,270,"West Bromwich Albion v West Ham United");
				break;

		case 10:	settextstyle(15,0,1);

				outtextxy(10,10,"3 May 2014");
				outtextxy(10,40,"Arsenal v West Bromwich Albion");
				outtextxy(10,50,"Aston Villa v Hull City");
				outtextxy(10,60,"Chelsea v Norwich City");
				outtextxy(10,70,"Crystal Palace v Liverpool");
				outtextxy(10,80,"Everton v Manchester City");
				outtextxy(10,90,"Manchester United v Sunderland");
				outtextxy(10,100,"Newcastle United v Cardiff City");
				outtextxy(10,110,"Stoke City v Fulham");
				outtextxy(10,120,"Swansea City v Southampton");
				outtextxy(10,130,"West Ham United v Tottenham Hotspur");

				outtextxy(340,10,"11 May 2014");

				outtextxy(340,40,"Cardiff City v Chelsea");
				outtextxy(340,50,"Fulham v Crystal Palace	");
				outtextxy(340,60,"Hull City v Everton");
				outtextxy(340,70,"Liverpool v Newcastle United");
				outtextxy(340,80,"Manchester City v West Ham United");
				outtextxy(340,90,"Norwich City v Arsenal");
				outtextxy(340,100,"Southampton v Manchester United");
				outtextxy(340,110,"Sunderland v Swansea City");
				outtextxy(340,120,"Tottenham Hotspur v Aston Villa");
				outtextxy(340,130,"West Bromwich Albion v Stoke City");
				break;
		}
	}