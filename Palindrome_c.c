#include <stdio.h>
#include<string.h>
void is_palindrome(char str[]){
    int l=0;
    int r=strlen(str)-1;
    while(r>l){
        if(str[l++] != str[r--]){
            printf("not palindrome\n");
            return;
        }
       
    }
    
    printf("palindrome");
}
int main()
{
    is_palindrome("abcbac");
    return 0;
    
}
