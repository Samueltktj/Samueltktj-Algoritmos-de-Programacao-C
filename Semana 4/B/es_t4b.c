#include <stdio.h>

int main()
{
    int n,s;
    long nn,ss,rr;
    scanf("%d",&n);
    scanf("%d",&s);
    int r= n - s;
    nn=1;
    while(n>1)
        nn*= n--;
    ss=1;
    while(s>1)
        ss*= s--;
    rr=1;
    while(r>1)
        rr*= r--;
    printf("%ld\n",nn/(ss*rr));
    return 0;
}
