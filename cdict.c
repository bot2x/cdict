/******************************************************************************
Author : bot2x
Date   : 7th Aug, 2022
*******************************************************************************/

#include <stdio.h>
#include "string.h"
#include <stdlib.h>

#define DICT_SIZE 101
#define HASHSIZE 101

struct dict {
    // struct dict *next;
    char *key;
    int value;
    // struct dict *pt;
};


struct dict key_arr[DICT_SIZE], dict_arr[DICT_SIZE];


unsigned hash(char *s){
    unsigned hashval;
    for (hashval = 0; *s != '\0'; s++)
      hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

int get_value(char * kn){
    unsigned hash_val;
    hash_val = hash(kn);
    
    // struct dict dict_element;
    
    return key_arr[hash_val].value;
}

void print_value(char * kn){
    printf ("\nValue : %d", get_value(kn));
}

void put_in_dict(char *kn, int val){
    unsigned hash_val;
    hash_val = hash(kn);
    
    key_arr[hash_val].key = kn;
    key_arr[hash_val].value = val;
}

int main()
{
    // printf("Hello World");
    // int x;
    // x = hash("some");
    
    char *key_name;
    key_name = (char*)malloc(10*sizeof(char));
    
    int value;
    
    unsigned hash_val;
    char ch;
    
    put_in_dict("shubham", 100);
    put_in_dict("key2", 29);
    
    print_value("shubham");
    print_value("key2");
    print_value("sfdwg");
    
    // do {
    //     printf("\nkey :");
    //     scanf("%s", key_name);
        
    //     printf("\nval :");
    //     scanf("%d", &value);
        
    //     hash_val = hash(key_name);
        
    //     key_arr[hash_val].key = key_name;
    //     key_arr[hash_val].value = value;
        
    //     printf ("continue(Y/N) : ");
    //     scanf(" %c", &ch);
    // } while (ch == 'y' || ch == 'Y');
    
    
    // do {
    //     printf ("\nWant values (y/n) : ");
    //     scanf(" %c", &ch);
        
    //     printf("\nEnter key : ");
    //     scanf("%s", key_name);
        
    //     printf("\n Value for this key is : %d", get_value(key_name));
    // } while (ch == 'y' || ch == 'Y');

    
    
    return 0;
}
