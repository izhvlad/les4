#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
int k = atoi(argv[1]);
double ara[10];
int flug = 0;
for(int i = 0; i < 10; i++ ){
  scanf("%lf", &ara[i]);

}
if (k >= 0){
 for(int i = 0; i < 10; i++){
  if (i < k){
    printf("%.0f ", ara[10 + i - k] );
}
  else if(k <= i)
 {
     printf("%.0f ", ara[i - k] );
 }
}
}
if(k < 0)
{
 for(int i = 0; i < 10 ; i++){
  if (i - k < 10 ){
    printf("%.0f ", ara[ -k + flug]);
      flug++;                             // 0 1 2 3 4 5 6 7 8 9
                                         //  1 2 3 4 5 6 7 8 9 10
}
else if (i - k >= 10){
printf("%.0f ", ara[ i - flug]);

}
 }

 }
return 0;
}
