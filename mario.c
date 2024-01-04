#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);
void print_symbol(int num, string symbol);
void check_valid_height(int height);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
        check_valid_height(height);
    }
    while (height < 1 || height > 8);

    for (int row = 1; row <= height; row++)
    {
        int spaces = height - row;
        int bricks = height - spaces;
        print_row(spaces, bricks);
    }
}

void check_valid_height(int height)
{
    if (height < 1)
    {
        printf("Min height is 1\n");
    }

    if (height > 8)
    {
        printf("Max height is 8\n");
    }
}

void print_symbol(int num, string symbol)
{
    for (int i = 0; i < num; i++)
    {
        printf("%s", symbol);
    }
}

void print_row(int spaces, int bricks)
{
    print_symbol(spaces, " ");
    print_symbol(bricks, "#");
    printf("  ");
    print_symbol(bricks, "#");
    printf("\n");
}
