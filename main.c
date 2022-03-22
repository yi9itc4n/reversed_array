#include <stdio.h>

int main() {
int N;
int dizi[20];
int tmp;
    printf("dizi boyutu girin:\n");
    scanf("%d",& N);
    printf("dizi elemanlarini girin:\n");
    for (int i = 0; i < N; ++i) {
        scanf("%d",& dizi[i]);

    }
    for (int j = 0; j < N; ++j) {
        printf("%d\n",dizi[j]);
    }
    for (int i = 0; i < N/2; ++i) {
        tmp=dizi[i];
        dizi[i]=dizi[N-i-1];
        dizi[N-i-1]=tmp;
    }
    printf("-------------------------------------\n");
    for (int j = 0; j < N; ++j) {
        printf("%d\n",dizi[j]);}
    return 0;
}
