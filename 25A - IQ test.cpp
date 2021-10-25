#include<stdio.h>
 
int main()
{
    int n,a[101],b=0,c=0,i,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]%2==0){
          c++;
          x=i;
        }
        else{
          b++;
          y=i;
        }
    }
    if(c==1) printf("%d\n",x);
    else if(b==1) printf("%d\n",y);
 
    return 0;
}