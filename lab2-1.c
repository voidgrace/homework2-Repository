#include <stdio.h>
int main()
{
    char charType; //char�� ���� 'charType'����
    int integerType; //int�� ���� 'integerType'����
    float floatType; //floar�� ���� 'floatType'����
    double doubleType; //double�� ���� 'doubleType'����

    printf("[-----[������][2022041047]-----]\n"); //�̸� �� �й�
    
    //������ ũ��
    printf("Size of char: %ld byte\n",sizeof(charType)); //char�� ���� 'charType'ũ��
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int�� ���� 'integerType'ũ��
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //floar�� ���� 'floatType'ũ��
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double�� ���� 'doubleType'ũ��
    printf("-----------------------------------------\n"); //ĭ ������

    //�ڷ����� ũ��
    printf("Size of char: %ld byte\n",sizeof(char)); //�ڷ��� char�� ũ��
    printf("Size of int: %ld bytes\n",sizeof(int)); //�ڷ��� int�� ũ��
    printf("Size of float: %ld bytes\n",sizeof(float)); //�ڷ��� float�� ũ��
    printf("Size of double: %ld bytes\n",sizeof(double)); //�ڷ��� double�� ũ��
    printf("-----------------------------------------\n"); //ĭ ������

    //������ ������ ũ��__�����Ϳ��� ����Ű�� �ڷ����� ������� �ּҰ��� ���Ƿ� ��� ũ�Ⱑ ����.
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char�� ������ ������ ũ��
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int�� ������ ������ ũ��
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float�� ������ ������ ũ��
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double�� ������ ������ ũ��
    
    return 0;

}

