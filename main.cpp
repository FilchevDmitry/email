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
bool left(std:: string leftMail){

}
bool right(std:: string rightMail){

}
int main() {
    std::cout << "email" << std::endl;
    std::cout<<"Input email :\n";
    std::string mail;

    int temp=0;
    std::getline(std::cin,mail);
    for(int i=0;i<mail.length();i++){
        if(mail[i]=='@') {
            temp = i;
            break;
        }
    }
    if (temp==0)
        std::cout<<"No\n";
    leftMail(mail,temp);
    rightMail(mail,temp);
    if (right&&left)
        std::cout<<"Yes\n";
    else
        std::cout<<"No\n";
    std::cout<<leftMail(mail,temp)<<std::endl;
    std::cout<<rightMail(mail,temp)<<std::endl;


    return 0;
}
