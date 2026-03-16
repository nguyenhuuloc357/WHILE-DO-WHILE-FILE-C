Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.
Input 01
12345
Output 01
5
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
ll dem=0;
while(n!=0){
dem++;
n/=10;
}
printf("%lld",dem);
return 0;
}






