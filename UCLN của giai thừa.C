Cho 2 số a và b. Nhiệm vụ của bạn là tính ước chung lớn nhất của a giai thừa và b giai thừa
Input 01

2 5
Output 01

2

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll a,b;
scanf("%lld%lld",&a,&b);
int min=fmin(a,b);//tìm giá trị nhỏ hơn
ll gt=1;
for(int i=1;i<=min;i++){
gt*=i;
} 
printf("%lld",gt);
return 0;
}
