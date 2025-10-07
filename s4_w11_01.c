#include <stdio.h>

// ฟังก์ชันเเบบ Parameter + No Return
void inputAndShow(int math, int physics, int chemistry) {
    printf("Score: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    int math, physics, chemistry;

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math score: ");
    scanf("%d", &math);
    printf("Enter Physics score: ");
    scanf("%d", &physics);
    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันเพื่อแสดงผล
    inputAndShow(math, physics, chemistry);

    return 0;
}