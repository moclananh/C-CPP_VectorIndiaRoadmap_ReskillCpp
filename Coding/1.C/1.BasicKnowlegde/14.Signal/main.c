#include <stdio.h>
#include <signal.h>

// Hàm xử lý tín hiệu
void signalHandler(int signal)
{
    if (signal == SIGINT)
    {
        printf("Received SIGINT (Ctrl+C), exiting...\n");
        exit(0); // Thoát chương trình
    }
}

int main()
{
    // Đăng ký hàm xử lý tín hiệu cho SIGINT
    signal(SIGINT, signalHandler);

    // Chương trình chạy vô tận
    while (1)
    {
        printf("Running... Press Ctrl+C to exit.\n");
        sleep(1); // Tạm dừng 1 giây
    }

    return 0;
}
