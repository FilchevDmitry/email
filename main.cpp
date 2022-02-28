#include <iostream>

int main() {
    std::cout << "email" << std::endl;
    std::cout<<"Input email"<<std::endl;
    std::string mail;
    std::string leftMail;
    std::string rightMail;
    int temp=0;
    std::getline(std::cin,mail);
    for(int i=0;i<mail.length();i++){
        if(mail[i]=='@') {
            temp = i;
            break;
        }
        else
            std::cout<<"No"<<std::endl;
    }
    std::cout<<leftMail<<std::endl;


    return 0;
}
