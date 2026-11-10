#include "project/hash_table.h"

#include <iostream>
#include <string>

int main() {
    HashTable table(11);

    table.insert("apple", 10);
    table.insert("banana", 20);
    table.insert("carrot", 30);
    table.insert("date", 40);

    std::cout << std::boolalpha;
    std::cout << "Contains apple: " << table.contains("apple") << '\n';
    std::cout << "Contains pear: " << table.contains("pear") << '\n';
    std::cout << "apple value: " << table.get("apple") << '\n';

    table.update("banana", 25);
    std::cout << "banana value after update: " << table.get("banana") << '\n';

    table.remove("carrot");
    std::cout << "Contains carrot after removal: " << table.contains("carrot") << '\n';

    std::cout << "Current size: " << table.size() << '\n';
    std::cout << "Load factor: " << table.loadFactor() << '\n';

    std::cout << "Keys:";
    for (const auto& key : table.keys()) {
        std::cout << ' ' << key;
    }
    std::cout << '\n';

    return 0;
}
