#include <stdio.h>

int main(int argc, char** argv){
  float res = 0;
   double che[10];
    for(int i = 0; i < 10; ++i){
        scanf("%lf", &che[i]);
    }
    for (int i = 0; i < 10; i++){
res += che[i];
    }
    printf("%.2lf", res/10);
return 0;

}
