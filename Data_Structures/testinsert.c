#include <stdio.h>

//배열선언

char charlist[10] = "ABCEF";

//insert함수 선언 : 문자, 배열의개수, 숫자
int insert(char name, int M, int I)
{
//변수 선언
	int back, N;

	N = sizeof(charlist);

//배열의 크기와 배열안에 있는 멤버 크기비교 하여 back 위치를 정함

	if(N>M) 
	{
		back = M+1;
	}
	else
		printf("the array is fulled!\n");

//배열의 멤버들을 옮기자!

	while(back > I)
	{
		charlist[back] = charlist[back-1];
		back--;
	}

	charlist[back] = name;
	M++;
	return M;
}

//메인함수에서 사용하기

int main()
{
//D를 가지고 있는 key 배열 선언
	char key[] = "D";
//insert를 사용하여 사입된 배열의 멤머 크기 출력
	printf("The size of memeber : %d\n", insert(key[0],5,4));

//charlist배열을 전체 출력 해보기
	printf("show me the array : ");
	
	for (int i =0; i<sizeof(charlist); i++)
	{
	printf("%c", charlist[i]);
	}
	printf("\n");
}
