#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
int res = nums[0];
int temp_res = 0;

         for(int a = 0; a < size; a++ ){
            temp_res += nums[a];
            if(res < temp_res ){
            res = temp_res;
            }
            if(temp_res < res){
                int mega_temp_res = 0;
                for(int k = a; k < size; k++){
                mega_temp_res += nums[k];
                    if(res < mega_temp_res){
                        res = mega_temp_res;
                    }
                }
            }
            //printf(" i = %d\n res = %d\n temp_res = %d\n", a, res, temp_res);

         }
        return res;
}

int length_of_lis(int* nums, int numsSize) {
  int res = nums[0];
int temp_res = nums[0];
int flug = 1;
int temp_flug = 1;
if(numsSize == 0){
    flug = 0;
    return flug;
    }
for(int i = 0; i < numsSize - 1; i++){
    if(nums[i] < nums[i + 1] ){
     temp_flug++;
     temp_res += nums[i + 1];
        if(res < temp_res){
         res = temp_res;
        }
            if(flug < temp_flug ){
             flug  = temp_flug;
            }
    }
    else{

     temp_flug = 0;
     temp_res = nums[i + 1];
    }
 //printf(" i = %d\n  flug = %d\n", i,  flug);
}
return flug;
}

/*int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}*/

