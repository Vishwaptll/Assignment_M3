/*
37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/

// I.
#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t weeks");
	scanf("%d",&a);
	
	
	switch(a)
	{
		case 1 : printf("\n\n\t Monday");
		case 2 : printf("\n\n\t Tuesday");
		case 3 : printf("\n\n\t Wednesday");
		case 4 : printf("\n\n\t Thursday");
		case 5 : printf("\n\n\t Friday");
		case 6 : printf("\n\n\t Saturday");
		case 7 : printf("\n\n\t Sunday");
		break;
		default : printf("\n\n\t .......................");
		
	}
}



 