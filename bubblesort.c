#include <stdio.h>
void sort(int n , int *p){
    int i, j, tmp;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if(*(p+j)>*(p+j+1)){
                tmp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=tmp;
            }
        }
    }
}
int main(){ 
    int n = 7; 
    int arr[7] = { 0, 25, 10, 17, 6, 12, 9 }; 
    sort(n, arr);
    for(int i=0; i<n; i++){
        if(i==n-1) printf("%d\n",arr[i]);
        else printf("%d, ",arr[i]);
    }
    return 0; 
}
