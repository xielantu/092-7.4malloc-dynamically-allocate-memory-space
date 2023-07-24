// 092-7.4malloc动态开辟内存空间.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char* strcpy(char* dest,const char* src)


int main()
{
    char* p;//野指针
    p = (char*)malloc(1);
    *p = 'c';
    printf("%c\n", *p);
    free(p);
    p = (char*)malloc(12);
    printf("扩容地址：%x\n", p);
    int newlen = strlen("chenlichenwertygfdsdfghgfd")- 12 + 1;
    realloc(p, newlen);
    printf("扩容地址：%x\n", p);
    strcpy_s(p, strlen("chenlichenwertygfdsdfghgfd")+1, "chenlichenwertygfdsdfghgfd");//给'\0'留一个字节
    puts(p);
    putchar('\n');
    puts("end");

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
