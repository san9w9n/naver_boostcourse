//배열을 이용하여 queue를 만들어보자.
//add, pop, display, quit 함수 구현해서
//실제 queue를 구현해보자

//과제 설명에 있는 대로, 은행이랑 똑같이 구현했음.
//은행은 번호표를 뽑으면 남아있는 사람이 몇명이든 간에
//마지막 번호표를 뽑은 사람의 다음 번호표를 받는다.
//따라서 오늘 다녀간 총 고객수도 확인할 수 있는 것이다.
#include <stdio.h>

const int MAX = 10;
const int front = 0;
int rear = 0, client = 2;


void add(int* arr){
    if(rear==MAX){
        printf("대기 손님이 꽉 찼습니다.\n");
    }
    else{
        rear++;
        arr[rear] = client;
        client++;   
    }
}

int pop(int* arr){
    if(front==rear){
        printf("대기 손님이 없습니다.\n");
    }
    else{
        for(int i=front; i<MAX; i++){
            arr[i] = arr[i+1];
        }
        rear--;
    }
}

void display(int* arr){
    if(front==rear) printf("손님이 하나도 없습니다.\n");
    
    else{
        for(int i=front; i<rear; i++) printf("%d번 ", arr[i]);
        printf("\n");
    }
}

void quit(){
    printf("은행 영업시간 종료입니다.\n");
}

int main(){
    int arr[10] = {1};
    int num = 0;
    while(1){
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            add(arr);
            break;
        case 2:
            pop(arr);
            break;
        case 3:
            display(arr);
            break;
        case 4:
            quit();
            return 0;
        default:
            printf("제대로 입력해주세요.\n");
            break;
        }
    }
    return 0;
}