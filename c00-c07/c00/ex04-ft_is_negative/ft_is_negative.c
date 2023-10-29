#include <unistd.h>

char ft_is_negative(int number) {
    if(number < 0) {
        write(1, "N", 1);
    }
    else{write(1, "P", 1);}
}

/*
int main(int argc, char const *argv[]) {
    ft_is_negative(-2);
    return 0;
}
*/
