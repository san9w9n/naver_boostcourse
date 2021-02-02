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
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {5,4,3,2,1};
    int count=0;

    qsort(arr1, 5, sizeof(arr1[0]), compare);
    qsort(arr2, 5, sizeof(arr2[0]), compare);
    
    for(int i=0; i<5; i++){
        if(arr1[i]==arr2[i]) count++;
    }

    if(count==5) printf("True\n");
    else printf("False\n");

    return 0;
}
