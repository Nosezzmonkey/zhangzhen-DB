#pragma once
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1024
#define NAME_SIZE 255
typedef struct {
	int id;
	char name[NAME_SIZE];
}ElementType;
//创建树结点来存放数据
