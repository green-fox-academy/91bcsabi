#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> ListA;
    ListA.push_back("Apple");
    ListA.push_back("Avocado");
    ListA.push_back("Blueberries");
    ListA.push_back("Durian");
    ListA.push_back("Lychee");

    std::vector<std::string> ListB;
    ListB.push_back("Apple");
    ListB.push_back("Avocado");
    ListB.push_back("Blueberries");
    ListB.push_back("Durian");
    ListB.push_back("Lychee");

    std::string key = "Durian";
    if(std::find(ListA.begin(), ListA.end(), key) != ListA.end()){
        std::cout << "Found!" << std::endl;
    }else{
        std::cout << "Not found!" << std::endl;
    }

    ListB.erase (ListB.begin()+3);
    for(const std::string& n : ListB) {
        std::cout << n << '\n';
    }

    ListA.insert(ListA.begin()+3,"Kiwifruit");
    for(int y = 0; y < ListA.size(); ++y ){
        std::cout << ListA.at(y) << std::endl;
    }

    if(ListA == ListB){
        std::cout << "Size of the Lists are equal" << std::endl;
    }else{
        std::cout << "Size of the Lists are not equal" << std::endl;
    }
    for (int i = 0; i<=ListA.size()-1; ++i){
        if(ListA[i]=="Avocado"){
            std::cout << "index number for" << "Avocado" << "is " << i << std::endl;
        }
    }

    return 0;
}