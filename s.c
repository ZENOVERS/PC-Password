#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define cls system("cls")

void Shutdown(int i)
{
	char com[30] = { 0, };
	sprintf(com, "shutdown -s -t %d", i);
	system(com);
}

int main()
{
	int password = 0;

	system("title Password");
	system("taskkill /f /im explorer.exe");

	cls;
	printf("Password: ");
	scanf("%d", &password);

	if (password != 2012) // 2012를 원하는 값으로 교체 가능
	{
		cls;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		puts("암호가 틀립니다. 3초 후 컴퓨터가 종료됩니다.");

		Shutdown(3); // 괄호 안 '값' 초 이후 컴퓨터 종료 
	}
	else
		system("start explorer");
	

	return 0;
}