#include <stdio.h>

// รับค่าคะเเนนนักเรียน 3 คน 3 วิชา
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for student %d:\n", i + 1);
        printf("Math: ");   
        scanf("%f", &arr[i][0]);
        printf("Physics: ");
        scanf("%f", &arr[i][1]);
        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

//เเสดงตารางคะเเนน
void printTable(float arr[3][3]) {
    printf("\nScores Table:\n");
    printf("%-10s %-10s %-10s %-10s\n", "Student", "Math", "Physics", "Chemistry");
    for (int i = 0; i < 3; i++) {
        printf("%-10d %-10.2f %-10.2f %-10.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
}

//เเสดงค่าเฉลี่่ยเเต่ละวิชา
void printAverages(float arr[3][3]) {
    float sumMath = 0, sumPhysics = 0, sumChemistry = 0;
    for (int i = 0; i < 3; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChemistry += arr[i][2];
    }
    printf("\nAverages per subject:\n");
    printf("Math: %.2f\n", sumMath / 3);
    printf("Physics: %.2f\n", sumPhysics / 3);
    printf("Chemistry: %.2f\n", sumChemistry / 3);
}

int main() {
    float scores[3][3]; // 3 students, 3 subjects

    // รับค่าคะแนนจากผู้ใช้
    inputScores(scores);

    // เเสดงตารางคะเเนน
    printTable(scores);

    // เเสดงค่าเฉลี่ยเเต่ละวิชา
    printAverages(scores);

    return 0;
}