Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể.

Gợi ý : N chẵn => biểu diễn dưới toàn số 2, N lẻ thì biểu diễn dưới các số 2 thêm vào 1 số 3 ở cuối. Vì 2 và 3 là 2 số nguyên tố nhỏ nhất
Input 01
6
Output 01
3
2 2 2
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
if(n==1){
printf("-1\n");
}
else{
printf("%d\n",n/2);
if(n%2==0){
for(int i=1;i<=n/2;i++){
printf("2 ");
}
}
else{
for(int i=1;i<=n/2-1;i++){
printf("2 ");
}
printf("3 ");
}
}
return 0;
}






