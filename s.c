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

	if (password != 2012) // 2012�� ���ϴ� ������ ��ü ����
	{
		cls;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		puts("��ȣ�� Ʋ���ϴ�. 3�� �� ��ǻ�Ͱ� ����˴ϴ�.");

		Shutdown(3); // ��ȣ �� '��' �� ���� ��ǻ�� ���� 
	}
	else
		system("start explorer");
	

	return 0;
}