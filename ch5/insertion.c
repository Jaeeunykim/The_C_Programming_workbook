#include <stdio.h>

int N = 10, M=6, I =3;
char arr[10] = "A,B,C,E,F,G";
int back;

int insert(char name)
{
	if(M < N)
	{
		back = M +1;
	}
	else
		return 0;

	while(back > I)
	{
		arr[back] = arr[M];
		back = back -1;
	}

	arr[I] = name;

	M = M+1;
}

int main()
{
	int i;
	char name = "D";
	int insert(name);

	for(i=0; i<11; i++)
		
		printf("after insert 'D': %d", arr[i]);
}
