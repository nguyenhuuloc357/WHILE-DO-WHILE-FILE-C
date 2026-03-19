Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N sau đó gán lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số.

Ví dụ N = 278 -> 17 -> 8, vậy ta có dạng rút gọn của 278 là 8. Nhiệm vụ của bạn là tìm dạn rút gọn của 1 số nguyên không âm N cho trước

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;//ví dụ 278=2+7+8=1+7=8
scanf("%lld",&n);
while(n>=10){//còn có 2 chữ số
int s=0;//đi tính tổng rồi gán lại cho n
while(n){
s+=n%10;
n/=10;
}
n=s;
}
printf("%lld\n",n);
return 0;
}
