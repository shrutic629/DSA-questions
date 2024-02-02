#include <iostream>
#include <vector>

// Class representing a student record
class Student {
public:
    std::string name;
    int score;

    // Constructor to initialize the student record
    Student(std::string n, int s) : name(n), score(s) {}
};

// Function to perform linear search on student records
Student* linearSearch(const std::vector<Student>& students, const std::string& targetName) {
    for (const auto& student : students) {
        if (student.name == targetName) {
            // Return a pointer to the found student record
            return const_cast<Student*>(&student);
        }
    }

    // If the student is not found, return nullptr
    return nullptr;
}

int main() {
    // Sample student records
    std::vector<Student> studentRecords = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 95},
        {"David", 88},
        // Add more students as needed
    };

    // Input: Name of the student to search for
    std::string targetStudentName;
    std::cout << "Enter the name of the student to search for: ";
    std::cin >> targetStudentName;

    // Perform linear search
    Student* foundStudent = linearSearch(studentRecords, targetStudentName);

    // Check if the student was found
    if (foundStudent != nullptr) {
        std::cout << "Student found - Name: " << foundStudent->name << ", Score: " << foundStudent->score << std::endl;
    } else {
        std::cout << "Student not found." << std::endl;
    }

    return 0;