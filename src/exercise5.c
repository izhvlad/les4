#include <stdio.h>



int main(int argc, char** argv){
int ar10_3[10][3];
int ar3_10[3][10];
int ar10_10[10][10] = {0};
for(int i = 0; i < 10; i++ )
{
    ar10_3[i][0] =  i;
    ar10_3[i][1] = i - 1;
    ar10_3[i][2] = i + 1 ;
        ar3_10[0][i] =  1;
        ar3_10[1][i] =  0;
        ar3_10[2][i] =  1;
}
int a = 0;
int b = 0;
while(a < 10){
    for(b = 0; b < 10; b++) {
        for( int j = 0; j < 3; j++) {
             ar10_10[a][b] += ar10_3[a][j] * ar3_10[j][b];
            }
        }
 a++;

}


for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++ ){
            printf("%d ", ar10_10[i][j]);
        }
        printf("\n");
    }
return 0;
}
