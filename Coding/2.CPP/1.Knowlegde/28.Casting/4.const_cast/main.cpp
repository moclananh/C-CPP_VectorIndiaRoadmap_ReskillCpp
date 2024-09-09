int main(int argc, char const *argv[])
{
    const int a = 10;
    int *p = const_cast<int *>(&a);
    *p = 20; // Thay đổi giá trị của a thông qua con trỏ p

    return 0;
}
