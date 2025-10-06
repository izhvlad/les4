#include <stdio.h>

int main(int argc, char** argv){
  double res = 0;
   double che[10];
    for(int i = 0; i < 10; ++i){
        scanf("%lf", &che[i]);
    }
    for (int i = 0; i < 10; i++){
    res += che[i];
    }
    res *= 10;
        printf("%.3f", res/100);
return 0;

}
