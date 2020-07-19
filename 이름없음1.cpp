#include <stdio.h>
int main(){
int reserve_seat,i;
char seat[10] = {'O','O','O','O','O','O','O','O','O','O'};


printf("현재 좌석 상태 : [");
for(i=0; i<10; i++)
	{
	  printf(" %c",seat[i]);	
	}
printf(" ]\n");

while(1)
	{
	printf("\n예약할 좌석 번호 : ");
		scanf("%d",&reserve_seat);

if(seat[reserve_seat-1] == 'X') printf("이미 예약 되어 있습니다.\n");
	
if(reserve_seat == 1) seat[0] = {'X'};
else if(reserve_seat == 2) seat[1] = {'X'};
else if(reserve_seat == 3) seat[2] = {'X'};
else if(reserve_seat == 4) seat[3] = {'X'};
else if(reserve_seat == 5) seat[4] = {'X'};
else if(reserve_seat == 6) seat[5] = {'X'};
else if(reserve_seat == 7) seat[6] = {'X'};
else if(reserve_seat == 8) seat[7] = {'X'};
else if(reserve_seat == 9) seat[8] = {'X'};
else seat[9] = {'X'};


	printf("현재 좌석 상태 : [");
for(i=0; i<10; i++)
	{
	  printf(" %c",seat[i]);	
	}
printf(" ]\n");


  if(seat[0] == 'X' && seat[1] == 'X' && seat[2] == 'X' && seat[3] == 'X'
	&& seat[4] == 'X' && seat[5] == 'X' && seat[6] == 'X' && seat[7] == 'X' 
&& seat[8] == 'X' && seat[9] == 'X')
		{
			printf("\n예약이 완료되어 종료합니다!\n\n");
			break;}
	}
}
