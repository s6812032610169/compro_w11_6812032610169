#include <stdio.h>

// ฟังก์ชันเเบบ Parameter + Return
float average(int a, int b, int c) {
    return (a + b + c) / 3.0; //เเบ่งด้วย 3.0 เพื่อให้ได้ผลลัพธ์เป็น float
}
int main() {
    int math, physics, chemistry;
    float avg;

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math score: ");
    scanf("%d", &math);
    printf("Enter Physics score: ");
    scanf("%d", &physics);
    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันเพื่อคำนวณค่าเฉลี่ย
    avg = average(math, physics, chemistry);

    // แสดงผลค่าเฉลี่ย
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}