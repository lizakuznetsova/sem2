#include <iostream>
#include <string>

int main() {
    int a;
    int s = 0;
    std::string str;
    std::cin >> a >> str;
    while (str != "A999AA") {
        if (a > 60) {
            if (( str[1] == str[2]) && (str[2] == str[3]))
                s += 1000;
            else if (( str[1] != str[2]) && (str[2] != str[3]) && (str[1] != str[3]))
                s += 100;
            else
                s += 500;
        }
        std::cin >> a >> str;
    }

    std::cout << s;
    return 0;
}
