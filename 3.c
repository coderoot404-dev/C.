#include <stdio.h>

int main() {
    int row = 1;
    for(int i = 4; i >= row; i--){
        for(int j = 1; j <= i; j++){   // TODO: j utni bar hi chaly ga jitni i ki value ho gi jasy phely 4 bar or phir 3 bar or isi tarha agy bhi
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
