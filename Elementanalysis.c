#include<stdio.h>

int max(int A[], int m){
    int max = A[0];
    for(int i=1;i<m;i++){
        if(A[i] > max)
            max = A[i];
    }
    return max;
}

void duplicate(int A[], int m){
    int mx = max(A,m);
    int Buffer[mx+1];
    for(int i=0;i<=mx;i++){
        Buffer[i]=0;
    }
    for(int i=0;i<m;i++){
        Buffer[A[i]]++;
    }
    for(int i=0;i<m;i++){
        if(Buffer[A[i]]!=0){
            printf("%d occurs %d times\n",A[i],Buffer[A[i]]);
            Buffer[A[i]]=0;
        }
    }
}

void main(){
    int n,a,b,m,count;
    printf("Enter size of array: ");
    scanf("%d",&m);
    int A[m];
    printf("Enter elements of array = ");
    for(int i=0; i< m; i++){
        scanf("%d",&A[i]);
    }
    duplicate(A,m);
}