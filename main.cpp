#include <iostream>
using namespace std;
class colors{
    public:
        const char* reset = "\u001b[0m";
        const char* black = "\u001b[30m";
        const char* red = "\u001b[31m";
        const char* green = "\u001b[32m";
        const char* yellow = "\u001b[33m";
        const char* blue = "\u001b[34m";
        const char* magenta = "\u001b[35m";
        const char* cyan = "\u001b[36m";
        const char* white = "\u001b[37m";
        const char* bright_black = "\u001b[30;1m";
        const char* bright_red = "\u001b[31;1m";
        const char* bright_green = "\u001b[32;1m";
        const char* bright_yellow = "\u001b[33;1m";
        const char* bright_blue = "\u001b[34;1m";
        const char* bright_magenta = "\u001b[35;1m";
        const char* bright_cyan = "\u001b[36;1m";
        const char* bright_white = "\u001b[37;1m";
};
colors color;
void information(string os, string version){
    cout << endl << color.white << "\t\t" << "Your OS: " << color.bright_white << os << endl << color.reset;
    cout << color.white << "\t\t" << "Your Version: " << color.bright_white << version << endl << color.reset;
    cout << color.white << "\t\t" << color.red << "〓" << color.green << "〓" << color.blue << "〓" << color.magenta << "〓" << color.cyan << "〓" << color.white << "〓" << color.bright_black << "〓" << color.bright_red << "〓" << color.bright_green << "〓" << color.bright_yellow << "〓" << color.bright_blue << "〓" << color.bright_magenta << "〓" << color.bright_cyan << "〓" << color.bright_white << "〓" << endl << color.reset;
}
int main(){
    cout << "\t\t" << color.magenta << "111000000000000000000000000000000000000000111" << endl;
    cout << "\t\t" << "111000000000000000000000000000000000000000111" << endl;
    cout << "\t\t" << "11100" << color.bright_blue << "CCCCCCCC" << color.reset << color.magenta << "0000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000111" << endl;
    cout << "\t\t" << color.magenta << "11100" << color.bright_blue << "CC" << color.reset << color.magenta << "0000000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000111" << endl;
    cout << "\t\t" << "11100" << color.bright_blue << "CC" << color.reset << color.magenta << "0000000000" << color.bright_green << "++++++++" << color.reset << color.magenta << "000" << color.bright_green << "++++++++" << color.reset << color.magenta << "000000111" << endl;
    cout << "\t\t" << color.magenta << "11100" << color.bright_blue << "CC" << color.reset << color.magenta << "0000000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000111" << endl;
    cout << "\t\t" << color.magenta << "11100" << color.bright_blue << "CCCCCCCC" << color.reset << color.magenta << "0000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000" << color.bright_green << "++" << color.reset << color.magenta << "000000000111" << endl;
    cout << "\t\t" << "111000000000000000000000000000000000000000111" << endl;
    cout << "\t\t" << "111000000000000000000000000000000000000000111" << endl;
    cout << "\t\t" << "111000000000000000000000000000000000000000111" << endl;
    cout << "\t\t" << "111000000000000000000000000000000000000000111" << endl;
    information("Mac", "18.1.12");
}
