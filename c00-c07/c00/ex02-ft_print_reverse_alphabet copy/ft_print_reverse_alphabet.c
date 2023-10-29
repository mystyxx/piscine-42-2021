#include <unistd.h>

void ft_print_alphabet() {
    for(int i = 122; i> 96; i--) {
        write(1, &i,1);
    }
}

int main(int argc, char const *argv[]) {
    ft_print_alphabet();
    return 0;
}