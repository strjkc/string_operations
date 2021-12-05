//
//  main.c
//  stringOperations
//
//  Created by Strahinja Jokic on 5.12.21..
//

#include <stdio.h>
#include <stdlib.h>

//find string length
int length(char string[]);
//change case
char* re_case(char string[]);
// to lower case
char* to_lower(char string[]);
// to upper case
char* to_upper(char string[]);
//count vowels
int count_v(char string[]);
//count consonants
int count_c(char string[]);
//count words
int count_w(char string[]);
//reverse string using second array
char* reverse_prim(char string[]);
//reverse string using original character array
void reverse_sec(char* string[]);
//compare strings
int compare(char string_1[], char string_2[]);
//is the string a palindrome
int is_palindrome(char string[]);
//check for duplicate characters O(n^2)
char* duplicates(char string[]);
//check for duplicate characters hashmap O(n)
char* duplicates_hash(char string[]);
//check for duplicate characters bitwise
char* duplicate_bit(char string[]);
//check if second string is an anagram of the first
int anagram(char string_1[], char string_2[]);
//print all permutations of a string


int main(int argc, const char * argv[]) {
    // insert code here...
    char s[] = "StraHINJa JokIC";
    int strLen = length(s);
    printf("length: %d\n", strLen);
    char* str = re_case(s);
    printf("case switch: %s\n", str);
    int vowels = count_v(s);
    printf("vowels: %d\n", vowels);
    int consonants = count_c(s);
    printf("consonants: %d\n", consonants);
    return 0;
}

int length(char string[]){
    int i = 0;
    while(string[i] != '\0')
        i++;
    return i;
}

char* re_case(char string[]){
    int strlen = length(string);
    char* returnString = (char*)malloc(sizeof(char)*strlen);
    for(int i = 0; i < strlen; i++){
        if(string[i] > 64 && string[i] < 91)
            returnString[i] = string[i] + 32;
        else if(string[i] > 96 && string[i] < 123)
            returnString[i] = string[i] - 32;
        else
            returnString[i] = string[i];
    }
    returnString[strlen] = '\0';
    return returnString;
}

char* to_lower(char string[]){
    int strlen = length(string);
    char* returnString = (char*)malloc(sizeof(char)*strlen);
    for(int i = 0; i < strlen; i++){
        if(string[i] > 64 && string[i] < 91)
            returnString[i] = string[i] + 32;
        else
            returnString[i] = string[i];
    }
    returnString[strlen] = '\0';
    return returnString;
}

char* to_upper(char string[]){
    int strlen = length(string);
    char* returnString = (char*)malloc(sizeof(char)*strlen);
    for(int i = 0; i < strlen; i++){
        if(string[i] > 96 && string[i] < 123)
            returnString[i] = string[i] - 32;
        else
            returnString[i] = string[i];
    }
    returnString[strlen] = '\0';
    return returnString;
}

int count_v(char string[]){
    char* normalised_string = to_lower(string);
    int counter = 0;
    int strlen = length(normalised_string);
    for(int i = 0; i < strlen ; i++){
        if(normalised_string[i] == 'a' || normalised_string[i] == 'e' || normalised_string[i] == 'i' || normalised_string[i] == 'o' || normalised_string[i] == 'u')
            counter++;
    }
    return counter;
}

int count_c(char string[]){
    char* normalised_string = to_lower(string);
    int counter = 0;
    int strlen = length(normalised_string);
    for(int i = 0; i < strlen ; i++){
        if(normalised_string[i] != 'a' && normalised_string[i] != 'e' && normalised_string[i] != 'i' && normalised_string[i] != 'o' && normalised_string[i] != 'u')
            counter++;
    }
    return counter;
}

