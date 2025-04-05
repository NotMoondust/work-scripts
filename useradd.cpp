#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string username;
    std::cout << "Enter the username to create: ";
    std::cin >> username;

    std::string command = "sudo useradd " + username;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "User '" << username << "' created successfully." << std::endl;
    } else {
        std::cerr << "Error creating user. Please check permissions or username availability." << std::endl;
    }
    
    command = "sudo passwd " + username;
    std::cout << "Type a password for the new user:" << std::endl;
    result = system(command.c_str());
    
    if (result == 0) {
        std::cout << "Password successfully set." << std::endl;
    } else {
        std::cerr << "Error setting password." << std::endl;
    }

    return 0;
}
