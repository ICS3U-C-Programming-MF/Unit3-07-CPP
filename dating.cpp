// Copyright 2025 Maximiliano Fairman
// All rights reserved
// This program is a number checker
// that checks if the input is positive or negative
// or zero.

#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string good_looking, rich;

    // Ask the user if they are good looking
    std::cout << "Are you good looking? (yes/no): ";
    std::getline(std::cin, good_looking);

    // Convert to lowercase
    ranges::transform(good_looking, good_looking.begin(), ::tolower);

    // Ask the user if they are rich
    std::cout << "Are you rich? (yes/no): ";
    std::getline(std::cin, rich);

    // Convert to lowercase
    std::transform(rich.begin(), rich.end(), rich.begin(), ::tolower);

    // Check for invalid input first
    if ((good_looking != "yes" && good_looking != "no") ||
                            (rich != "yes" && rich != "no")) {
        std::cout << "Invalid input." << std::endl;
        std::cout << "Please answer with 'yes' or 'no'." << std::endl;

        // stop the program here so it doesn't print other messages
        return 0;
    }

    // If answers are good decide whether to approve or not
    if (good_looking == "yes" || rich == "yes") {
        std::cout << "You are approved to date!" << std::endl;

    } else {
        std::cout << "You are not approved to date." << std::endl;
    }

    return 0;
}
