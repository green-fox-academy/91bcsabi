#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

int main(){

    std::vector<std::string> names;
    std::cout << "The list before adding a name is : " << names.empty() << '\n';
    names.push_back("William");
    std::cout << "The list is after adding a name is : " << names.empty() << '\n';
    std::cout << "names contains " << names.size() << " elements.\n";
    names.push_back("John");
    names.push_back("Amanda");
    std::cout << "names contains " << names.size() << " elements.\n";
    std::cout << "The third element is : " << names[2] << std::endl;
    for(std::string n : names) {
        std::cout << n << '\n';
    }
    names.erase (names.begin()+1);
    std::cout << "After erasing the 2nd element\n";
    for(std::string n : names) {
        std::cout << n << '\n';
    }
    std::cout << "mylist backwards:\n";

    std::reverse(names.begin(),names.end());

    for(std::string n : names) {
        std::cout << n << '\n';
    }
    names.clear();
    std::cout << "mylist after cleared all:\n";
    for(std::string n : names) {
        std::cout << n << '\n';
    }


}