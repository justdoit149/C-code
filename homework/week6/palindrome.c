#include <stdio.h>

int main()
{
    int n,left,right;
    char a[100]={' '};
    int b[100]={0};

    for(int i = 0,j = 0; i < 100; i ++){
        if(j >= 100){
            j = j - 89;
            b[i] = j - 10;  
            continue;  
        }else{
            b[i] = j;
            j = j + 10;
        }
    }
//ιεΊζδ½

    scanf("%d",&n);
    getchar();
    scanf("%s",a);

    for(left = 0,right = n-1; left < right; left++, right--){
        if(a[left]!=a[right]){
            if(a[left] != '?' && a[right] == '?'){
                a[right] = a[left];
            }else if(a[left] == '?' && a[right] != '?'){
                a[left] = a[right];
            }
        }
    }

    int count = 0;
    if(n % 2 == 0){
        for(int i = 0; i < n / 2; i++){
            if(a[i] != '?'){
                putchar(a[i]);
            }else{
                printf("%.2d",count);
                count++;
            }
        }
        for(int i = n / 2; i < n ; i++){
            if(a[i] != '?'){
                putchar(a[i]);
            }else{
                printf("%.2d",b[count - 1]);
                count--;
            }
        }
    }else{
        for(int i = 0; i <= (n - 1) / 2; i++){
            if(a[i] != '?'){
                putchar(a[i]);
            }else{
                printf("%.2d",count);
                count++;
            }
        }
        for(int i = (n + 1) / 2; i < n ; i++){
            if(a[i] != '?'){
                putchar(a[i]);
            }else{
                printf("%.2d",b[count - 1]);
                count--;
            }
        }
    }

    return 0;
}