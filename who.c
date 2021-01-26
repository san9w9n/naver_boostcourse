#include <stdio.h>
#include <stdlib.h>
#define SIZE 500000

int compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(int arge, char*argv[]) {
    int n;

    scanf("%d", &n);

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i=0; i < lengthOfPartArr; i++){
        scanf("%d", &partArr[i]);
    }

    // TODO: n과 partArr를 이용하여, K를 구하라
    qsort(partArr, n-1, sizeof(partArr[0]), compare);
    for(int i=0; i < n-1; i++){
        if(partArr[i] != i+1){
            printf("%d\n",partArr[i]-1);
            break;
        }
    }

    return 0;
}