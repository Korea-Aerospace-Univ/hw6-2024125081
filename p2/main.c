#include <stdio.h>
int main(void) {

int arr1[20] = {};              // arr1 배열과 arr2 배열의 크기를 20으로 제한
int arr2[20] = {};
int N;
int *p = nullptr;                     // p와 q를 아무것도 가리키지 않는 포인터로 초기화 + 생성 
int *q = nullptr;

scanf("%d", &N);              //정수 N을 입력받고
for(p = arr1; p < arr1 + N; p++){              //arr1 배열에 배열 인덱스마다 하나씩 값을 저장함
    scanf("%d", p);                                 //  N개 만큼의 배열을 생성
}

for(q = arr2; q < arr2 + N; q++){                 //arr2 배열에 배열 인덱스마다 하나씩 값을 저장함 
    scanf("%d", q);                                // N개 만큼의 배열을 생성
}


for(q = arr2 + N - 1, p = arr1; q >= arr2, p <arr1 + N; q--, p++){         //arr2는 N개의 원소에서 마지막 원소인 N - 1부터 시작, 
    printf(" %d",*p + *q);       //arr1는 처음 원소부터 시작     
}                                  // arr1과 arr2가 서로 매칭되는 2개를 더해감
                                  //그 2개를 더한 숫자를 출력

  return 0;
}
