#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main (int argc, char* argv[])
{
	char line[MAXLINE];
	long lineno = 0;
	int c, except =0, number = 0, found = 0;

	while(--argc > 0 && (*++argv)[0] == '-')
		while (c = *++argv[0])
			switch (c) {
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("find: illegal option %c\n", c);
					argc = 0;
					found = -1;
					break;
				}
	if (except == 1 && number != 1)
		printf("-x로 시작하는 패턴은 제외합니다\n");

	else if (number == 1 && except != 1)
		printf("-n으로 시작하는 패턴의 행에 번호를 출력합니다\n");
	
	else if (except == 1 && number ==1)
		printf("-n -x혹은 -x -n으로 시작하는 패턴은 제외합니다\n");
}


	
