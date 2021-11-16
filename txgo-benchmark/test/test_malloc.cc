
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<new>
#include<malloc.h>

struct S{
    int x;
    int y;
};

int main()
{
    int *test_a1;
    int *test_a2;
    int *test_a3;
    //int *test_a4;

    struct S *test_b;
    struct S *test_c;
    struct S *test_d;
    struct S *test_e;

    test_a1 = (int *)malloc(sizeof(int)*2);
    printf("%p = malloc(%lu)\n",test_a1, sizeof(int)*2);
    *test_a1 = 1;
    free(test_a1);

    test_a2 = (int *)valloc(sizeof(int)*2);
    printf("%p = valloc(%lu)\n",test_a2, sizeof(int)*2);
    *test_a2 = 1;
    free(test_a2);

    printf("calloc\n");
    test_a3 = (int *)calloc(sizeof(int),2);
    printf("%p = calloc(%lu,2)\n",test_a3, sizeof(int));
    *test_a3 = 1;
    //free(test_a3);

    printf("realloc\n");
    test_a3 = (int *)realloc(test_a3,sizeof(int)*4);
    printf("%p = realloc(%p,%lu)\n",test_a3, test_a3, sizeof(int)*4);
    *test_a3 = 1;
    free(test_a3);

    ////////////////////////
    
    char *buffer1;
    buffer1 = (char *)memalign(64,8);
    printf("%p = memalign(64,8)\n",buffer1);
    *buffer1 = 1;
    free(buffer1);
    
    const char *buffer2 = "1234567890\n"; // 11+'\0' = 12
    char *buffer3;
    buffer3 = strdup(buffer2);
    printf("%p = strdup(%p)\n",buffer3,buffer2);
    buffer3[0] = 'A';
    free(buffer3);
    
    ////////////////////////
    
    test_b = new struct S;
    printf("%p = new struct S, sizeof(struct S)=%lu\n",test_b,sizeof(struct S));
    test_b->x = 1;
    test_b->y = 2;
    delete test_b;

    test_c = new (std::nothrow) struct S;
    printf("%p = new (nothrow) struct S, sizeof(struct S)=%lu\n",test_c,sizeof(struct S));
    test_c->x = 1;
    test_c->y = 2;
    delete test_c;

    test_d = new struct S[5];
    printf("%p = new struct S[], sizeof(struct S)*5=%lu\n",test_d,sizeof(struct S)*5);
    test_d[1].x = 1;
    test_d[2].y = 2;
    delete[] test_d;

    test_e = new (std::nothrow) struct S[5];
    printf("%p = new nothrow struct S[], sizeof(struct S)*5=%lu\n",test_e,sizeof(struct S)*5);
    test_e[1].x = 1;
    test_e[2].y = 2;
    delete[] test_e;


    return 1;
}
