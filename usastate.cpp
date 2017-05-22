#include <stdio.h>
#include <string.h>
int main(void)
{
	char in[50],gus[50];
	char state[50][50]={"Alabama","Alaska","Arizona","Arkansas","California","Colorado","Connecticut","Delaware","Florida","Georgia", "Hawaii","Idaho", "Illinois",
"Maryland",
"Minnesota", 
"Iowa", 
"Maine", 
"Kentucky",
"Indiana",
"Kansas", 
"Louisiana", 
"Oregon", 
"Oklahoma", 
"Ohio", 
"North Dakota",
"New York", 
"New Mexico",
"New Jersey", 
"New Hampshire",
"Nevada", 
"Nebraska",
"Montana", 
"Missouri", 
"Mississippi", 
"Massachusettes", 
"Michigan", 
"Pennslyvania", 
"Rhode Island", 
"South Carolina", 
"South Dakota", 
"Tennessee", 
"Texas", 
"Utah", 
"Vermont", 
"Virginia", 
"Washington", 
"West Virginia", 
"Wisconsin", 
"Wyoming"};
	char cap[50][50]={"Montgomery","Juneau","Phoenix","Little Rock","Sacramento","Denver","Hartford","Dover","Tallahassee","Atlanta","Honolulu","Boise","Springfield","Annapolis","Saint Paul","Des Moines","Augusta","Frankfort","Indianapolis","Topeka","Baton Rouge","Salem","Oklahoma City","Columbus","Bismark","Albany","Santa Fe","Trenton","Concord","Carson City","Lincoln","Helena","Jefferson City","Jackson","Boston","Lansing","Harrisburg","Providence","Columbia","Pierre","Nashville","Austin","Salt Lake City","Montpelier","Richmond","Olympia","Charleston","Madison","Cheyenne"};
	int n,i,j,k,len;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&in);
		scanf("%s",&gus);
		for(i=0;i<=49;i++)
		{
			if(strcmp(in,state[i])==0) break;
			else;
		}
		if(strcmp(gus,cap[i])==0) printf("Your anwswer is correct\n");
		else printf("The capital of %s is %s\n",state[i],cap[i]);
	}
	return 0;
}
