Nhập vào n, tính tổng các chữ số của n, và in ra kết quả
Input 
12341=1+2+3+4+1=11
Output 
Copy
11
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
ll s=0;
while(n!=0){
s+=n%10;
n/=10;
}
printf("%lld",s);
return 0;
}






