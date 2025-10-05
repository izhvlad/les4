#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
float x = atoi(argv[1]);
int k = atoi(argv[2]);
float ara[10];
float ara_2[10];
for(int i = 0; i < 10; i++){
 scanf("%f", &ara[i]);

}

for(int i = 0; i < 10; i++){
    if(i < k){
        ara_2[i] = ara[i];
 }
 else if(i == k){
    ara_2[k] = x;
 }
else if(k < i){
    ara_2[i] = ara[i - 1];
}
}
for(int i = 0; i < 10; i++){
printf("%0.2f ", ara_2[i]);

}

return 0;



}
