#include<stdio.h>

void mergeArray(int A[],int B[],int n,int m){
    int C[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(A[i]<=B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<n){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<m){
        C[k]=B[j];
        j++;
        k++;
    }
    for(int x=0;x<n+m;x++){
        printf("%d ",C[x]);
    }
}

void main(){
    int n,a,b,m,count;
    printf("Enter size of 1st array : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements of 1st array : ");
    for(int i=0; i< n; i++){
        scanf("%d",&A[i]);
    }
    printf("Enter size of 2nd array : ");
    scanf("%d",&m);
    int B[m];
    printf("Enter elements of 2nd array : ");
    for(int i=0; i< m; i++){
        scanf("%d",&B[i]);
    }
    mergeArray(A,B,n,m);
}