Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong đó ! là kí hiệu của giai thừa
Input 01
4
Output 01
2.6667

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
ll gt=1;
double s=0;
for(int i=1;i<=n;i++){
s+=(double)1/gt;//duyệt qua i thì cứ s=s+(tính thương)1/gt
gt*=i;
}
printf("%.4lf",s);
return 0;
}
