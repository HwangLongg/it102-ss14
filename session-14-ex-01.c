#include <stdio.h>

int main() {
    int a;
    
  
    printf("Moi ban nhap vao so bat ky: ");
    scanf("%d", &a);

   
    if (a > 0) {
        printf("So nhap vao la so duong: %d\n", a);  
    } else if (a < 0) {
        printf("So nhap vao la so am: %d\n", a); 
    } else {
        printf("So nhap vao la so khong (0): %d\n", a); 
    }

    return 0;
}
