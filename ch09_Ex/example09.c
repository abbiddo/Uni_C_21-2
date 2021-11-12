/**
프로그램명 : example09.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.11
작성자 : 정소영
**/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
int main(){
	char *s1 = "The Little Prince";
	//char *s2 = ___________________
	char *s2 = malloc(sizeof(char)*20);
	
	//____________________________
	strcpy(s2,s1);
	
	printf("%s\n",s2);
	
	free(s2);
	
	return 0;
}

/**
실행 결과
The Little Prince
**/ 
