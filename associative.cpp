#include <iostream>
#include <iomanip>

#include <map>
#include <set>

struct Date{
    Date(int year, int month, int day) : year(year), month(month), day(day) {}
    int year, month, day;

    bool operator<(Date other) {
        return std::make_tuple(year, month, day) <
            std::make_tuple(other.year, other.month, other.day);
    }
};

int main(){
//    std::hash<std::string> str_hash;
//    std::cout << str_hash("Niki") << std::endl;
//
//    std::map<std::string, unsigned> grades;
//    grades["Roman"] = 7;
//
//    std::pair<std::string, unsigned> victoria_grade{"Victoria", 8u};
//    grades.insert(victoria_grade);
//
//    auto denis_grade = std::make_pair("Denis", 3u);
//    grades.insert(denis_grade);
//
//    grades.insert({"Yury", 10u});
//
//    grades.emplace("Sophie", 9u);
//
//
//    std::cout << grades["Niki"] << std::endl;
//
//    for(const auto& [student, grade]: grades) {
//        std::cout << student << ": " <<
//            grade << std::endl;
//    }

//    std::multimap<int, std::string> groups_to_students;
//
//    groups_to_students.insert({831, "Niki"});
//    groups_to_students.insert({831, "Ann"});
//    groups_to_students.insert({831, "Valery"});
//    groups_to_students.insert({831, "Pyotr"});
//
//    groups_to_students.emplace(003, "Alex");
//    groups_to_students.emplace(003, "Ilya");
//
//    groups_to_students.emplace(004, "Marie");
//
//    for(const auto& [group, student]: groups_to_students) {
//        std::cout << std::setw(3) << std::setfill('0')
//        << group << ": " << student << std::endl;
//    }
//
//    std::cout << std::boolalpha <<
//    groups_to_students.contains(832) << std::endl;
//
//    auto something = groups_to_students.find(4);
//    std::cout << something->second << std::endl;
//
//    std::cout << groups_to_students.count(831) << std::endl;
//

    Date d1{2022, 2, 12};
    Date d2{2022, 2, 11};

    std::cout << std::boolalpha << (d1 < d2);
}
