#include <stdio.h>

int main() {
    int a;
    
  
    printf("Moi ban nhap vao so bat ky: ");
    scanf("%d", &a);

   
    if ( a % 3 == 0 && a % 5 == 0 ) {
        printf("So nhap vao chia het cho ca 3 va 5 : %d\n", a);  
    } 
    else if (a % 3 == 0) {
        printf("So nhap vao chia het cho 3  : %d\n", a); 
    } else if ( a % 5 == 0) {
        printf ("so nhap vao chja het cho 5 : %d\n",a);
    } else {
        printf ("so nhap vao khong chi het cho 3 hay 5 : %d\n",a);
    }


    return 0;
}
