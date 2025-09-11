#include<iostream>
#include<string>

enum linetype_t {DASHED,SOLID,DOTDASHED};

std::string LineTypeToStr(linetype_t inLineTypeVal) {
    std::string returnString = "[Illegal Linetype]";
    switch (inLineTypeVal) {
        case DASHED:    returnString = "- -"; break; 
        case SOLID:     returnString =  "---"; break; 
        case DOTDASHED: returnString =  ".-."; break; 
    }
    return returnString;
}


int main() {
    int yourLineTypeInput;
    linetype_t myLineType = SOLID;

    std::cout << "What style of lines do you prefer? " << std::endl;
    std::cout << "   1 - Solid" << std::endl
              << "   2 - Dashed" << std::endl
              << "   3 - Dot-Dash" << std::endl;
    std::cout << ":: ";
    std::cin >> yourLineTypeInput;

    linetype_t yourLinetype = linetype_t(yourLineTypeInput-1);

    std::cout << "Your Linetype: " << LineTypeToStr(yourLinetype) << std::endl;
    std::cout << "My Linetype:   " << LineTypeToStr(myLineType) << std::endl;
 
    return 0;
}