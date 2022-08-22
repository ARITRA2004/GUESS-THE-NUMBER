//here i use if else , random number generation , 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main ()
{
	int from,to;
	int i,left;
	int rand_num;
	int guess_num;
	srand(time(NULL));
	printf("	Guess !! the number  \n\n	You have 10 attemps  \n\n");
	printf("	To enter the game press Any key - ");
	getch();	
	printf("\n\n	From  ");
	scanf("%d",&from);
	printf("\n	To  ");
	scanf("%d",&to);
	for(i=1;i<=10;i++)
	{
		rand_num = (rand()%(to-from)+1)+from; //generating random number from - to
		printf("\n	Enter you number  ");
		scanf("%d",&guess_num);
		if(guess_num==rand_num)
		{
			printf("\n\n	You win !!  \n");
			printf("\n	After %d attemps you win  \n",i);
			break;
		}
		else
		{
			printf("\n\n	You have choosen a worng number  \n");
			left = (10-i);
			printf("\n\n	You have %d attemps left  \n",left);
		}
		if(i==10){
			printf("\n	You have no more chance  ");
		}
	}
getch();
}
