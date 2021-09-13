#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
int main(void)
{
	int num;
	int ch;
	
	printf("아... 여긴 어디지?\n\n");
	Sleep(1500);
	printf("나는 분명 담배를 사러 가고 있었는데..?\n\n");
	Sleep(1500);
	printf("일단 여기서 나가야겠어! (핸드폰을 꺼낸다.)\n");
	Sleep(1500);
	printf("(전파가 터지지 않는다.) 이런 젠장알!\n\n");
	Sleep(1500);
	printf("(일단 주변을 둘러보자..)\n");
	Sleep(1500);
	system("cls");
	printf("주변에...침대,조명,선반,냉장고,주사기...이정도가 있네..\n\n");
	Sleep(2000);
	system("cls");
	printf("어떤것 부터 조사해볼까?\n\n");
	printf("1.침대 2.조명 3.선반 \n4.냉장고 5.주사기\n");
	
	scanf("%d",&num);
	system("cls");
	if(num==1)
	{
		printf("--침대를 조사한다--\n\n"); 
		printf("1.누워본다\n2.들춰본다\n3.돌아간다\n");
		scanf("%d",&ch);
		Sleep(2000);
		system("cls");
	if(num==1)
	{
		printf("편안하다\n");
		Sleep(2000);
		system("cls");
		printf("1.누워본다\n2.들춰본다\n3.돌아간다");
	 } 
	 else
	 {
	if(num==2)
	{
		printf("무언가가 있다!\n");
		Sleep(2000);
		system("cls");
		printf("사진을 획득하였다!\n\n");
	 } 
	 }
	
	 } 
	 
	
	return 0;
}
