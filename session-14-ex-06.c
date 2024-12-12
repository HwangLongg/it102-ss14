#include <stdio.h>

int main() {
    int a , b , c ;
    
  
    printf("Moi ban nhap vao so dien dau thang : ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so dien cuoi thang  : ");
    scanf("%d", &b);
    c = b - a ;
    if ( 0 <= c && c < 50  ) {
        printf(" tien dien thang nay la 10.000 vnd ");  
    } 
    else if ( 50 <= c && c < 100 ) {
        printf ( " tien dien thang nay la 15.000 vnd ");
    } 
    else if ( 100 <= c && c < 150 ) {
        printf ( " tien dien thang nay la 20.000 vnd ");
    } 
    else if ( 150 <= c && c < 200 ) {
        printf ( " tien dien thang nay la 25.000 vnd ");
    } 
    else if (200 <= c ){ 
        printf ( " tien dien thang nay la 30.000 vnđ ");
    }
    return 0;
}