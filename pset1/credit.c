#include <cs50.h>
#include <stdio.h>

string cardType(long num);
bool isValid(long num);

int main(void) {
    printf("Number: ");
    long l = get_long_long();
    
    string name = cardType(l);
    printf("%s\n", name);
    
    return 0;
}

// cardType returns AMEX, MASTERCARD, VISA or INVALID,
// depending on whether:
// 1: the credit card number is a valid number
// 2: the starting digits are recognized
string cardType(long num) {
    int first = 0;
    int second  = 0;
    
    if (isValid(num)) {
        // Get the 1st and the 2nd digit.
        while (num != 0) {
            second = first;
            first = num % 10;
            num = num / 10;
        }
        
        // Amex and MasterCard requires checking the
        // first 2 digits.
        switch (first * 10 + second) {
            case 34:
            case 37:
                return "AMEX";
            
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
                return "MASTERCARD";
        }
        
        // Visa requires first digit to be 4.
        if (first == 4) {
            return "VISA";
        }
        
        // If the number is valid but it does not match
        // any of the starting numbers that we recognize,
        // we mark it as invalid.
        return "INVALID";
    } else {
        return "INVALID";
    }
}

// isValid returns a boolean to denote whether
// the credit card number is valid or not. It
// uses Luhn's algorithm to validate.
bool isValid(long num) {
    int count = 0;
    int sum = 0;
    
    // Calculate checksum.
    while (num != 0) {
        int digit = num % 10;
        num = num / 10;
        count++;
        
        // Step 0 of Luhn's algorithm: We multiply
        // every second digit with 2 and then add
        // the products digits together.
        if (count % 2 == 0) {
            // NOTE: max value of product is 18 because
            // we are multiplying by 2 on single digits
            // and the largest single digit is 9.
            int product = digit * 2;
            
            // If product has more than 1 digit, i.e.
            // greater than 9 we add the sum of the
            // individual digits. So 12 will be 
            // 1 + 2 = 3.
            if (product / 10 != 0) {
                sum += product / 10;
                sum += product % 10;
            } else {
                sum += product;
            }
        } 
        // Step 1 of Luhn's algorithm: Add the sum to the 
        // sum of the digits that weren’t multiplied by 2.
        else {
            sum += digit;
        }
    }
    
    // Step 2 of Luhn's algorithm: If the total’s last digit 
    // is 0 (or, put more formally, if the total modulo 10 is
    // congruent to 0), the number is valid!
    if (sum % 10 == 0) {
        return true;
    } else {
        return false;
    }
}
