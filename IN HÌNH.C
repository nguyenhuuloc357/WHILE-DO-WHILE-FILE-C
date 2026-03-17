IN RA TÊN:L O C
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i==n||j==1)
printf("*");
else printf(" ");
}
printf("\n");
}
printf("\n");	
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i==1||i==n||j==1||j==n)
printf("*");
else printf(" ");
}
printf("\n");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i==1||i==n||j==1)
printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}
