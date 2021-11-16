#include <stdio.h>
//extern int Test;
int Test;

void foo(){
    if(Test) {
        printf("foo1\n");
    } 
    else {
        printf("foo2\n");
    }
}
void bar(int i){
    if(Test){
        i++;
        printf("bar%d\n",i);
    }
    else{
        i--;
        printf("bar%d\n",i);
    }
}
void zoo(int i){
    i++;
    printf("zoo%d\n",i);
}

void A(){
    int i = 0;
    if(Test){
        i = 1;
    }
    else{
        //i = 2;
    }
    printf("A%d\n",i);
}

void B(){
    if(Test){
        int i = 1;
        printf("B%d\n",i);
    }
    else{
        int i = 2;
        printf("B%d\n",i);
    }
}
void C(){
    int i;
    if(Test){
        i = 1;
        if(!Test)
            goto SLOW;
        printf("B%d\n",i);
    }
    else{
        i = 2;
SLOW:
        printf("B%d\n",i);
    }
}
void D(){
    if(Test){
        int i = 1;
        if(!Test)
            goto SLOW;
        printf("B%d\n",i);
    }
    else{
        int i = 2;
SLOW:
        printf("B%d\n",i);
    }
}
int main()
{
    foo();
    bar(1);
    zoo(2);
    A();
    B();
    C();
    D();
    return 1;
}
