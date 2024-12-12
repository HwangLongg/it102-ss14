#include <stdio.h>

int main() {
    int a , b , c ;
    
  
    printf("Moi ban nhap vao so thu nhat : ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so thu hai : ");
    scanf("%d", &b);
    printf("Moi ban nhap vao so thu ba : ");
    scanf("%d", &c);
   
    if ( a < c && c < b ) {
        printf("So thu ba co nam giua so thu nhat va so thu hai ");  
    } 
    else if ( a > c && c > b ) {
        printf ( " so thu ba co nam giua so thu nhat va so thu hai ");
    } 
    else { 
        printf ( "so thu ba khong nam giua so thu nhat va so thu hai ");
    }

    return 0;
}