#include <stdio.h>

int main (void)
{
    int num1,num2,hasil;
    char operator;

    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Masukan Bilangan satu = \n");
    scanf("%d", &num1);
    printf("Masukan Bilangan Dua = \n");
    scanf("%d", &num2);
    
    switch (operator)
        {
        case '+' :
            hasil = num1 + num2;
            printf("Hasilnya adalah &d", hasil);
            break;

        case '-':
            hasil = num1 - num2;
            printf("Hasilnya adalah &d", hasil);
            break;

        case '*':
            hasil = num1 * num2;
            printf("Hasilnya adalah &d", hasil);
            break;

        case '/':
            hasil = num1 / num2;
            printf("Hasilnya adalah &d", hasil);
            break;

        default:
            printf("operator salah. \n");
            return 0;

        }          
} 