#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct
{
    char int_name[32];
    int (*isr)();
} isr_t;

int keyboard_interrupt()
{
    printf("Generating keyboard_interrupt..\n");
}

int mouse_interrupt()
{
    printf("mouse_interrupt...\n");
}

int rtc_interrupt()
{
    printf("rtc_interrupt...\n");
}

int i2c_interrupt()
{
    printf("i2c_interrupt..\n");
}

int usb_interrupt()
{
    printf("usb_interrupt...\n");
}
isr_t ivt[] =
    {
        {"isr0", keyboard_interrupt},
        {"isr1", mouse_interrupt},
        {"isr2", rtc_interrupt},
        {"isr3", i2c_interrupt},
        {"isr4", usb_interrupt},
};

int main()
{
    while (1)
    {
        printf("Happy \"days\" all\n");

        (ivt[rand() % 5].isr)();
        sleep(1);
    }
}