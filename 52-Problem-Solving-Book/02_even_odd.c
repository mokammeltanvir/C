// Problem-2 even or odd
#include<stdio.h>
#include<string.h>

int main()
{
    int T, i,n,len;
    scanf("%d", &T);
    getchar();
    
    for(i = 1; i <= T; i++)
    {
       char n[100];
       gets(n);
        len = strlen(n);
        if(n[len-1]%2 == 0){
            printf("even\n");        
        }else {
            printf("odd\n");
        }
    }
    return 0;
}
