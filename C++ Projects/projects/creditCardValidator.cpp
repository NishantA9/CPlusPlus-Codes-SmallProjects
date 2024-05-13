/*
Luhn Algorithm
----------------------------------------
1. Double every second digit from right to left
If doubled number is 2 digits, split them
2. Add all single digit from step 1
3. Add all odd numbered digits from right to left
4. sum results from steps 2 & 3
5. If step 4 is divisble by 10, # is valid
*/

 #include <iostream>

 int getDigit(const int number){
     return number % 10 + (number / 10 % 10);
 }


 int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    //reverse order to get odd digit
    for(int i = cardNumber.size()-1; i >= 0; i-=2){
        sum += cardNumber [i] - '0';
    }
    return sum;
 }

 int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    //reverse order to get even digit
    for(int i = cardNumber.size()-2; i >= 0; i-=2){
        sum += getDigit((cardNumber [i] - '0')*2);
    }
    return sum;
 }

 int main(){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a card number: "; 
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber); 

    if(result % 10 == 0){
         std::cout << cardNumber << " is valid" << std::endl;
    }else{
         std::cout << cardNumber << " is not valid" << std::endl;
    }
    
    return 0;
 }