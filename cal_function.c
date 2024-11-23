#include <stdio.h>
    int sum()
    {
        int a,b,s=0,sub=0,mul=0;
        float div=0;
        printf("enter your fav 2 no:");
        scanf("%d%d",&a,&b);
        s=a+b;
        sub=a-b;
        div=a/b;
        mul=a*b;
        printf("sum=%d\nsub=%d\nDiv=%f\nMulti=%d",s,sub,div,mul);
    }
    int main()
    {
        int c;
        printf("lets do some calculation\nplease answer the questions given\n");
        c=sum();
    
    return 0;
}
