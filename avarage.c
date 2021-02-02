#include <stdio.h>
#include <stdlib.h>

int compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){
    //배열의 크기는 상관없음, 정렬 순서도 상관없음.
    int arr[8] = {1,2,2,6,7,10,20,30};
    qsort(arr,sizeof(arr)/sizeof(int),sizeof(arr[0]),compare);
    //중앙값 구하기.
    printf("%d\n",arr[(sizeof(arr)/sizeof(int)/2)]);
    return 0;
}