Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
5
Output 01
Copy
*****
*****
*****
*****
*****

*****
*   *
*   *
*   *
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){//lap n dong,di xay dung 
for(int j=1;j<=5;j++){
printf("*");
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
if(i==1||i==n||j==1||j==n)
printf("*");
else printf("#");
}
printf("\n");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i==1||i==n||j==1||j==n)
printf("%d ", i);
else printf("  ");
}
printf("\n");
}
return 0;
}






