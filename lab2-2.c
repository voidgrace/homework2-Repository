#include <stdio.h>
int main()
{
    int i; //int�� ���� 'i'
    int *ptr;// int�� ������ ���� 'ptr'
    int **dptr;// int�� ���������� ���� 'dptr'

    i = 1234; //i�� �� '1234' �Ҵ�

    printf("[-----[������][2022041047]-----]\n"); //�̸� �� �й�

    printf("[checking values before ptr = &i] \n");//ptr�� i�� �ּҰ��� �Ҵ��ϱ� �� �� Ȯ��

    printf("value of i == %d\n", i);//i�� ��
    printf("address of i == %p\n", &i);//i�� �ּ� ��
    printf("value of ptr == %p\n", ptr);//ptr�� ��
    printf("address of ptr == %p\n", &ptr);//ptr�� �ּ� ��

    ptr = &i; /* ptr is now holding the address of i */ //ptr�� i�� �ּҰ��� �Ҵ� ��

    printf("\n[checking values after ptr = &i] \n");//ptr�� i�� �ּҰ��� �Ҵ��� �� �� Ȯ��
    printf("value of i == %d\n", i);//i�� ��
    printf("address of i == %p\n", &i);//i�� �ּ� ��
    printf("value of ptr == %p\n", ptr);//ptr�� ��
    printf("address of ptr == %p\n", &ptr);//ptr�� �ּ� ��
    printf("value of *ptr == %d\n", *ptr);//ptr�� ����Ű�� �ִ� ������ �� ( = i)

    dptr = &ptr; /* dptr is now holding the address of ptr */ //���� ������ ����dptr�� ptr�� �ּҰ��� �Ҵ� ��

    printf("\n[checking values after dptr = &ptr] \n"); //dptr�� ptr�� �ּҸ� �Ҵ��� �� �� Ȯ��
    printf("value of i == %d\n", i);// i�� ��
    printf("address of i == %p\n", &i);//i�� �ּ�
    printf("value of ptr == %p\n", ptr);//ptr�� ��
    printf("address of ptr == %p\n", &ptr);//ptr�� �ּ� ��
    printf("value of *ptr == %d\n", *ptr);//ptr�� ����Ű�� ������ ��
    printf("value of dptr == %p\n", dptr);//dptr�� ��
    printf("address of dptr == %p\n", &dptr);//dptr�� �ּҰ�
    printf("value of *dptr == %p\n", *dptr);//dptr�� ����Ű�� �ִ� ������ �� (= ptr = i�� �ּ�)
    printf("value of **dptr == %d\n", **dptr);//dptr�� ����Ű�� ���� ����Ű�� ��(= *ptr = i)
    
    *ptr = 7777; /* changing the value of *ptr */ //ptr�� ����Ű�� ������ ���� '7777'�� ����

    printf("\n[after *ptr = 7777] \n");//ptr�� ����Ű�� ������ ���� '7777'�� ������ �� �� Ȯ��
    printf("value of i == %d\n", i);//i�� ��
    printf("value of *ptr == %d\n", *ptr);//ptr�� ����Ű�� ��
    printf("value of **dptr == %d\n", **dptr);//dptr�� ����Ű�� ���� ����Ű�� ��

    **dptr = 8888; /* changing the value of **dptr */ //dptr�� ����Ű�� ��(ptr)�� ����Ű�� ��(i)�� '8888'�� ����

    printf("\n[after **dptr = 8888] \n");//dptr�� ����Ű�� ��(ptr)�� ����Ű�� ��(i)�� '8888'�� ������ �� �� Ȯ��
    printf("value of i == %d\n", i);//i�� ��
    printf("value of *ptr == %d\n", *ptr);//ptr�� ����Ű�� ��(i)
    printf("value of **dptr == %d\n", **dptr);//dptr�� ����Ű�� ��(ptr)�� ����Ű�� ��(i)

    return 0;
}