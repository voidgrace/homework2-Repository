#include <stdio.h>
int main()
{
    int i; //int형 변수 'i'
    int *ptr;// int형 포인터 변수 'ptr'
    int **dptr;// int형 이중포인터 변수 'dptr'

    i = 1234; //i에 값 '1234' 할당

    printf("[-----[강은혜][2022041047]-----]\n"); //이름 및 학번

    printf("[checking values before ptr = &i] \n");//ptr에 i의 주소값을 할당하기 전 값 확인

    printf("value of i == %d\n", i);//i의 값
    printf("address of i == %p\n", &i);//i의 주소 값
    printf("value of ptr == %p\n", ptr);//ptr의 값
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 값

    ptr = &i; /* ptr is now holding the address of i */ //ptr에 i의 주소값을 할당 함

    printf("\n[checking values after ptr = &i] \n");//ptr에 i의 주소값을 할당한 후 값 확인
    printf("value of i == %d\n", i);//i의 값
    printf("address of i == %p\n", &i);//i의 주소 값
    printf("value of ptr == %p\n", ptr);//ptr의 값
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 값
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키고 있는 변수의 값 ( = i)

    dptr = &ptr; /* dptr is now holding the address of ptr */ //이중 포인터 변수dptr에 ptr의 주소값을 할당 함

    printf("\n[checking values after dptr = &ptr] \n"); //dptr에 ptr의 주소를 할당한 뒤 값 확인
    printf("value of i == %d\n", i);// i의 값
    printf("address of i == %p\n", &i);//i의 주소
    printf("value of ptr == %p\n", ptr);//ptr의 값
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 값
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 변수의 값
    printf("value of dptr == %p\n", dptr);//dptr의 값
    printf("address of dptr == %p\n", &dptr);//dptr의 주소값
    printf("value of *dptr == %p\n", *dptr);//dptr이 가리키고 있는 변수의 값 (= ptr = i의 주소)
    printf("value of **dptr == %d\n", **dptr);//dptr이 가리키는 값이 가리키는 값(= *ptr = i)
    
    *ptr = 7777; /* changing the value of *ptr */ //ptr이 가리키는 변수의 값을 '7777'로 수정

    printf("\n[after *ptr = 7777] \n");//ptr이 가리키는 변수의 값을 '7777'로 수정한 뒤 값 확인
    printf("value of i == %d\n", i);//i의 값
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값
    printf("value of **dptr == %d\n", **dptr);//dptr이 가리키는 값이 가리키는 값

    **dptr = 8888; /* changing the value of **dptr */ //dptr이 가리키는 값(ptr)이 가리키는 값(i)을 '8888'로 수정

    printf("\n[after **dptr = 8888] \n");//dptr이 가리키는 값(ptr)이 가리키는 값(i)을 '8888'로 수정한 뒤 값 확인
    printf("value of i == %d\n", i);//i의 값
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값(i)
    printf("value of **dptr == %d\n", **dptr);//dptr이 가리키는 값(ptr)이 가리키는 값(i)

    return 0;
}