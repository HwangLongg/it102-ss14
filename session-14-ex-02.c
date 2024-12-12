#include <stdio.h>

int main() {
    int a;
    
  
    printf("Moi ban nhap vao so bat ky: ");
    scanf("%d", &a);


    if ( a % 2 == 0 ) {
        printf("So nhap vao la so chan : %d\n", a);  
    } 
    else {
        printf("So nhap vao la so le : %d\n", a); 
    }

    return 0;
}
