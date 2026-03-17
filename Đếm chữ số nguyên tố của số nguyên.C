Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.
Input 01
1222333999888
Output 01
6
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;//đồng xu
scanf("%lld",&n);
int s=0;
while(n!=0){
int r=n%10;//lay chu so hang don vi
if((r==2||r==3||r==5||r==7))
s++;
n/=10;
}
printf("%d",s);
return 0;
}







