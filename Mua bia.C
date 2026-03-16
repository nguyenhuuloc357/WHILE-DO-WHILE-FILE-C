TUY HÒA là vùng đất mà cư dân cực kì thích uống bia, vì thế để tăng số lượng bia bán ra các cửa hàng bia ở đây đưa ra khuyến mại như sau : Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở TUY HÒA , mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?

Bạn phải trả lời được câu hỏi này rồi hãy bắt tay vào code : Nếu có 7 vỏ chai thì đổi được bao nhiêu chai bia tất cả, nếu câu trả lời là 2 thì xem lại.

Gợi ý : Đầu tiên bạn tính số chai bia mua bằng tiền (N/28), sau đó dùng vòng lặp while lặp đi lặp lại chừng nào số vỏ bia còn >= 3

int bia = N / 28;
int vo = bia;
while(vo >= 3){
    //Tính số chai bia đổi bằng vỏ
    //Cập nhật vỏ 
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;//đồng xu
scanf("%d",&n);
int bia=n/28;
int vo=bia;
while(vo>=3){
int kp=vo/3;// lập biến tính số chai bia đổi bằng vỏ
bia+=kp;
vo=vo%3+kp;//cập nhật vỏ
}
printf("%d",bia);
return 0;
}






