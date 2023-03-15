#include <stdio.h>
int main()
{
    char charType; //char형 변수 'charType'선언
    int integerType; //int형 변수 'integerType'선언
    float floatType; //floar형 변수 'floatType'선언
    double doubleType; //double형 변수 'doubleType'선언

    printf("[-----[강은혜][2022041047]-----]\n"); //이름 및 학번
    
    //변수의 크기
    printf("Size of char: %ld byte\n",sizeof(charType)); //char형 변수 'charType'크기
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형 변수 'integerType'크기
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //floar형 변수 'floatType'크기
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형 변수 'doubleType'크기
    printf("-----------------------------------------\n"); //칸 나누기

    //자료형의 크기
    printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char의 크기
    printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int의 크기
    printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float의 크기
    printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double의 크기
    printf("-----------------------------------------\n"); //칸 나누기

    //포인터 변수의 크기__포인터에는 가리키는 자료형과 상관없이 주소값만 들어가므로 모두 크기가 같다.
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char형 포인터 변수의 크기
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형 포인터 변수의 크기
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형 포인터 변수의 크기
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 포인터 변수의 크기
    
    return 0;

}

