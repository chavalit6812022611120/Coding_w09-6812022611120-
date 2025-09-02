#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บค่าเลขเริ่มต้นและเลขสุดท้าย
    int start_number;
    int stop_number;

    // ใช้ do-while loop เพื่อให้โปรแกรมทำงานอย่างน้อยหนึ่งครั้ง
    // และจะวนซ้ำเรื่อยๆ หากเงื่อนไขยังไม่เป็นจริง (start < stop)
    do {
        // รับค่าจากผู้ใช้
        printf("Enter Start number: ");
        scanf("%d", &start_number);

        printf("Enter Stop number: ");
        scanf("%d", &stop_number);

        // ตรวจสอบเงื่อนไขตามโจทย์
        if (start_number > stop_number) {
            printf("\nYour Start number is greater than Stop number, please try again!!\n\n");
        } else if (start_number == stop_number) {
            printf("\nYour Start number is equal to Stop number, please try again!!\n\n");
        }

    } while (start_number >= stop_number); // ลูปจะทำงานก็ต่อเมื่อ start มากกว่าหรือเท่ากับ stop

    // เมื่อเงื่อนไขถูกต้อง (start < stop) โปรแกรมจะมาทำงานส่วนนี้ต่อ
    printf("\nHere is the sequence of numbers:\n");

    // ใช้ for loop เพื่อพิมพ์ตัวเลขตั้งแต่ start_number ถึง stop_number
    for (int i = start_number; i <= stop_number; i++) {
        printf("%d ", i);
    }

    printf("\n"); // ขึ้นบรรทัดใหม่เพื่อความสวยงาม

    return 0; 
}