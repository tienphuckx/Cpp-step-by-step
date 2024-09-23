#include <iostream>
#include <vector>
#include <unordered_map>

#define TAB " "
#define NEW_LINE std::cout<<std::endl;


int main()
{
    std::vector<int> data = {1,2,3,4,5,6};

    /**Use For loop to loop a vector */
    for(int i=0; i< data.size(); i++) 
    std::cout << data[i] << TAB;
    NEW_LINE;

    for(int val : data) 
    std::cout << val << TAB;
    NEW_LINE;

    for (auto& val : data) 
    std::cout << val << TAB;
    NEW_LINE;

   /**Use Iterator */
    for(
        std::vector<int>::iterator it = data.begin();
        it != data.end();
        it++ )
    {
         std::cout << *it << TAB;
    }
    NEW_LINE;


    /**Use Iterator with an Unordered Map */
    std::unordered_map<std::string, int> stdMap;
    stdMap["phuc"] = 7;
    stdMap["hoang"] = 8;
    stdMap["anh"] = 9;

    for(
        std::unordered_map<std::string, int>::iterator it = stdMap.begin();
        it != stdMap.end();
        it++)
    {
        auto& key = it->first;
        auto& val = it->second;
        std::cout << key << " = " << val << std::endl;
    }
    NEW_LINE;

    /**Use Iterator with an Unordered Map - custom*/
    using UN_ORDERED_MAP = std::unordered_map<std::string, int>;
    UN_ORDERED_MAP map;
    map["john"] = 7;
    map["sam"] = 8;
    map["dean"] = 9;

    for(UN_ORDERED_MAP::const_iterator it = map.begin();
        it != map.end();
        it++) {
            auto& key = it->first;
            auto& val = it->second;
            std::cout << key << " - " << val << std::endl;
    }

    // other ways
    for (auto& kv : map) {
        auto& key = kv.first;  // Access key directly
        auto& val = kv.second; // Access value directly
        std::cout << key << " - " << val << std::endl;
    }

    for(auto [k,v] : map) {
         std::cout << k << " - " << v << std::endl;
    }

    return 0;
}