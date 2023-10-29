#include <unistd.h>

void ft_print_comb() {
    for(int a = 0; a<=7; a++) {
        for(int b = a+1; b<=8; b++) {
            for(int c = b+1; c<=9; c++) {
                char char_a = '0' + a;
                char char_b = '0' + b;
                char char_c = '0' + c;

                write(1, &char_a, 1);
                write(1, &char_b, 1);
                write(1, &char_c, 1);

                write(1, ", ", 2);
            }
        }
    }
}

/*
int main(int argc, char const *argv[]) {
    ft_print_comb();
    return 0;
} */