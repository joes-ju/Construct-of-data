#include<stdio.h>
#include<unistd.h>

#define LOG "log.txt"

// int main(){
//     FILE* fp = fopen(LOG, "w");
//     close(1);
//     printf("stdin: %d\n",stdin->_fileno);
//     printf("stdout: %d\n",stdout->_fileno);
//     printf("stderr: %d\n",stderr->_fileno);
//     printf("fp: %d\n",fp->_fileno);

//     // fclose(fp);
//     return 0;
// }
#include"stack.h"

void test_stack01(){
    ST st;
    StackInit(&st);
    StackPush(&st,1);
    StackPush(&st,2);
    StackPush(&st,3);
    StackPush(&st,4);
    StackPush(&st,5);

    printf("The number of stack is: %d\n",StackSize(&st));
    while(st.top){
        printf("%d->",StackTop(&st));
        StackPop(&st);
    }
    printf("NULL\n");

    StackDestroy(&st);
}

void test_stack02(){
    ST st;
    StackInit(&st);
    StackPush(&st,11);
    StackPush(&st,22);
    StackPush(&st,33);
    StackPush(&st,44);
    StackPush(&st,55);
    printf("The number of size of stack: %d\n",StackSize(&st));
    while(st.top){
        printf("%d->",StackTop(&st));
        StackPop(&st);
    }
    printf("NULL\n");

    printf("Empty: %d\n",StackEmpty(&st));
    StackDestroy(&st);
}

int main(){
    // test_stack01();
    test_stack02();
    return 0;
}