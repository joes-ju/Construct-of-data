#include"stack.h"

void StackInit(ST* ps){
    assert(ps);

    ps->a = (DataType*)malloc(sizeof(DataType)*4);
    if(ps->a == NULL){
        perror("malloc fail");
        exit(-1);
    }

    ps->top = 0;
    ps->capacity = 4;
}

void StackDestroy(ST* ps){
    assert(ps);

    free(ps->a);
    ps->a = NULL;
    ps->capacity = ps->top = 0;
}

void StackPush(ST* ps, DataType x){
    assert(ps);

    if(ps->top == ps->capacity){
        DataType* tmp = (DataType*)realloc(ps->a,sizeof(DataType)*2*ps->capacity);
        if(tmp == NULL){
            perror("realloc fail");
            exit(-1);
        }

        ps->a = tmp;
        ps->capacity *= 2;
    }

    ps->a[ps->top] = x;
    ps->top++;
}

void StackPop(ST* ps){
    assert(ps);
    assert(ps->top > 0);

    ps->top--;
}

bool StackEmpty(ST* ps){
    assert(ps);

    if(ps->top == 0){
        return true;
    }else{
        return false;
    }
}

DataType StackTop(ST* ps){
    assert(ps);
    assert(ps->top > 0);

    return ps->a[ps->top - 1];
}

int StackSize(ST* ps){
    assert(ps);

    return ps->top;
}