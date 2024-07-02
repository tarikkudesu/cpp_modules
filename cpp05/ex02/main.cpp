/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:32:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 21:27:09 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat	me( "Rick" );
	AForm		birth( "Birth" );

	std::cout << me << std::endl;
	me.signForm( birth );
	std::cout << birth << std::endl;

	try {
		for (int i = 0; i < 100; i++)
			me.gradeUp();
	} catch (Bureaucrat::GradeTooHighException) {
		std::cout << me.getName() << " : already the highest grade possible" << std::endl;
	}
	
	std::cout << me << std::endl;
	me.signForm( birth );
	std::cout << birth << std::endl;
}

#include <iostream>
#include <stdexcept> // For std::invalid_argument

// Abstract base class
class AbstractClass {
private:
    const int minValue = 1;
    const int maxValue = 150;
    int attribute1;
    int attribute2;

protected:
    // Protected setter methods with try-catch blocks to enforce bounds
    void setAttribute1(int value) {
        try {
            if (value < minValue || value > maxValue) {
                throw std::invalid_argument("attribute1 must be between " + std::to_string(minValue) + " and " + std::to_string(maxValue));
            }
            attribute1 = value;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void setAttribute2(int value) {
        try {
            if (value < minValue || value > maxValue) {
                throw std::invalid_argument("attribute2 must be between " + std::to_string(minValue) + " and " + std::to_string(maxValue));
            }
            attribute2 = value;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

public:
    // Pure virtual function to enforce initialization
    virtual void initializeAttributes() = 0;

    // Example function to demonstrate usage
    void printAttributes() const {
        std::cout << "attribute1: " << attribute1 << std::endl;
        std::cout << "attribute2: " << attribute2 << std::endl;
    }
};

// Derived class implementing the abstract methods
class DerivedClass : public AbstractClass {
public:
    // Constructor to initialize attributes
    DerivedClass(int attr1, int attr2) {
        try {
            setAttribute1(attr1); // Initialize attribute1 and validate bounds
            setAttribute2(attr2); // Initialize attribute2 and validate bounds
        } catch (const std::invalid_argument& e) {
            std::cerr << "Initialization failed: " << e.what() << std::endl;
            // Optionally handle initialization failure here
        }
    }

    // Implementation of pure virtual function
    void initializeAttributes() override {
        // Here you can optionally do more initialization if needed
        // This method is required to satisfy the pure virtual function from AbstractClass
    }
};

int main() {
    DerivedClass obj(200, 100); // Create an instance of DerivedClass with invalid attribute1

    obj.printAttributes(); // Print the initialized attributes (might not be valid due to invalid initialization)

    return 0;
}
