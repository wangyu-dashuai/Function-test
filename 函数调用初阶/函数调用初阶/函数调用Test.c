#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>

//用递归实现strlen
//int strlen(char *string){
//	int count = 0;
//	if (*string != '\0'){
//		string++;
//		count = 1 + strlen(string);
//	}
//	return count;
//}

//用非递归实现strlen
//int strlen(char *string){
//	int count = 0;
//	while (*string++ != '\0'){
//		count++;
//	}
//	return count;
//}
//
//
//int main(){
//	char *str = "abcdefgh";
//	printf("%d\n",strlen(str));
//	system("pause");
//	return 0;
//
//}

