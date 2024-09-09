typedef struct
{
    int data;
    void (*print_data)(struct MyStruct *);
} MyStruct;

void print_data_impl(MyStruct *self)
{
    printf("%d\n", self->data);
}

int main()
{
    MyStruct obj;
    obj.data = 10;
    obj.print_data = print_data_impl;
    obj.print_data(&obj); // prints 10
    return 0;
}