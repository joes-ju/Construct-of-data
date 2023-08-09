#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct Stack{
    DataType* a;
    int capacity;
    int top;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, DataType x);
void StackPop(ST* ps);
bool StackEmpty(ST* ps);
DataType StackTop(ST* ps);
int StackSize(ST* ps);
