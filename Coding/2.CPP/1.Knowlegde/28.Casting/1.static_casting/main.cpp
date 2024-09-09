int main(int argc, char const *argv[])
{
    float f = 3.5;
    int a = static_cast<int>(f); // a sẽ là 3

    void *ptr = &a;
    int *intPtr = static_cast<int *>(ptr);

    return 0;
}
