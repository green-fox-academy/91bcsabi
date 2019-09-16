#include <iostream>
#include <map>
#include <string>


int main() {

    std::map<char,int> mymap;

    std::map<int,int> numbers;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

    std::map<char,int>::iterator it = mymap.begin();
    mymap.insert (it, std::pair<char,int>('a',97));
    mymap.insert (it, std::pair<char,int>('b',98));
    mymap.insert (it, std::pair<char,int>('c',99));
    mymap.insert (it, std::pair<char,int>('A',65));
    mymap.insert (it, std::pair<char,int>('B',66));
    mymap.insert (it, std::pair<char,int>('C',67));

    std::cout << "mymap contains:\n";
    for (it=mymap.begin(); it!=mymap.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';

    mymap.insert (it, std::pair<char,int>('D',68));

    std::cout << "mymap contains " << mymap.size() << " key-value pairs.\n";

    auto search = mymap.find(99);
    if (search != mymap.end()) {
        std::cout << "Found " << search->first << " " << search->second << '\n';
    } else {
        std::cout << "Not found\n";
    }

    it = mymap.find(97);
    mymap.erase (it);
    for (it=mymap.begin(); it!=mymap.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';


    it = mymap.find(100);
    if (it != mymap.end()) {
        std::cout << "Found" << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }

    mymap.clear();

    std::cout << "mymap contains " << mymap.size() << " key-value pairs.\n";








    return 0;
}