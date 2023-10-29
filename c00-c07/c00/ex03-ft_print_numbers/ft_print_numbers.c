#include <unistd.h>

void ft_print_numbers() {
    for(int i = 48; i<57; i++) {
        write(1, &i, 1);
    }
}
/*
int main(int argc, char const *argv[]) {
    ft_print_numbers();
    return 0;
} */
