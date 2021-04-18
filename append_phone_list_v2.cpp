#include <iostream>
#include <string>

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


return 0; 
}
