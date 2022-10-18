#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	
	for(i=0;i<5;i++)
	{
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
		
		//생존시간은 중괄호가 끝이라 생성소멸이 반복됨 
		//1을 더해도 소멸이 되니까 저장되는 값이 또 1부터 시작
		//변수의 생존 기간이 블록 안으로 국한된다
		//괄호 밖으로 빼면 생존 시간이 길어지면서 더할 수 있 음 
	}
	return 0;
}
