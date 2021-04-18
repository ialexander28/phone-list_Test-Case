#include <iostream>
#include <string>
#include <map>

int main()
{

        int n = 0; 
        std::string first3 = "201"; 
        std::string areacode[] = {"202", "204", "206", "207", "212", "213", "214", "218", "219", "220"};

        for (int n = 0; 10 > n <= areacode->length(); n++)
        { 
                if (n > 9){
                break;  
        }
        else
                std::cout << first3 + areacode[n] << "\n";
       
        }

        std::map<std::string, int> phone_numbers = {
                {"202", 1}, {"204", 1}, {"206", 1}, {"207", 1}, {"212", 1}, {"213", 1}, {"214", 1}, {"218", 1}, {"219", 1}, {"220", 1}
        };

        std::cout << "to end enter: exit";
        std::cout << '\n'; 

        bool p = true;
        while(p){
            std::string number;

            std::cout << "Enter a phone number: ";
            std::getline(std::cin, number);

            if(number == "exit"){
                    p = false;
                    break;
            }

            std::map<std::string, int>::iterator it = phone_numbers.find(number);
            if (it != phone_numbers.end()){
                    std::cout << it->first << it->second << " is a wireless number " << std::endl;
            }else{
                    std::cout << "No number found" << std::endl;
                    std::cout << '\n'; 
            }
        }

        return 0;
}