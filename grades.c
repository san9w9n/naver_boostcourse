#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SCORES[9] = {95,90,85,80,75,70,65,60,0};
const char* GRADES[9] = {"A+","A ","B+","B ","C+","C ","D+","D ","F "};

void printTable(){
    printf("학점 프로그램\n");
    printf("종료를 원하면 ""999""를 입력\n");
    printf("[학점 테이블]\n");
    printf("점수: ");
    for(int i=0; i<9; i++) printf("%d    ", SCORES[i]);
    printf("\n");
    printf("학점: ");
    for(int i=0; i<9; i++) printf("%s    ", GRADES[i]);
    printf("\n");
}

int checkScore(float score){
    if(score>=95) return 0;
    else if(score>=90) return 1;
    else if(score>=85) return 2;
    else if(score>=80) return 3;
    else if(score>=75) return 4;
    else if(score>=70) return 5;
    else if(score>=65) return 6;
    else if(score>=60) return 7;
    else return 8;
}

void inputScore(){
    float score = 0;
    while(1){
        printf("성적을 입력하세요 (0 ~ 100) :");
        scanf("%f",&score);
        if(score==-1) break;
        if(score<0 || score>100){
            printf("** %.0f 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n",score);
            continue;
        }
        printf("학점은 %s입니다.\n",GRADES[checkScore(score)]);
    }
    printf("학점 프로그램을 종료합니다.\n");
}


int main(){
    printTable();
    inputScore();
}