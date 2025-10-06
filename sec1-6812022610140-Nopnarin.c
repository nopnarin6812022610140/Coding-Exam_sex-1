#include <stdio.h>

int main() {
    int days, i;
    float hours[10]; // เก็บจำนวนชั่วโมง ot สูงสุด 10วัน
    char income_level;

    // รับจำนวนวันทำ ot
    printf("กรอกวันทำ ot (1-10): ");
    scanf("%d", &days);

    // ตรวจสอบความถูกต้องของจำนวนวัน
    if (days < 1 || days > 10) {
        printf("จำนวนวันอบู่ระหว่าง 1-10เท่านั้น\n");
        return 1; // ออกจากโปรแกรมด้วยรหัสผิดพลาด
     
}
     // รับจำนวนชั่วโมง ot ของแต่ละวัน
    for (i = 0; i < days; i++) {
        printf("กรอกจำนวนชั่วโมง ot ของวันที %d: ", i + 1);
        scanf("%f", &hours[i]);

        if(hours[i] < 0) {
            printf("จำนวนชั่วโมง ot ต้องไม่ติดลบ\n");
            return 1; 
        }
    }

     // รับระดับรายได้หลักต่อเดือน
    printf("กรอกระดับรายได้หลักต่อเดือน (L =ต่ำ, M = ปานกลาง, H =สูง): ");
    scanf(" %c", &income_level);

    return 0;
}
