#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char s[n];
    int a=0;
    scanf("%s",s);
    for(i=1;s[i]!='\0';i++){
        if(s[i-1]==s[i]){
            a++;
        }
    }
    printf("%d",a);
    

    return 0;
}