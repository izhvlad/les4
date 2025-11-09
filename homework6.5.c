#include <stdio.h>
#include <math.h>
int get_second_max(int* ar, size_t size_ar){
int max = ar[0];
int res = ar[0];
for(int i = 0; i < size_ar; i++){
    if(ar[i] > max){
        max = ar[i];
    }
}
for(int i = 0; i < size_ar; i++){
    if(ar[i] > res && ar[i] != max ){
        res = ar[i];
    }}
    return res;
}

    int is_alternating(int* ar, size_t size_ar){
        int plus = 0; 
        int minus = 0;
        if(size_ar %2 == 1){
            plus = 1; 
            minus = 1;
        }
        int res = 0;
        if(ar[0] < 0){
        for(int i = 0; i <size_ar - 1 ; i++){
            if(ar[i] < 0){
                minus++;
                if(ar[i + 1] >= 0){
                 minus++;
                  printf("i + 1 =%d\n minus = %d\n size_ar = %d\n ",  ar[i + 1], minus, size_ar );
                    i++;
                   
                }
            }
        }if(minus == size_ar){
            res = 1;
        }
    }if(ar[0] >= 0){
        for(int i = 0; i <size_ar - 1 ; i++){
            if(ar[i] >= 0){
                plus++;
                if(ar[i + 1] < 0){
                   plus++;
                    i++;
                }
            }
        }if(plus == size_ar){
            res = 1;
    }}

        return res;}

    void remove_gt_one(float* ar, size_t size_ar){
        for(int i = 0; i < size_ar; i++){
            if(fabs(ar[i]) < 1){
                ar[i] = 0;
            }
         }
         int flug = size_ar - 1;
         for(int i = 0; i < size_ar; i++){
            if(ar[i] == 0){
                while(flug > i && ar[flug] == 0){
                    flug--;
                }
                if(i < flug ){
                    float temp_a = ar[flug];
                    ar[flug] = ar[i];
                    ar[i] = temp_a;
                    flug--;
                }
            }
         }
        
    }
    int get_greater_freq(int* ar, size_t size_ar){
        int max = 0;
        int temp_a = 0;
        int index = 0;
        for(int i = 0; i < size_ar; i++){
            temp_a = 0;
            for(int j = 0; j < size_ar; j++ ){
                if(ar[i] == ar[j] ){
                    temp_a++;
                }
            }
            if(temp_a > max){
                max = temp_a;
                index = i;
            }
        }
        int res = ar[index];
        return(res);
    }

int get_greater_series(int* ar, size_t size_ar){
    int temp_a = 0;
    int max = 0;
    for(int i = 0; i < size_ar; i++){
        temp_a = 0;
        for(int j = i; j < size_ar; j++ ){
            if(ar[i] == ar[j]){
                temp_a++;
            }
            if(ar[i] != ar[j]){
                break;
            }
        }
        if(temp_a > max){
            max = temp_a;
            }
     }
     return max;
}
