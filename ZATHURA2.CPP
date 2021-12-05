#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
void draw_line(int n,char ch);
void gamescore(char name1[],char name2[],int p1, int p2);
void play_dice(int &score);

void main()
{
int player1=0,player2=0,lastposition,ch,sh,gh;
char player1name[80],player2name[80];
randomize();
again:
clrscr();
draw_line(80,'�');
cout<<"\n\n\n같같같같같같같같같같같같같캺ATHURA - A SPACE ADVENTURE";
draw_line(26,'�');
cout<<"\n\nEnter Your Choice\n\n";
cout<<"1. Play The Game\n\n";
cout<<"2. About The Game\n\n";
cout<<"3. Exit\n\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n\n\nPlayer 1 Enter Your Name:";
gets(player1name);
cout<<"\n\n\nPlayer 2 Enter Your Name:";
gets(player2name);
while(player1<=100 && player2<=100)
{
gamescore(player1name,player2name,player1,player2);
cout<<"\n\n::>" <<player1name<<"Now your turn , Press any key to play ";
getch();
lastposition=player1;
play_dice(player1);
if(player1<lastposition)
cout<<"\n\aOops!! Aliens found , You are at postion "<<player1<<"\n";
else if(player1>lastposition+6)
cout<<"\nGreat!! you got Lucky , You are at position "<<player1;
cout<<"\n\n::>"<<player2name<<"Now your turn , Press any key to play ";
getch();
lastposition=player2;
play_dice(player2);
if(player2<lastposition)
cout<<"\n\n\aOops!! Aliens found !! You are at position "<<player2<<"\n";
else if(player2>lastposition+6)
cout<<"\n\nGreat!! you got Lucky !! You are at position "<<player2<<"\n";
getch();
}
clrscr();
cout<<"\n\n\n";
draw_line(50,'+');
cout<<"\n\n\t\tRESULT\n\n";
draw_line(50,'+');
cout<<endl;
gamescore(player1name,player2name,player1,player2);
cout<<"\n\n\n";
if(player1>=player2)
cout<<player1name<<" !! You are the winner of the game\n\n";
else
cout<<player2name<<" !! You are the winner of the game\n\n";
draw_line(50,'+');
getch();
gain:
cout<<"\nThe Game is finished\n";
cout<<"Enter your choice\n";
cout<<"1. About The game\n";
cout<<"2. Goto Main Menu\n";
cout<<"3. Exit\n";
cin>>gh;
switch(gh)
{
case 1:
goto AGAIN;
break;
case 2:
goto again;
break;
case 3:
exit(0);
break;
default:
cout<<"ERROR"<<endl;
goto gain;
break;
}
break;
case 2:
AGAIN:
clrscr();
cout<<"This is a game based on movie ZATHURA\n";
cout<<"Zathura was release in 2005\n";
cout<<"Two young brothers find themselves transported\n";
 cout<<"into the depths of space while playing a board game.\n";
 cout<<"They try their best to find their way back to Earth.\n";
cout<<"\nWinning this game is completely based on your luck\n";
cout<<"You are also supposed to keep patience\n";
cout<<"\n\t\tThank You\n";
Again:
cout<<"What do you want to do\n";
cout<<"1. Go back To Main Menu\n";
cout<<"2. Exit\n";
cin>>sh;
switch(sh)
{
case 1:
goto again;
break;
case 2:
exit(0);
break;
default:
cout<<"ERROR"<<endl;
goto Again;
break;
}
break;
case 3:
exit(0);
default:
cout<<"ERROR"<<endl;
goto again;
break;
}
}
void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
cout<<ch;
}


void gamescore(char name1[],char name2[],int p1, int p2)
{
cout<<"\n";
draw_line(50,'*');
cout<<"\n\t\tGAME STATUS\n";
draw_line(50,'*');
cout<<"\n\t::>"<<name1<<" is at position "<<p1<<endl;
cout<<"\t::>"<<name2<<" is at position "<<p2<<endl;
draw_line(50,'_');
cout<<endl;
}

void play_dice(int &score)
{
int dice;
dice=random(6)+1;
cout<<"\nYou got "<<dice<<" Point !! ";
score=score+dice;
cout<<"Now you are at position "<<score;
switch(score)
{
case 98 :score=28;break;
case 95 :score=25;break;
case 92 :score=52;break;
case 83 :score=43;break;
case 73 :score=1;break;
case 69 :score=96;break;
case 64 :score=36;break;
case 59 :score=17;break;
case 55 :score=7;break;
case 96 :score=69;break;
case 21 :score=82;break;
case 43 :score=77;break;
case 8 :score=91;break;
case 54 :score=93;break;
case 62 :score=96;break;
case 66 :score=87;break;
case 80 :score=100;
}
}