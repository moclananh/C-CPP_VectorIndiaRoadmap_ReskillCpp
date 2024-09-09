Giải Thích Code
Các Thư Viện Được Bao Gồm:

#include <stdio.h>: Thư viện chuẩn I/O (nhập/xuất), cần thiết cho các hàm như printf.
#include <stdlib.h>: Thư viện chuẩn cung cấp các hàm như rand().
#include <unistd.h>: Thư viện tiêu chuẩn của Unix, cung cấp các hàm như sleep().
Định Nghĩa Struct:

Một cấu trúc (struct) có tên là isr_t được định nghĩa với hai thành phần:
char int_name[32];: Đây là mảng ký tự dùng để lưu tên của ngắt.
int (\*isr)();: Đây là con trỏ hàm, dùng để trỏ tới các hàm ISR (Interrupt Service Routine).
Các Hàm ISR:

Các hàm như keyboard_interrupt(), mouse_interrupt(), rtc_interrupt(), i2c_interrupt(), và usb_interrupt() là các hàm giả lập việc xử lý ngắt cho bàn phím, chuột, đồng hồ thời gian thực (RTC), giao tiếp I2C, và USB. Khi các hàm này được gọi, chúng sẽ in ra thông báo tương ứng với ngắt được xử lý.
Bảng Véc Tơ Ngắt (Interrupt Vector Table - IVT):

Mảng ivt[] là một bảng véc tơ ngắt, chứa danh sách các ngắt cùng với hàm ISR tương ứng. Mỗi phần tử của mảng là một isr_t, chứa tên của ngắt và con trỏ hàm trỏ tới ISR tương ứng.
Ví dụ, phần tử đầu tiên là {"isr0", keyboard_interrupt}, nghĩa là ngắt isr0 sẽ được xử lý bởi hàm keyboard_interrupt.
Hàm main():

Trong hàm main(), có một vòng lặp vô hạn (while (1)), trong đó chương trình sẽ:
In ra dòng chữ "Happy \"days\" all\n".
Chọn ngẫu nhiên một hàm ISR từ mảng ivt[] và gọi hàm đó. Việc chọn hàm ngẫu nhiên được thực hiện bằng cách sử dụng rand() % 5, lấy giá trị ngẫu nhiên trong khoảng từ 0 đến 4.
Tạm dừng 1 giây bằng cách sử dụng hàm sleep(1); trước khi tiếp tục vòng lặp.
Tóm Tắt Hoạt Động
Chương trình này mô phỏng cơ chế xử lý ngắt bằng cách sử dụng một bảng véc tơ ngắt chứa các con trỏ hàm. Mỗi lần lặp, chương trình sẽ ngẫu nhiên chọn một ngắt và thực thi hàm ISR tương ứng với ngắt đó. Điều này giúp minh họa cách các ngắt có thể được xử lý trong thực tế.
