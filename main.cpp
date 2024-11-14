#include "Person.h"

int main() 
{
    Student student("Alice", 20, "MIT");
    Teacher teacher("Mr. Smith", 45, "High School", 55000.0);
    Driver driver("John", 30, "AB123CD", "DL456789");
    Doctor doctor("Dr. Brown", 50, "Cardiology", 25);

    student.showInfo();
    teacher.showInfo();
    driver.showInfo();
    doctor.showInfo();

    return 0;
}