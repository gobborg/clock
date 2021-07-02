# include <stdio.h>
# include <time.h>

/* abbreviations of variable names:
clt = current_local_time
cut = current_utc_time
*/

int main(){

char *name;
time_t clt= time(&clt); /* sets variable now with valuetype time_t. returns the time since Jan 1 1970 */
struct tm * cut = gmtime(&clt); /* points to variable cut as a structure to hold time and date. gets current time as time in utc */

int hournames = cut->tm_hour;
/* You have to define the variable before switching on it.  a switch is like a huge if statement but cut down */
/* Also, hournames is an integer.  That means the value in case should also be an integer, like I did before */
/* And you need to define the string name before assigning to it */

switch(hournames){
	case 12:
		name="ZULU";
		break;
	case 11:
		name="ALPHA";
		break;
	case 10:
		name="BRAVO";
		break;
	case 9:
		name="CHARLIE";
		break;
	case 8:
		name="DELTA";
		break;
	case 7:
		name="ECHO";
		break;
	case 6:
		name="FOXTROT";
		break;
	case 5:
		name="GOLF";
		break;
	case 4:
		name="HOTEL";
		break;
	/* INDIA is skipped */
	case 3:
		name="JULIET";
		break;
	case 2:
		name="KILO";
		break;
	case 1:
		name="LIMA";
		break;
	case 0:
		name="MIKE";
		break;
	case 23:
		name="NOVEMBER";
		break;
	case 22:
		name="OSCAR";
		break;
	case 21:
		name="PAPA";
		break;
	case 20:
		name="QUEBEC";
		break;
	case 19:
		name="ROMEO";
		break;
	case 18:
		name="SIERRA";
		break;
	case 17:
		name="TANGO";
		break;
	case 16:
		name="UNIFORM";
		break;
	case 15:
		name="VICTOR";
		break;
	case 14:
		name="WHISKEY";
		break;
	case 13:
		name="X-RAY";
		break;
	/*YANKEE is the same as MIKE but offset by 24h.*/
	}
printf("Current time is %s:%02d:%02d\n", name, cut->tm_min, cut->tm_sec); 
return 0;
}
