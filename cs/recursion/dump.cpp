#include <iostream>
#include <unordered_map>

// Simple rule-based responses
std::string get_response(const std::string& user_message) {
    std::string lower_case_message = user_message;
    // Convert the message to lowercase for case-insensitive comparisons
    for (char& c : lower_case_message) {
        c = std::tolower(c);
    }

    if (lower_case_message.find("hello") != std::string::npos) {
        return "Hi there! Welcome to the college chatbot.";
    } else if (lower_case_message.find("admissions") != std::string::npos) {
        return "For admissions information, please visit our website or contact the admissions office.";
    } else if (lower_case_message.find("orientation") != std::string::npos) {
        return "Orientation details can be found on our website. Make sure to attend and get to know your fellow students!";
    }
    // Add more rules based on common queries

    return "I'm sorry, I didn't understand that. If you have specific questions, feel free to ask!";
}

int main() {
    std::cout << "Welcome to the college chatbot." << std::endl;

    while (true) {
        std::string user_message;
        std::cout << "User: ";
        std::getline(std::cin, user_message);

        if (user_message == "exit") {
            std::cout << "Exiting the chatbot. Goodbye!" << std::endl;
            break;
        }

        // Get a response based on the user's message
        std::string response = get_response(user_message);

        // Display the response
        std::cout << "Chatbot: " << response << std::endl;
    }

    return 0;
}