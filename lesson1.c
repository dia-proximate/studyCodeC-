#include <stdio.h>
#include <conio.h>


// ax + b = 0
int main(){

    float Toan,Ly,Hoa;

    printf("Nhap diem Toan: ");
    scanf("%f",&Toan);

    printf("Nhap diem Ly: ");   
    scanf("%f",&Ly);

    printf("Nhap diem Hoa: ");  
    scanf("%f",&Hoa);

    float DiemTB = (Toan + Ly + Hoa)/3;
    printf("Diem trung binh: %.2f",DiemTB);

    getch();
    return 0;
}