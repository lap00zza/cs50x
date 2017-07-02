#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("bool is %lu byte = %lu bits\n", sizeof(bool), 8 * sizeof(bool));
    printf("char is %lu byte = %lu bits\n", sizeof(char), 8 * sizeof(char));
    printf("double is %lu byte = %lu bits\n", sizeof(double), 8 * sizeof(double));
    printf("float is %lu byte = %lu bits\n", sizeof(float), 8 * sizeof(float));
    printf("int is %lu byte = %lu bits\n", sizeof(int), 8 * sizeof(int));
    printf("long long is %lu byte = %lu bits\n", sizeof(long long), 8 * sizeof(long long));
    printf("string is %lu byte = %lu bits\n", sizeof(string), 8 * sizeof(string));
}