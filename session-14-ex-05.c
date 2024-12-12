#include <stdio.h>

int main() {
    int a , b , c ;
    
  
    printf("Moi ban nhap vao ngay bat ky  : ");
    scanf("%d", &a);
    printf("Moi ban nhap vao thang bat ky : ");
    scanf("%d", &b);
    printf("Moi ban nhap vao nam bat ky  : ");
    scanf("%d", &c);
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12 && 0 < a && a < 32 && 0 <= c ){
        printf ( " Ngay %d Thang %d Nam %d ",a ,b ,c);

    } else if (a > 0 && a < 32 && c >= 0 && b == 4 || b == 6 || b == 9 || b == 11){
        printf ( " Ngay %d Thang %d Nam %d ", a ,b ,c);
    }
    else if ( b == 2 && 0 < a && a < 29  && 0 <= c )
    {
        printf ( " Ngay %d Thang %d Nam %d ", a ,b ,c );
    }
    else if ( b == 2 && 0 < a && a < 30 &&  c % 4 == 0 && c % 100 != 0  )
    {
        printf ( " Ngay %d Thang %d Nam %d ", a ,b ,c );
    }
    return 0;
}