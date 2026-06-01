#include <stdio.h>

int main(void)
{
    char ch[10];           //10개의 영문자를 입력받아야 하니 배열의 크기를 10으로 설정
    char *p = nullptr;          //pointer p를 생성과 동시에 초기화
    char *q = nullptr;
    
    for(p = ch; p < ch + 10; p++) {         //10개의 영문자를 입력
        scanf("%c", p);                    //포인터를 이용해 배열에 저장
    }
        
    char result = ch[0];                 //result의 문자 배열의 원소를 비워두는 초기화 
    int maxCount = 0;                   //가장 많이 나타난 빈도수를 찾기 위한 변수 초기화
        
        
    for(p = ch; p < ch + 10; p++) {
        int count = 0;           //현재 문자의 빈도 
        
        for(q = ch; q < ch + 10; q++) {
            if (*p == *q) {               //같은 문자인지 확인
                count++;                 //같은 문자면 count 수 하나 추가
            }
        }
        //더 큰 경우를 찾은 경우에만 갱신 
        if (count > maxCount) {
            maxCount = count;        //빈도가 같은 경우에는 갱신하지 않으므로 먼저 나온 문자가 출력됨
            result = *p;
        }
        
    }
    printf("%c %d", result, maxCount);
    

    return 0;
}
