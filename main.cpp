#include <iostream>

std::string leftMail(std::string email, int temp){
    std:: string left;
    for (int i=0; i<temp;i++)
        left+=email[i];
    return left;
}
std::string rightMail(std::string email,int temp){
    std:: string right;
    for (int i=temp+1; i<email.length();i++)
        right+=email[i];
    return right;
}

int main() {
    std::cout << "email" << std::endl;
    std::cout<<"Input email :";
    std::string mail;

    int temp=0;
    std::getline(std::cin,mail);
    for(int i=0;i<mail.length();i++){
        if(mail[i]=='@') {
            temp = i;
            break;
        }
    }
    leftMail(mail,temp);
    rightMail(mail,temp);


    return 0;
}
