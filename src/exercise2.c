#include <stdio.h>

int main(int argc, char** argv){

        double che[10];
    for(int i = 0; i < 10; ++i){
        scanf("%lf", &che[i]);
    }
        for (int i = 0; i < 10; i++){
    printf("%.0f ", che[9 - i]);

        }

return 0;
}
