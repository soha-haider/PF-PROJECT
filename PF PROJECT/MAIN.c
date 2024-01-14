#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
void help();
int main()
     {
     int r,r1,count,i;
     char choice;
     char playername[20];
     int zombie=3;
     int health=5;
     mainhome:		
     system("cls");
     printf("\t\t\t WELCOME TO THE ZOMBIE QUIZ GAME\n");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t__\n\n");
     choice=toupper(getch());
    if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(0);
    else if(choice=='S')
    {
     system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
    gets(playername);
    system("cls");
    printf("\n ------------------  WELCOME %s TO ZOMBIE Quiz Game --------------------------",playername);
    printf("\n >> Here are some tips you might wanna know before playing:");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D.");
    printf("\n >> If you managed to kill all the zombies,you'll move on to next level.");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++)
     {
     	if(zombie == 0){
     	system("cls");
     	printf("\nyou killed all the zombies.\n");
     	printf("\nCONGRATULATIONS!!!! YOU WON\n");
		break;
		 }
     system("cls");
     r1=i;
     switch(r1)
		{
        case 1:
        printf("\nYour health: %d | Zombie's health: %d\n",health, zombie);
		printf("\n\n\nThe country with highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++; zombie--;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       health--;
		       getch();
		       break;}

        case 2:
        printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++; zombie--;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       health--;
		       getch();
		       break;}

        case 3:
        printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Cristiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++; zombie--;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       health--;
		       getch();
		       break;}

       case 4:
       	printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++; zombie--; getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology"); health--;
			   getch();
		       break;
		       }

        case 5:
        printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++; zombie--;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		      zombie--;
		       getch();
		       break;}}
		       }}
		       //----------------level2-------------
 	if(zombie == 0)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY NEXT LEVEL, BETTER LUCK NEXT TIME\n\n");
	printf("  _____  \n");
    printf(" /     \\ \n");
    printf("| () () |\n");
    printf("|   ?   |\n");
    printf(" \\  |  / \n");
    Beep(500,300);
    Beep(300,400);
    exit(0);
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t** CONGRATULATION %s you killed all the zombies.",playername);
     printf("Proceed to Level-2");
     printf("\n\n\n\n\t!Press S to Start Level-2!");
     if(toupper(getch())=='s')
		{goto game;}
		system ("cls");
game:
	system("cls");
	  zombie =3;
	  health=5;
      for(i=1;i<=5;i++){
      	if(zombie == 0){
     	system("cls");
     	printf("\nyou killed all the zombies.\n");
     	printf("\nCONGRATULATIONS!!!! YOU WON\n");
		break;
		 }
     	system("cls");
     r=i;
     switch(r)
		{
		case 1:
			printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\nIn UK, what is the day after christmas known as?");
		printf("\n\nA.Candlemas day\t\tB.Lunar new year\n\nC.Boxing day\t\tD.Europe day");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");zombie--;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C. Boxing day");health--;getch();
		       
		       break;}
		case 2:
			printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWhich planet has the most gravity?");
		printf("\n\nA.Jupiter\t\tB.Mercury\n\nC.Mars\t\tD.Neptune");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");zombie--;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Jupiter");health--;getch();
		       break;
		       }

        case 3:
        	printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWhat Netflix show had the most streaming in 2021?");
		printf("\n\nA.Manifest\t\tB.Ozark\n\nC.Squid Game\t\tD.Wednesday");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");zombie--;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Squid Game");health--;getch();
		       break;}

        case 4:
        	printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");zombie--;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");health--;getch();		      
		       break;
		       }

        case 5:
        	printf("\nYour health: %d | Zombie's health: %d\n", health, zombie);
		printf("\n\n\nWhat was the original color for all Ferrari model?");
		printf("\n\nA.Blue\t\tB.Red\n\nC.Black\t\tD.Grey");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");zombie--;getch(); break;}
		else
		       {
		       printf("\n\nWrong!!! The correct answer is B.Red");zombie--;
		       getch();
		       break;
		       }}}
			   if(zombie>0&&zombie<4)
			   {
			   	system("cls");
			   	printf("YOU FAILED TO KILL ALL ZOMBIES.\n");
			   	printf("You have lost level-2\n");
			   	 printf("  _____  \n");
                 printf(" /     \\ \n");
                 printf("| () () |\n");
                 printf("|   ?   |\n");
                 printf(" \\  |  /\n");
                 Beep(500,300);
   				 Beep(300,400);
			   }exit(0);}
			   
void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C- Zombie Quiz Game...........");
    printf("\n >> There are two rounds in the game.");
    printf("\n >> In first round you will be asked a total of 5 questions.");
    printf("\n >> You have a chance to kill all the zombies till 5 questions are asked.");
    printf("\n >> If you answered a question incorrectly, you'll loose your health.");
    printf("\n >> Right answers will kill a zombie for you.");
    printf("\n >> When you'll kill all the zombies, you move onto next level with more difficult questions.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
	printf("\n\n\t*BEST OF LUCK*");
	}
