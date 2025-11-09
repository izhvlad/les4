 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
char* my_strstr(char* ar, char*ar_search){
for(int i = 0;  ar[i] != '\0'; i++ ){
    if(ar[i] == ar_search[0]){
        int a = i;
        int b = 0;
        while(ar[a] == ar_search[b] && ar_search[b] !='\0'){
            a++;
            b++;
         }
         if(ar_search[b] == '\0'){
            return &ar[i];
         }
    }
}
return NULL;
}

void reverse_string(char* ar){
 char temp_ar;
 int index = 0;
for(int i = 0;  ar[i] != '\0'; i++ ){
    index++;
 }

 for(int j = index - 1, i = 0; i < j; j--, i++){
    temp_ar = ar[j];
    ar[j] = ar[i];
    ar[i] = temp_ar;
 }
}
int is_palindrome(char* ar){
 int index = 0;
for(int i = 0;  ar[i] != '\0'; i++ ){
    index++;
}
for(int i = 0, j = index - 1; i < index; i++, j-- ){
    if(ar[i] == ' '){
        i++;

    }
     if(ar[j] == ' '){
        j--;
    }
    if(tolower(ar[i]) != tolower(ar[j])){
        return false;
    }
}
    return true;
}
char* int_to_string(int number){ //1234

    if(number == 0){
        char* ar = malloc(2);
        ar[0] = '0';
        ar[1] = '\0';
        return ar;
    }
    int index = 0;
    int minus = 0;
    if(number < 0){
        number *= -1;
        minus = 1;
        index++;
    }
    int temp_number = number;
    while(temp_number > 0){
        temp_number /= 10;
        index++;
            //4
    }

     int n = pow(10,(index - 1 - minus)); // 1000

    char* ar = malloc(index + 1 + minus);
    ar[index] = '\0';
    int i = 0;
   if(minus == 1 ){
            ar[0] = '-';
            i++;

        }
    while( i < index){
        int temp_n = trunc(number/n); //1
        //printf("temp_n =  '%d'\n", temp_n);
        number = number % n;
       // printf("number ='%d'\n", number);
        ar[i] ='0' + temp_n;
        n /=10;
       // printf(" n =  %d\n", n);
        i++;
        //printf(" '%c'\n", ar[i]);
    }
    return ar;
  }
  int string_to_int(char* ar){
    int index = 0;
    int minus = 0;
    int res = 0;
    int ten = 1;
    if(ar[0]  == '-'){
        minus = 1;
    }
    for(int i = minus; ar[i] != '\0'; i++ ){
        index++;
    }
    for(int i = index + minus - 1; i >= minus ; i--){
    res += (ar[i] - '0') * ten;
    ten *= 10;
    }
    if(minus == 1){
        res *= -1;
    }
    return res;
  }
char* get_max_length_string(char* ar){
 int temp_max = 0;
int max = 0;
 int res = 0;
 for(int i = 0; ar[i] != '\0'; i++ ){

    if(ar[i] != ' ' ){
        temp_max++;
    }
     if(temp_max > max ){
       max = temp_max;
        res = i + 1 - temp_max;
     }
     if(ar[i] ==' ' || ar[i] == ','){
        temp_max = 0;
     }
}
    return &ar[res];
}
char* RLE(char* ar){
int flug = 0;
int index = 0;
int sokrat = 0;
for(int i = 0; ar[i] != '\0'; i++ ){
    index++;
}
for(int i = 0; i < index; i++){
    if(ar[i] == ar[i + 1]){
        flug++;
    }

    if(ar[i] != ar[i + 1]){
        ar[sokrat] = ar[i]; // записываем в начало просто букву на которой i стоит для обозначения
        sokrat++;
        ar[sokrat] = '0' + (flug + 1);
        sokrat++;
         flug = 0;
    }
}
ar[sokrat] = '\0';
return ar;
}
char* RLD(char* ar){
char* res;
int b = 0;
int index = 0;
int flug = 0;
for(int i = 1; ar[i] != '\0'; i += 2){
    char temp_str[2] = {ar[i],'\0'};
b += string_to_int(temp_str);
}
res = (char*)malloc((b + 1) * sizeof(char));
for(int i = 0; ar[i] != '\0'; i += 2){
 char temp_str[2] = {ar[i + 1],'\0'};
   index = string_to_int(temp_str);
   for(int j = 0; j < index; j++ ){
     res[flug] = ar[i];
     flug++;
    }
}
res[flug] = '\0';
return res;
}
int is_anagram(char* ar, char* ra){
    int a = 1;
    int index = strlen(ra);
    char temp_ra[index + 1];
    strcpy(temp_ra, ra);
for(int i = 0; ar[i] != '\0'; i++){
   int flug = 0;
    for(int j = 0; temp_ra[j] != '\0'; j++){
        if(ar[i] == temp_ra[j]){
        temp_ra[j] = ',';
       flug = 1;
        break;
        }
    }
    if(flug == 0){
        a = 0;
        break;
    }
}

if(a == 0){
    return false;
}
return true;
}
