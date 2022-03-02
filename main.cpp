#include <iostream>
#include<string>
std::string leftMail(std::string email, int temp) {
    std::string left;
    for (int i = 0; i < temp; i++)
        left += email[i];
    return left;
}
std::string rightMail(std::string email, int temp) {
    std::string right;
    for (int i = temp + 1; i < email.length(); i++)
        right += email[i];
    return right;
}
bool left(std::string left) {
    bool num = true;
    std::string sim="(),:;< >@[\]";
    if(left.length()<1 || left.length()>64)
    return false;
    else {
        if (left[0] != '.' || left[left.length() - 1] != '.')
        {
            for (int i = 0; i < left.length() && num; i++) {
                for (int j = 0; j < sim.length(); j++) {
                    if (left[i] == sim[j] || left[i] == '"' || left[i] == 127) {
                        return false;
                        num = false;
                        break;
                    }
                }
                if (left[i] == '.' && left[i + 1] == '.')
                {
                    return false;
                    num = false;
                }
            }
            return true;
        }
        else
            return false;
    }
}
bool right(std::string right) {
    std::string sim = "/:;<=>?@[\]^_`";
    bool num = true;
    if (right.length() < 1 || right.length() > 63)
        return false;
    else {
        if (right[0] != '.' || right[right.length() - 1] != '.')
        {
            for (int i = 0; i < right.length() && num; i++) {
                for (int j = 0; j < sim.length(); j++) {
                    if (right[i] == sim[j]) {
                        return false;
                        num = false;
                        break;
                    }
                }
                if (right[i] == '.' && right[i + 1] == '.')
                {
                    return false;
                    num = false;
                }
            }
            return true;
        }
        else
            return false;
    }
}
int main() {
    std::cout << "email" << std::endl;
    std::cout << "Input email :\n";
    std::string mail;
    int temp = 0;
    std::getline(std::cin, mail);
    for (int i = 0; i < mail.length(); i++) {
        if (mail[i] == '@') {
            temp = i;
            break;
        }
    }
    if (temp == 0)
        std::cout << "No\n";
    else if (right(rightMail(mail, temp)) && left(leftMail(mail, temp)))
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    return 0;
}
