#include <stdio.h>
#include <math.h>

const char* cek_bilangan_prima(int n) {
    if (n <= 1) {
        return "BUKAN";
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return "BUKAN";
        }
    }

    return "PRIMA";
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", cek_bilangan_prima(n));

    return 0;
}
