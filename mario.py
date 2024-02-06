from cs50 import get_int


def print_symbol(num: int, symbol: str) -> None:
    """
    Prints the symbol provided num times
    """
    for i in range(num):
        print(f"{symbol}", end="")


def print_row(spaces: int, bricks: int) -> None:
    """
    Prints a double row of blocks and spaces
    """
    symbols = {'space': ' ', 'brick': '#'}

    print_symbol(spaces, symbols['space'])
    print_symbol(bricks, symbols['brick'])
    print(f"{symbols['space']}" * 2, end="")
    print_symbol(bricks, symbols['brick'])
    print()


def main() -> None:
    """
    Prints a double Super Mario row of blocks
    """
    while True:
        height = get_int("Height: ")
        if height > 0 and height < 9:
            break
        print("Please, enter a valid hight between 1 and 8")

    for row in range(1, height + 1):
        spaces = height - row
        bricks = height - spaces
        print_row(spaces, bricks)


main()
