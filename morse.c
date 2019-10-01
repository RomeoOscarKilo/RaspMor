
#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#include <ctype.h>
void ledControl( char * );
int main(void)
{
	wiringPiSetup();
	char input[50] = {'\0'};
	printf("Enter your text to be blinked, no more then 50 chars \n");
	scanf("%s" , &input);
	for (int count = 0; count < strlen(input); count++)
	{ledControl(&input[count]);}
}
void ledControl( char *cPtr)
{
	//printf("%c\n" , *cPtr);
	if(!isdigit(*cPtr))
		{
		switch(toupper(*cPtr))
		{
			case 'A':
				break;
			case 'B':
                                break;
			case 'C':
                                break;
			case 'D':
                                break;
			case 'E':
				printf("E\n");
                                break;
			case 'F':
                                break;
			case 'G':
                                break;
			case 'H':
                                break;
			case 'I':
                                break;
			case 'J':
                                break;
			case 'K':
                                break;
			case 'L':
                                break;
			case 'M':
                                break;
			case 'N':
                                break;
			case 'O':
                                break;
			case 'P':
                                break;
			case 'Q':
                                break;
			case 'R':
                                break;
			case 'S':
				printf("S\n");
                                break;
			case 'T':
				printf("T\n");
                                break;
			case 'U':
                                break;
			case 'V':
                                break;
			case 'W':
                                break;
			case 'X':
                                break;
			case 'Y':
                                break;
			case 'Z':
				break;
		}
		} else {
		
				switch(*cPtr)
				{
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					break;

				}
		}
}
