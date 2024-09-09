// // main.c
// #include <stdio.h>
// #include <dlfcn.h>
// #include "library.h"

// int main()
// {
//     void *handle;
//     int (*add)(int, int);
//     char *error;

//     // Open the shared library
//     handle = dlopen("./libsum.so", RTLD_LAZY);
//     if (!handle)
//     {
//         fprintf(stderr, "%s\n", dlerror());
//         return 1;
//     }

//     // Load the 'add' function from the shared library
//     *(void **)(&add) = dlsym(handle, "add");
//     if ((error = dlerror()) != NULL)
//     {
//         fprintf(stderr, "%s\n", error);
//         return 1;
//     }

//     // Call the 'add' function using the function pointer
//     int result = add(5, 3);
//     printf("The sum of 5 and 3 is %d\n", result);

//     // Close the shared library
//     dlclose(handle);
//     return 0;
// }
